#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, a, b;
int tong =0;
int dem = 0;
bool option(int a,int b)
{
    return a<b;
}
int main() {
    cin >>n>>a>>b;
    vector<int> v;
    v.resize(n);
    for(int i =0 ; i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),option);
    int gt = v[b-1];
    while(gt<v[b])
    {
        dem++;
        gt++;
    }
    cout<<dem;
    return 0;
}
