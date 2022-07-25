#include <iostream>
using namespace std;
main()
{
    float area;
    string shape;

    cout << "Enter name of shape...";
    cin >> shape;

    if (shape == "Square")
    {

        float side;
        cout << "Enter Length of side...";
        cin >> side;
        area = side * side;
        cout << "Area = " << area << endl;
    }
    else if (shape == "Rectangle")
    {

        float length, width;
        cout << "Enter Length...";
        cin >> length;
        cout << "Enter Width...";
        cin >> width;
        area = length * width;
        cout << "Area = " << area << endl;
    }
    else if (shape == "Circle")
    {

        float radius;
        cout << "Enter Radius...";
        cin >> radius;
        area = 3.14 * radius * radius;
        cout << "Area = " << area << endl;
    }
    else if (shape == "Triangle")
    {

        float base, height;
        cout << "Enter Base...";
        cin >> base;
        cout << "Enter Height...";
        cin >> height;
        area = 0.5 * height * base;
        cout << "Area = " << area << endl;
    }
}
