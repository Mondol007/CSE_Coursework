#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

    int top = -1;
    char a[1000];

void push(char p)
    {
        a[top] = p;
        top++;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"expression is invalid.";
            return;
        }
            top--;
        }
    void find_top()
    {
            if(top==-1)
            {
                cout<<"Expression is valid\n";
            }
            else
            {
                cout<<"Expression is invalid\n";
            }
    }


main()
{
    //stack ob;
    int i;
    char ch[1000];
    cout<<"Enter parenthesis: ";
    fflush(stdin);
    //i= 0;
    for(i=0;ch[i-1]!='$';i++)
    {
       scanf("%c",&ch[i]);
      // i++;
   // while(ch[i-1]!='$');
    if(ch[i]=='('||ch[i]=='{'||ch[i]=='[')
        {
            push(ch[i]);
        }
        else if(ch[i]==')'){
            pop();
        }
        else if(ch[i]=='}'){
            pop();
        }
        else if(ch[i]==']'){
            pop();
        }
    }
    find_top();
}
