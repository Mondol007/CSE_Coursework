#include<bits/stdc++.h>
using namespace std;

int i, j;

float f_cal(float x, int n)
{
    float temp = x;
    for (int i = 1; i < n; i++)
        temp = temp * (x - i);
    return temp;
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n = 4;
    float x[] = {1, 3, 5, 7};
    float y[n][n];
    y[0][0] = 24;
    y[1][0] = 120;
    y[2][0] = 336;
    y[3][0] = 720;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
    }
    for (i = 0; i < n; i++)
    {
        cout  << x[i] << "\t";
        for (j = 0; j < n - i; j++)
            cout << y[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    float value;
    while(1){
    cout << "Enter an interpolating value: ";
    cin >> value;
    float sum = y[0][0];
    float p = (value - x[0]) / (x[1] - x[0]);
    for (int i = 1; i < n; i++)
    {
        sum = sum + (f_cal(p, i) * y[0][i]) / fact(i);
    }
    cout << "\n Value at " << value << " is " << sum << endl;
    cout<<endl;
}
}



