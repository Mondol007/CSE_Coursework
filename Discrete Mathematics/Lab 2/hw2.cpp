#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    bool sp[2][2][2], p[2][2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==1 || j==1)
            {
                p[i][j] = 1;
            }
            else
            {
                p[i][j] = 0;
            }
        }
    }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                for(k=0;k<2;k++)
                {
                    if(p[i][j]==1&&!k==0)
                    {
                        sp[i][j][k] = 0;
                    }
                    else
                    {
                        sp[i][j][k] = 1;
                    }
                }
            }
        }
        cout<<"i"<<"\t"<<"j"<<"\t"<<"k"<<"\t"<<"((i|j)->!k)"<<endl;
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                for(k=0;k<2;k++)
                {
                   cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<sp[i][j][k]<<endl;
                }
    }
    }
}

