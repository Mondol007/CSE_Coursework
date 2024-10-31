#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int i;
    float num, sum = 0, e1 = 0,e2 = 0,error;
    FILE *fptr;
    fptr = fopen("G:/program.txt","r");
    if(fptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    for(i=0;i<9;i++)
    {
        fscanf(fptr, "%f\n",&num);
        sum+=num;
    }
    e1 = 2*0.05;
    e2 = 7*0.005;
    error = e1 + e2 + 0.01;
    printf("%.1f +- %.2f",sum,error);
}
