
#include<iostream>
using namespace std;

class MyClass      /*The Class*/
{
    public:       /*Access specifier*/
    MyClass()    /*Constructor*/
    {
        cout << "Hello World!";
    }
};

int main()
{
    MyClass myObj;   /*Create an object of MyClass (this will call the constructor)*/
    return 0;
}