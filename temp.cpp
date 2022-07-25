#include <iostream>
using namespace std;
main()
{
    float temp1, temp2, diff;

    cout << "Temp City 1...";
    cin >> temp1;
    cout << "Temp City 2...";
    cin >> temp2;
    if (temp1 > temp2)
    {
        diff = temp1 - temp2;
    }
    else if (temp2 > temp1)
    {
        diff = temp2 - temp1;
    }
    if (diff > 10)
    {
        cout << "Difference is too big" << endl;
    }
    cout << "Program ends";
}
