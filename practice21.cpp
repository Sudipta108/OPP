#include<iostream>
using namespace std;

class myVariables
{
    public:
    int a = 5 , b = 10;
    myVariables(): a(5) , b(10) {}

    void display()
    {
        cout << "a = " << a << " b = " << b <<endl;
    }
};
int main()
{
    myVariables myObj;
    myObj.display();

    return 0;
}