#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
vector<int> v;
int n,t,e;
int main()
{
    int time = 0;
    cin>>n>>t;
    for(int i = 0 ; i <n;i++)
    {
        cin>>e;
        v.push_back(e);
        
    }
    int j = 0;
    while (j<n && time + v[j] <= t) {
        time+=v[j];
        j++;
    }
    int max = j;
    for (int i = 0; i < n; ++i)
    {
        time -= v[i];
        while (j < n && time + v[j] <= t)
        {
            time += v[j++];
        }
        if (j - i - 1 > max)
        {
            max = j - i - 1;
        }
    }
    cout<<max;
    return 0;
}


