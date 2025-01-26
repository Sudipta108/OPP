#include<iostream>
using namespace std;

class sum
{
    public:
    int sum = 10 + 15;

    void display()
    {
        cout << " The sum of the 10 + 15 = " << sum <<endl ;
    }
};
int main()
{
    sum mySum;
    mySum.display();

    return 0;
}