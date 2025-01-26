
#include<iostream>
using namespace std;

class Car               /*The Class*/
{
  public:             /*Access specifier*/
  string brand;      /*Attribute (Data)*/
  string model;     /*Attribute (Data)*/
  int year;        /*Attribute (Data)*/

  Car(string x, string y, int z); /*Constructor declaration*/
};

/*Constructor definition outside the class*/
Car::Car(string x, string y, int z)
{
  brand = x;
  model = y;
  year = z;
}

int main()
{
   /*Create Car objects and call the constructor with different values*/
   Car carObj1("BMW", "X5", 1999);
   Car carObj2("Ford", "Mustang", 1969);

  /*Print values*/
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}