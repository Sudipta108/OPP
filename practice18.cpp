#include<iostream>
#include<iomanip>
using namespace std;

class Tempereture
{
    float fahrenheit;

public:
    void getTemperature()
    {
        cout << "Enter a tempereture value in Fahrenheit: ";
        cin >> fahrenheit;
    }
    void convertToCelsius()
    {
        cout << fixed << setprecision(2);
        cout << fahrenheit << "deg Fahrenheit is equal to : " << ((fahrenheit - 32 * 5 / 9)) << "deg Celcius";

    }
};

int main()
{
    Tempereture todaysForecast
    todaysForecast.getTemperature();
    todaysForecast.convertToCelcius();

    return 0;
}
