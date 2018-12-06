#include <iostream>
#include <map>
using namespace std;

void solved()
{
    int count = 0;
    map<int,int> mapp;
    int n,e;
    cin>>n;
    for(int i = 0 ; i < n;i++)
    {
        cin>>e;
        if(e == 4)
        {
            count++;
        }
        else
        {
            mapp[e]++;
        }
    }
    int temp1 = mapp[1];
    int temp3 = mapp[3];
    if(temp3 >= temp1)
    {
        count+= temp1;
        temp3 = temp3 - temp1;
        count += temp3;
        if(mapp[2]*2 %4 != 0)
        {
            count += mapp[2]*2/4 +1;
        }
        else
        {
            count += mapp[2]*2/4;
        }
    }
    else
    {
        count+= temp3;
        temp1 = temp1 - temp3;
        int check = 0;
        if(mapp[2]*2 %4 != 0)
        {
            if(mapp[2]*2 >4)
                {
                    count += mapp[2]*2/4;
                }
            check = 1;
        }
        else
        {
            count += mapp[2]*2/4;
        }
        if(check == 1)
        {
            if(temp1 >=2)
                {
                    temp1 -=2;
                    count++;
                }
            if(temp1 >=4)
            {
                if(temp1 % 4 != 0)
                {
                    count+= temp1/4 +1;
                }
                else
                {
                    count += temp1/4;
                }
            }
            else
            {
                if(temp1 != 0)
                    {
                        count += 1;
                    }
            }
        }
        else
        {
            if(temp1 % 4 != 0 )
            {
                count+= temp1/4 +1;
            }
            else
            {
                count += temp1/4;
            }
        }
        
    }
    cout<<count;
}
int main()
{
    solved();
    return  0;
    
}
