#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
char easytolower(char in) {
    if(in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}
int main()
{
    char a[105],b[105];
    cin>>a>>b;
    int len = strlen(a);
    for(int i = 0 ; i<len;i++)
    {
        a[i] = easytolower(a[i]);
        b[i] = easytolower(b[i]);
    }
    cout<<strcmp(a,b);
    return 0;
}
