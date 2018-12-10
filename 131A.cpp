#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool check(string s)
{
    if(s[0] >= 97 && s[0]<= 122)
    {
        for(int i =1;i<s.length();i++)
            {
                if(s[i] >= 97 && s[i] <= 122)
                    return true;
            }
    }
    else
    {
        for(int i =1;i<s.length();i++)
        {
            if(s[i] >= 97  && s[i] <= 122)
                return true;
        }
    }
    return false;
}
void solved()
{
    string s;
    cin>>s;
    if(!check(s))
    {
       if(s[0] >= 97 && s[0]<= 122)
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
             s[0] -= 'a' - 'A';
        }
        else
            transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;
}
int main()
{
    solved();
    return 0;
}
