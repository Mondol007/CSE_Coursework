#include <bits/stdc++.h>
using namespace std;

int priority(char a)
{
    int temp;
    if (a == '^')
        temp = 1;
    else  if (a == '*' || a == '/')
        temp = 2;
    else  if (a == '+' || a == '-')
        temp = 3;
    return temp;
}
class output
{
public:
    char data[1000];
    int p=0;
    int postfix(char m)
    {
        data[p]=m;
        p++;
        return p;
    }
    void showpostfix()
    {
        cout<< "Postfix exp: ";
        for(int m=0; m<p; m++)
        {
            cout<< data[m];
        }
    }
    void showprefix()
    {
        char g[1000];
        for(int d=0,e=p-1; d<p; d++, e--)
        {
            g[d]=data[e];
        }
        cout<< "Prefix exp: ";
        for(int m=0; m<p; m++)
        {
            cout<< g[m];
        }
    }
};
int main()
{
    string infix;
    cout << "Enter an arithmetic expression: ";
    getline(cin, infix);

    stack<char> operator_stack;

    output ob;
    int q;
    cout<< "1.Postfix\n2.Prefix\nEnter: ";
    cin>>q;
    if(q==1)
    {

        for (int i = 0; i < infix.length(); i++)
        {
            if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
            {
                while (!operator_stack.empty() && priority(operator_stack.top()) <= priority(infix[i]))
                {
                    ob.postfix(operator_stack.top());
                    operator_stack.pop();
                }
                operator_stack.push(infix[i]);
            }
            else if (infix[i] == '(')
            {
                operator_stack.push(infix[i]);
            }
            else if (infix[i] == ')')
            {
                while (operator_stack.top() != '(')
                {
                    ob.postfix(operator_stack.top());
                    operator_stack.pop();
                }
                operator_stack.pop();
            }
            else
            {
                ob.postfix(infix[i]);
            }
        }

        while (!operator_stack.empty())
        {
            ob.postfix(operator_stack.top());
            operator_stack.pop();
        }

        ob.showpostfix();
    }

    if(q==2)
    {
        string temp;
        int y= infix.length();
        int a,k,p;
        for(a=0; a< y; a++)
        {
            temp[a]=infix[a];
        }
        for(k=0, p=y-1; k< y ; k++, p--)
        {
            if(temp[p]=='(')
            {
                infix[k]= ')';
                continue;
            }
            if(temp[p]==')')
            {
                infix[k]= '(';
                continue;
            }
            infix[k]=temp[p];
        }


        for (int i = 0; i < y; i++)
        {
            if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
            {
                while (!operator_stack.empty() && priority(operator_stack.top()) <= priority(infix[i]))
                {
                    ob.postfix(operator_stack.top());
                    operator_stack.pop();
                }
                operator_stack.push(infix[i]);
            }
            else if (infix[i] == '(')
            {
                operator_stack.push(infix[i]);
            }
            else if (infix[i] == ')')
            {
                while (operator_stack.top() != '(')
                {
                    ob.postfix(operator_stack.top());
                    operator_stack.pop();
                }
                operator_stack.pop();
            }
            else
            {
                ob.postfix(infix[i]);
            }
        }
        while (!operator_stack.empty()){
            ob.postfix(operator_stack.top());
            operator_stack.pop();
        }
        ob.showprefix();
    }
    return 0;
}
