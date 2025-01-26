
#include<iostream>
using namespace std;

class Room
{
    public:
    double length;
    double breath;
    double height;
    
    double calculate_area();
    double calculate_volume();
};

// Define the member functions outside the class
double Room::calculate_area()
{
    return length * breath;
}

double Room::calculate_volume()
{
    return length * breath * height;
}

int main()
{
    Room X;
    X.length = 5.5;
    X.breath = 8.8;
    X.height = 11.12;

    cout << "Area of the room: " << X.calculate_area() << endl;
    cout << "Volume of the room: " << X.calculate_volume() << endl;

    return 0; 
}
