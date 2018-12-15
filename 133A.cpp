#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void solved()
{
    char a[4] = {'H','Q','9'};
    string p;
    cin>>p;
    bool check = false;
    for(int i = 0; i<p.length();i++)
    {
        char temp = p[i];
        for(int i =0;i <4;i++)
        {
            if(temp == a[i])
                check = true;
        }
    }
    if(check)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    solved();
    return 0;
}
