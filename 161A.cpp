#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
vector<int> v1;
vector<int> v2;
vector<int> kq;
int n,m,x,y,e;
int dem = 0;
int main()
{
    cin>>n>>m>>x>>y;
    for(int i = 0 ; i <n;i++)
    {
        cin>>e;
        v1.push_back(e);
    }
    for(int i = 0 ; i <m;i++)
    {
        cin>>e;
        v2.push_back(e);
    }
    int j = 0;
    int i = 0;
    while (i<n && j < m) {
        
        if(v2[j]< v1[i]-x)
        {
            j++;
        }
        else if(v2[j]> v1[i]+y)
        {
            i++;
        }
        else
            {
                kq.push_back(i);
                kq.push_back(j);
                i++;
                j++;
                dem++;
            }
    }
    cout<<dem<<endl;
    for(int i = 0 ; i < kq.size();i++)
    {
        cout<<kq[i]+1<<" ";
        i++;
        cout<<kq[i]+1<<endl;
    }
    return 0;
}
