#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    bool check = false;
    cin>>a;
    for(int i = 0; i<n-1;i++)
    {
        if(a[i] != a[i+1])
        {
            cout<<"YES"<<endl;
            cout<<a[i]<<a[i+1];
            check = true;
            break;
            
        }
    }
    if(!check)
    {
        cout<<"NO"<<endl;
    }
    return 0;
