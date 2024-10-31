#include<bits/stdc++.h>
#define mx                          100005
#define lli                         long long int
#define ulli                        unsigned long long int
#define mset(a,b)                   memset(a, b, sizeof(a))
#define infile                      freopen("file.txt", "r", stdin);
#define outfile                     freopen ("out.txt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
#define test_case                   lli T; cin>>T;for(lli t=1;t<=T;t++)
#define scani(x)                    scanf("%d",&x);
#define printi(x)                   printf("%d\n",x);
#define scanli(x)                   scanf("%lld",&x);
#define printli(x)                  printf("%lld\n",x);
#define frep(i,from,to)             for(lli i=from;i<=to;i++)
#define frev(i,from,to)             for(lli i=from;i>=to;i--)
using namespace std;

int main()
{

    freopen("file.txt", "r", stdin);
    //outfile
    int T;
     cin>>T;
     for(int t=1;t<=T;t++)
    {
        bool is_lower=false,is_upper=false;
        int i,j,row,col;
        cin>>row>>col;
        int matrix[row][col];
        for( i=0;i<row;i++)
        {
            for( j=0;i<col;j++)
            {
                cin>>matrix[i][j];
            }
        }
        for( i=0;i<row;i++)
        {
            for( j=0;i<col;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n";
        int visitor1=0,visitor2=0,temp1=0,temp2=0;
        for( i=0;i<row;i++)
        {
            for( j=0;i<col;j++)
            {
                if(j<i)//Check if the matrix upper triangular
                {
                    visitor1++;
                    if(matrix[i][j]==0)
                    {
                        temp1++;
                    }
                    is_upper = (visitor1==temp1);

                }
                else if( j>i )//Check if the matrix lower triangular
                {
                    visitor2++;
                    if(matrix[i][j]==0)
                    {
                        temp2++;
                    }
                    is_lower = (visitor2==temp2);
                }
            }
        }
        if(is_upper && is_lower)
            cout<<"The matrix is diagonal matrix\n\n";
        else if(is_lower)
            cout<<"The matrix is lower triangular matrix\n\n";
        else if(is_upper)
            cout<<"The matrix is upper triangular matrix\n\n";
        else
            cout<<"The matrix is neither upper nor lower triangular matrix\n\n";
    }
    fclose (stdin);
    fclose (stdout);
}
