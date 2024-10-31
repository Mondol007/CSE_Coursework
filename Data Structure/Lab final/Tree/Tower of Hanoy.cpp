#include<iostream>
using namespace std;

void hanoi(int n, char fr, char tr, char ar)

{
        if(n==1)
        {
            cout<<"Move disk 1 from fr to tr: ";
            return;
        }
        hanoi(n-1,fr,ar,tr);
        cout<<"Move disk from" <<fr<<"to"<<tr;
        hanoi(n-1,ar,tr,fr);

}

main()
{
    int n;
    cin>>n;
    hanoi(n,'A','C','B');
}
