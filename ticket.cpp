#include <iostream>
using namespace std;
main()
{
    string name;
    float price, fprice;

    cout << "Enter name of country...";
    cin >> name;
    cout << "Enter price in Dollars...";
    cin >> price;
    if (name == "Ireland")
    {
        fprice = price * 0.1;
    }
    else
    {
        fprice = price * 0.05;
    }
    fprice = price - fprice;
    cout << "Price = " << fprice;
}