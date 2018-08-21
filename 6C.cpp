#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,e;
vector<int> v;
int demA = 0, demB = 0;
int timeA = 0, timeB = 0;
int main() {
    cin>>n;
    for(int i = 0 ; i <n; i++)
        {
            cin>>e;
            v.push_back(e);
        }
    int i = 0;
    int j = n-1;
    while (i<=j) {
        if(timeA <= timeB)
            {
                timeA+=v[i];
                demA++;
                i++;
            }
        else
            {
                timeB+=v[j];
                demB++;
                j--;
            }
    }
    cout<<demA<<" "<<demB;
    return 0;
}
