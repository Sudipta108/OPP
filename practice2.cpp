#include<iostream>
using namespace std;

int main()
{
    char operation ;
    double num1 , num2 ;

    cout << "Select an operation to perform (+ , - , * , /): " ;
    cin >> operation ;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2 ;


    switch (operation)
    {
        case '+' :
        cout << "Result: " << num1 + num2 << "\n\n";
        break ;

        case '-' :
        cout << "Result: " << num1 - num2 << "\n\n";
        break ;

        case '*' :
        cout << "Result: " << num1 * num2 << "\n\n";
        break ;

        case '/' :

        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << "\n\n";
        }

        else
        {
            cout << "Error! Division by zero is not allowed" << "\n\n";
        }
        break ;

        default :
        cout << "Error! Invalid operation." ;
        break ;

    } 

    return 0 ;
}