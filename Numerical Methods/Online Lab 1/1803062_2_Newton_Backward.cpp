#include<bits/stdc++.h>
using namespace std;

int i, j;

float b_cal(float u, int n)
{
    float temp = u;
    for (int i = 1; i < n; i++)
        temp = temp * (u + i);
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
        for (int j = n - 1; j >= i; j--)
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << "\t";
        for (int j = 0; j <= i; j++)
        cout << y[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    float value;
    while(1){
    cout << "Enter an interpolating value: ";
    cin >> value;
    float result = y[n - 1][0];
    float p = (value - x[n - 1]) / (x[1] - x[0]);
    for ( i = 1; i < n; i++)
    {
        result = result + (b_cal(p, i) * y[n - 1][i]) / fact(i);
    }
    cout << "\n Value at " << value << " is " << result << endl;
    cout<<endl;
}
}



