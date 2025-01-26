#include<iostream>
using namespace std;
int main()
{
    char day;
    cout<<"Our Daily Routine"<<endl<<"Enter day:";
    cin>>day;

    switch(day)
    {
        case 'S':
        cout<<"Sunday"<<endl<<"EEE(1204L)"<<endl<<"CSE(1201)"<<endl<<"EEE Theory(1203)";
        break;

        case 'M':
        cout<<"Monday"<<endl<<"Discrete Math(1206)"<<endl<<"CSE(1201)"<<endl<<"Engineering Drawing Lab(1205L)";
        break;

        case 'T':
        cout<<"Tuesday"<<endl<<"Discrete Math(1206)"<<endl<<"English(1208)"<<endl<<"CSE Lab(1202L)";
        break;

        case 'W':
        cout<<"Wednesday"<<endl<<"English(1208)"<<endl<<"CSE Lab(1201)"<<endl<<"CO-ordinate Geometry and Vector Analaysis(1207)"<<endl<<"OOP Lab";
        break;

        case 'H':
        cout<<"Thursday"<<endl<<"EEE (1204L)"<<endl<<"Co-ordinate Geometry and Vector Analaysis(1207)"<<endl<<"Discrete Math(1206)";
        break;

        default:
        cout<<"Invalid Input !!!";
        break;
    }

    return 0;
}
