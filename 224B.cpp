#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
vector<int> v;
vector<int> used;
int n,k,e;
int l = 0, r = l;
int dem =0;
int main()
{
    cin>>n>>k;
    // Sắp Xếp Phân Phối
    used = vector<int>(1e5+1,0);
    if(k == 1)
    {
        cout<<1<<" "<<1;
        return 0;
    }
    for(int i = 0 ; i <n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    while (r <n && dem<k) {
        used[v[r]]++;
        if(used[v[r]] == 1)
            {
                dem++;
            }
        r++;
    }
    if(dem < k)
    {
        cout<<-1<<" "<<-1;
        return 0;
    }
    while (l < n && dem == k) {
        if(used[v[l]] > 1)
                {
                    used[v[l]]--;
                    l++;
                }
            else
                {
                    break;
                }
    }
    cout<<l+1<<" "<<r;
    return 0;
}


