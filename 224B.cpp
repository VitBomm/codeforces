#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int m,n,e;
    cin>>n>>m;
    int dem = 0;
    for(int i = 0 ; i<n;i++)
    {
        cin>>e;
        v1.push_back(e);
    }
    for( int i = 0 ; i<m;i++)
    {
        cin>>e;
        v2.push_back(e);
    }
    for(int i = 0, j = 0; i< n ;i++)
        {
            for (; j<m; j++) {
                if(v2[j]>=v1[i])
                    {
                        j++;
                        dem++; 
                        break;
                    }
            }
        }
    cout<<n-dem;
    return 0;
}
