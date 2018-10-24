#include <iostream>
#include <vector>
#include <map>
using namespace std;

int x0,y0;
int main()
{
    int n;
    cin>>n>>x0>>y0;
    map<double,int> m;
    map<double,int>::iterator it;
    int isv=0,ish=0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x==x0)
        {
            isv=1;
        }else{
            if(y==y0)
            {
                ish=1;
            }else{
             double t = (x-x0)/(double)(y-y0);
            m[t]++;
            }
        }
    }

    cout<<m.size()+isv+ish<<endl;
    return 0;
}
