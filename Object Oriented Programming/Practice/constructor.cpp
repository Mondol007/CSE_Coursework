#include<iostream>
using namespace std;
class myclass
{
    int a;
public:
    myclass()
    {
        a=10;
    }
    void show()
    {
        cout<<a;
    }

};

/*myclass::myclass()
{
    a=10;
}

void myclass::show()
{
    cout<<a;
}
*/
int main()
{
    myclass ob;
//    myclass(10);
    ob.show();
}
