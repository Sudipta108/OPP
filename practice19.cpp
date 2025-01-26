#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string firstName;
    string lastName;

    void displayFullName()
    {
        cout << "FullName: " << firstName << " " << lastName << endl ;
    }
};
int main()
{
    Person person;

    person.firstName = "Sudipta";
    person.lastName = "Halder";
    person.displayFullName();

    return 0;
}