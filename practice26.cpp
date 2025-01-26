#include<iostream>
using namespace std;

class Room
{
    public:
    double length;
    double breadth; // Corrected the spelling of 'breath' to 'breadth'
    double height;

    double calculate_area();  // Fixed the method signature
    double calculate_volume();  // Fixed the method signature

    // Defined the methods outside the class
    double Room::calculate_area()  // Corrected the method name and syntax
    {
        return length * breadth;  // Corrected 'breath' to 'breadth'
    }

    double Room::calculate_volume()  // Corrected the method name and syntax
    {
        return length * breadth * height;  // Corrected 'breath' to 'breadth'
    }
};

int main()
{
    Room X;
    X.length = 500;
    X.breadth = 200;  // Corrected 'breath' to 'breadth'
    X.height = 500;

    double area = X.calculate_area();  // Captured the returned area
    double volume = X.calculate_volume();  // Captured the returned volume

    cout << "Area of Room: " << area << endl;
    cout << "Volume of Room: " << volume << endl;

    return 0;
}
