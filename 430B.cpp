#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,k,e,x;
vector<int> v;
int dem = 0;
int templeft = 0;
int tempright = 0;
int main() {
    cin>>n>>k>>x;
    for(int i = 0 ; i <n; i++)
        {
            cin>>e;
            v.push_back(e);
        }
    int left = -1;
    int right = -1;
    int max = 0;
    for(int i = 0; i <n;i++)
        {
            if(v[i] == v[i+1] && v[i] ==x)
                {
                    dem += 2;
                    left = i - 1;
                    right = i + 2;
                    do{
                        if(v[left] == v[left-1])
                            {
                                templeft = 2;
                            }
                        else
                            {
                                templeft = 1;
                            }
                        if(v[right] == v[right+1])
                            {
                                tempright = 2;
                            }
                        else
                            {
                                tempright = 1;
                            }
                        if(tempright + templeft >=3 && v[left] == v[right])
                            {
                                left -= templeft;
                                right += tempright;
                                dem += tempright+templeft;
                            }
                        else
                            {
                                break;
                            }
                    }while (true);
                    if(dem > max)
                        {
                            max = dem;
                        }
                    dem = 0;
                    templeft = -1;
                    tempright = -1;
                }
        }
    cout<<max;
return 0;
}
