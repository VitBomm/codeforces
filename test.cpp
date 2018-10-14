#include <bits/stdc++.h>
#define MAX 1000005
using namespace std;
vector<pair<long long int,long long int>> v;
int n,e;
long long int _MAX(const pair<long long int,long long int> &a,const pair<long long int,long long int> &b)
{
                return abs(a.first-b.first) + abs(a.second-b.second);
}
int main(){
    cin>>n;
    for(int i = 0 ; i <n;i++)
    {
        cin>>e;
        v.push_back(make_pair(e,i+1));
    }
    sort(v.begin(),v.end());
    pair<long long int,long long int> a = v[0];
    pair<long long int,long long int> b = v[1];
    long long int temp = _MAX(a,b);
    pair<long long int,long long int> c;
    for(int i = 2; i <n;i++)
    {
        c = v[i];
        if( _MAX(b,c)>= temp)
        {
            temp = _MAX(b,c);
            a = c;
        }
        if(_MAX(a,c)>=temp)
        {
            temp = _MAX(a,c);
            b = c;
        }

    }
    cout<<temp;
    return 0;
}
