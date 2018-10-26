#include <map>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    map<int, bool> mapp;
    queue<int> temp;
    int n,e;
    cin>>n;
    for(int i =0; i<n;i++)
    {
        cin>>e;
        temp.push(e);
    }
    int tempp;
    int countt =0;
    for(int i = 0 ;i<n;i++)
    {
        countt =0;
        cin>>e;
        if(mapp[e] == false)
        {
            tempp = temp.front();
            temp.pop();
            while (tempp != e && !temp.empty()) {
                mapp[tempp] = true;
                tempp = temp.front();
                temp.pop();
                countt++;
            }
            countt++;
        }
        cout<<countt<<" ";
    }
    return 0;
}
