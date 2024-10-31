#include<iostream>
using namespace std;
int main()
{
    int i=0;
    float a[100], b[100];
    b[0]=0;
    cout << "Our base equation is: -6 + 11x - 6x^2 + x^3 = 0" << endl;
    a[0] = 1;
    a[1] = (11/6);
    a[2] = -1;
    a[3] = (1/6);
    b[1] = 1;
    b[2] = a[1] * b[1];
    b[3] = a[1] * b[2] + a[2] * b[1];

    for(i=4;i<=8;i++)
    {
           b[i] = a[1] * b[i-1] + a[2] * b[i-2] + a[3] * b[i-3];
    }
    float root = b[7] / b[8];
    cout <<endl<< "root is: " << root<<endl;
    return 0;
}

