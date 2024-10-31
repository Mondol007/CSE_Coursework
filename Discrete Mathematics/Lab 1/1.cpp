#include<iostream>
using namespace std;
int main()
{
    int i,j;
    bool negation, conjunction[2][2], disjunction[2][2], Ex_or[2][2], conditional[2][2], Bi_conditional[2][2];
    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            //conjunction
             if(i==1 && j==1)
             {
                 conjunction[i][j] = true;
             }
             else
             {
                  conjunction[i][j] = false;
             }
             //disjunction
             if(i==1 || j==1)
             {
                 disjunction[i][j] = true;
             }
             else
             {
                  disjunction[i][j] = false;
             }
             //Ex_or
             if(i==j)
             {
                 Ex_or[i][j] = false;
             }
             else
             {
                  Ex_or[i][j] = true;
             }
             //Conditional
             if(i==1 && j==1 || i==0)
             {
                 conditional[i][j] = true;
             }
             else
             {
                  conditional[i][j] = false;
             }
             //Bi-Conditional
             if(i==j)
             {
                Bi_conditional[i][j] = true;
             }
             else
             {
                 Bi_conditional[i][j] = false;
             }
        }
}
    //For print conjunction
        cout<<"i"<<"\t"<<"j"<<"\t"<<"conjunction[p][q]"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<i<<"\t"<<j<<"\t"<<conjunction[i][j]<<endl;
        }
    }
        cout<<endl;
        //For print disjunction
        cout<<"i"<<"\t"<<"j"<<"\t"<<"disjunction[p][q]"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<i<<"\t"<<j<<"\t"<<disjunction[i][j]<<endl;
        }
    }
        cout<<endl;
        //For print conjunction
        cout<<"i"<<"\t"<<"j"<<"\t"<<"Ex_or"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<i<<"\t"<<j<<"\t"<<Ex_or[i][j]<<endl;
        }
    }
    cout<<endl;
    //For print conjunction
        cout<<"i"<<"\t"<<"j"<<"\t"<<"conditional[p][q]"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<i<<"\t"<<j<<"\t"<<conditional[i][j]<<endl;
        }
    }
    cout<<endl;
    //For print Bi_conditional
    cout<<"i"<<"\t"<<"j"<<"\t"<<"Bi_conditional[p][q]"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<i<<"\t"<<j<<"\t"<<Bi_conditional[i][j]<<endl;
        }
    }
        cout<<endl;
        //for print negation
        cout<<"p"<<"\t"<<"negation of p"<<endl;
        for(i=0;i<2;i++)
        {
            if(i==0)
            {
                cout<<i<<"\t"<<1<<endl;
            }
            else
            {
                cout<<i<<"\t"<<0<<endl;
            }
        }
}
