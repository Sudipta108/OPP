#include<iostream>
using namespace std;

class myAge
{
    public:
    int age = 22;

    void display()
    {
        cout << "I am " << age << " years old." << endl;
    }

};
int main()
{
    myAge myObj;
    myObj.display();

    return 0;
}