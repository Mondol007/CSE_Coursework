#include <bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("file.txt","r",stdin);
    int m, n, i, j, k;
    bool upper=false, lower=false;
    for(k=0; k<3; k++)
    {
    cin>>m>>n;
    int a[m][n];
        for( i=0; i<m; i++)
        {
            for( j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
            cout<<endl;
        }
        for( i=0; i<m; i++)
        {
            for( j=0; j<n; j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        int p=0,q=0,r=0,s=0;
        for( i=0; i<m; i++)
        {
            for( j=0; j<n; j++)
            {
                if(j<i) {
                    p++;
                    if(a[i][j]==0){
                        r++;
                    }
                    upper = (p==r);
             }
             else if(j>i){
                q++;
                    if(a[i][j]==0){
                        s++;
                    }
                    lower = (q==s);
             }
            }
            }
            cout<<endl;
        if(upper){
            cout<<"Upper Triangular"<<endl;
        }
        else if(lower){
            cout<<"Lower Triangular"<<endl;
        }
       else {
            cout<<"Non-Triangular"<<endl;
        }
    }
    fclose (stdin);
    fclose (stdout);
    return 0;

}

