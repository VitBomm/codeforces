#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int n;
int dem = 0,tong = 0;
int main() {
    cin >>n;
    vector<int> v;
    v.resize(12);
    for(int i = 0; i<12;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int i =0;
    while (n>tong && i<12) {
        tong += v[i];
        i++;
        dem++;
    }
    
    if(n>tong)
    {
        cout<<-1;
    }
    else
    {
        cout<<dem;
    }
    return 0;
}
