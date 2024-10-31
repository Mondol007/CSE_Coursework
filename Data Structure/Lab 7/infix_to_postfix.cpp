#include<stdio.h>
#include<bits/stdc++.h>
char stack[50];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int checkprior(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

main()
{
    char expression[100];
    char *p, x;
    printf("Enter the expression :: ");
    scanf("%s",expression);
    p = expression;
    while(*p != '\0')
    {
        if(isalnum(*p))
            printf("%c",*p);
        else if(*p == '(')
            push(*p);
        else if(*p == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(checkprior(stack[top]) >= checkprior(*p))
                printf("%c",pop());
            push(*p);
        }
        p++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
}
