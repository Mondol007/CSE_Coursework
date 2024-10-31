#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,n,q,count = 0,y,z,temp;
    char b[1000];
    int a[1000];
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;;i++){
            scanf("%s",b);
            if(strcmp("$",b)==0)
            {
                break;
            }
    a[i] = atoi(b);
    count++;
    }
    printf("The array is: \n");
    for(i=0;i<count;i++)
    {
        printf("%d\t",a[i]);
    }
    cout<<"\nMenu:\n"<<"1.Insertion.\n"<<"2.Deletion.\n"<<endl;
    cin>>x;
    if(x==1)
    {
        cout<<"Enter the position to insert array element: \n";
        cout<<"1.Enter at first.\n"<<"2.Enter at last.\n"<<"3.Enter at middle with sorting.\n";
        cin>>y;
        int c[count+1];
        if(y==1)
        {
            cout<<"Enter the element to insert at first: ";
            cin>>z;
             c[0] = z;
            for(i=0;i<count+1;i++)
            {

                c[i+1] = a[i];
            }

            for(i=0;i<count+1;i++)
                cout<<c[i]<<"\t";
        }
        if(y==2)
        {
           cout<<"Enter the element to insert at last: ";
            cin>>z;
            for(i=0;i<count;i++)
            {
                c[i] = a[i];
            }
            c[count] = z;
            for(i=0;i<count+1;i++)
                cout<<c[i]<<"\t";
        }
        if(y==3)
        {
            cout<<"Enter the element to insert at middle with sorting: ";
            cin>>z;
            for(i=0;i<count;i++)
            {
                c[i] = a[i];
            }
            c[count] = z;
            for(i=0;i<count+1;i++){
                for(j=i+1;j<count+1;j++){
                        if(c[i]>c[j]){
                        temp = c[j];
                        c[j] = c[i];
                        c[i] = temp;
                        }
                }
            }
            for(i=0;i<count+1;i++)
                cout<<c[i]<<"\t";
        }
    }
    if(x==2)
    {
        cout<<"Enter the postition to delete array element: ";
        cin>>z;
        for(i=z-1; i<count-1; i++)
        {
            a[i] = a[i + 1];
        }
        count--;
    cout<<"\nElements of array after deletion are : ";
    for(i=0; i<count; i++)
    {
        printf("%d\t", a[i]);
    }
    }
}

