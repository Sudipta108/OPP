
#include<iostream>
using namespace std;

class MyClass         /*The Class*/
{
    public:           /*Access specifier*/

    void myMethod()   /*Method function*/
    {
        cout<<"Hello World!";  /*Prints Hello World!*/

    }
};
    int main()
    {
        MyClass myObj;             /*Create an object of Myclass*/
        myObj.myMethod();          /*Call the method*/
        return 0;
    }
