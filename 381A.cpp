#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
vector<int> v;
int sum1 = 0;
int sum2 = 0;
int a = 0;
int n,e;
int main()
{
    cin>>n;
    for(int i = 0 ; i <n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    int i = 0;
    int j = n-1;;
    while (i<=j) {
        a++;
        if(v[i]>v[j])
        {
            if(a%2)
                {
                    sum1+= v[i];
                }
            else
                {
                    sum2 += v[i];
                }
            i++;
        }
        else
        {
            if(a%2)
                {
                    sum1+= v[j];
                }
            else
                {
                    sum2 += v[j];
                }
            j--;
        }
        
    }
    cout<<sum1<<" "<<sum2;
    return 0;
}
