#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n = 6;
    float x[] = { 15, 20, 25, 30, 35, 40 };
    //float pi=2*acos(0.0);
    float y[n][n];
    y[0][0] = 0.2588190;
    y[1][0] =  0.3420201;
    y[2][0] = 0.4226183;
    y[3][0] = 0.5;
	y[4][0] = 0.5735764;
	y[5][0] =0.6427876;

    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--)
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << setw(7) << y[i][j]
                 << "\t";
        cout << endl;
    }

    int value = 38;

    float sum = y[n - 1][0];
    float p = (value - x[n - 1]) / (x[1] - x[0]),pp=1;
    cout<<p<<endl;
    for (int i = 1; i < n; i++) {
        pp=pp*(p+(i-1));
        pp=pp/i;
        sum = sum + (pp * y[n - 1][i]);
    }
    cout << "\n Value at " << value << " is "
         << sum << endl;
    return 0;
}
