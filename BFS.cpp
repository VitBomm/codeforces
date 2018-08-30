#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 100
int V, E;
bool visited[MAX];
int path [MAX];
vector<int> graph[MAX];
void BFS(int s)
{
    for(int i = 0; i <V;i++)
    {
        visited[i] = false;
        path[i] = -1;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for(int i = 0; i <graph[u].size();i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v] = true;
                q.push(v);
                path[v] = u;
            }
        }
    }
}
//void PrintPath(int s, int f)
//{
//    int b[MAX];
//    int m = 0;
//    if(f == s)
//    {
//        cout<<s;
//        return;
//    }
//    if(path[f]== -1)
//        {
//            cout<<"No Path";
//        }
//    while (1) {
//        b[m++] = f;
//        f = path[f];
//        if(f == s){
//            b[m++] = s;
//            break;
//        }
//    }
//    for(int i = m -1;i>=0;i--)
//        {
//            cout<<b[i] <<" ";
//        }
//}
void PrintPathRecursion(int s, int f)
{
    if(s == f)
    {
        cout<< f <<" ";
    }
    else
    {
        if(path[f] == -1)
            cout<<"No Path"<<endl;
        else
        {
            PrintPathRecursion(s,path[f]);
            cout<<f<<" ";
        }
    }
}
int main(){
//    freopen("INPUT.INF", "rt", stdin);
    int u,v;
    cin>>V>>E;
    for(int i = 0; i <E;i++)
        {
            cin>> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
    // 6 8 0 1 0 3 1 2 1 3 1 5 2 5 3 4 3 5
    int s = 0;
    int f = 5;
    BFS(s);
    PrintPathRecursion(s, f);
    return 0;
}

