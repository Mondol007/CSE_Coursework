
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
     int a[n],i,j,temp;
     int left,right,mid;
     left = 0;
     right = n-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
        if(a[i]>a[j])
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
        }
    }
    int c;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>c;
   while(left<=right)
   {
       mid = (left+right)/2;
       if(a[mid]==c)
       {
           cout<<"Item found at the position of "<<mid+1<<endl;
           break;
       }
       else if(a[mid]<c)
       {
           left = mid+1;
       }
       else{
        right = mid-1;
       }

   }

}
