#include <iostream>
#include <map>
using namespace std;
bool check(int a[],int n)
{
    for(int i =0; i<n;i++)
    {
        if(n<a[i])
            return false;
        else
        {
            if(n%a[i] == 0)
                return true;
        }
    }
    return false;
}
void solved()
{
    map<int,bool> mapp;
    int temp[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i = 0; i < 14;i++)
    {
        mapp[temp[i]] = true;
    }
    int n;
    cin>>n;
    if(mapp[n])
        {
            cout<<"YES";
        }
    else
        {
            if(check(temp, n))
                cout<<"YES";
            else
                cout<<"NO";
        }
}
int main()
{
    solved();
    return 0;
}
