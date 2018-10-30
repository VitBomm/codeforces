#include <iostream>
#include <vector>
#include <math.h>
#define MAX 1e6
using namespace std;
int main()
{
    //freopen("Output.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int n,in;
    int index=1;
    int column = 0;
    vector<int> v;
    v = vector<int>(MAX,0);
    cin>>n;
    while(n--)
    {
        column++;
        cin>>in;
        for(int i = 0; i<in; i++)
        {
            v[index] = column;
            index++;
        }
    }
    int m;
    cin>>m;

    while(m--)
    {
        cin>>in;
        cout<<v[in]<<endl;
    }
   return 0;
}
