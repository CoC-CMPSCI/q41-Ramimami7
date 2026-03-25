#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // TODO

    switch(choice){
        case 1:
            cout << "Enter radius of the cirlce: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            break;
        case 2:
            cout << "Enter height and width: ";
            cin >> height;
            cin >> width;
            area = width * height; 
            break;
        case 3:
            cout << "Enter triangle's base and height: ";
            cin >> base;
            cin >> height;
            area = base * height * 0.5;
            break;
        case 4:
            cout << "Program stopped";
            return 0;
        default:
            cout <<"Wrong number";
            return 1;



    }

    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;

    return 0;
}
