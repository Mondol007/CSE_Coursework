#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ara[2000];
int a[10000];
int i,c = 0;
int b[10000];
    for(i=0;;i++){

scanf("%s",ara);
        if(strcmp("$",ara)==0){
            break;
        }
        a[i]  = atoi(ara);
        i++;
    }
int w = 0;
    for(int i1=0;i1<=i-1;i1=i1+2){
    b[w] = a[i1];
    w++;
    }

    for(i=0;i<w;i++){
printf("%d ",b[i]);
    }
int t = w+1;
/// To inserert a data
int ara2[1000];
int u;
    h :
printf("\nWhere u want to enter \n1.Insert at first\t2.Insert at last\n3.Insert at middle\n\n");
scanf("%d",&u);
printf("\n");
    if(u==1){
printf("\nEnter the number to enter : ");
int qw;
scanf("%d",&qw);
int we[w+1];
        we[0] = qw;
        for(i=0;i<w;i++){
            we[i+1] = b[i];
        }
       for(i=0;i<w+1;i++){
printf("%d ",we[i]);
       }
    }	if(u==2){
printf("Enter the number to enter at last : ");
int qw;
scanf("%d",&qw);
int we[w+1];
we[w]=qw;
        for(i=0;i<w;i++){
            we[i] = b[i];
        }
        for(i=0;i<w+1;i++){
printf("%d ",we[i]);
        }

    }
    if(u==3){
printf("Enter the number to enter at middle : ");
int qw;
scanf("%d",&qw);
int we[t];
        we[0] = qw;
        for(i=0;i<t-1;i++){
            we[i+1] = b[i];
        }
       sort(we,we+t);
        for(i=0;i<w;i++){
printf("%d ",we[i]);
        }
    }
return 0;
 }

