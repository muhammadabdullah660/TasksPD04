#include <iostream>
using namespace std;
main()
{
    int num, num1, num2;

    cout << "Enter a number...";
    cin >> num;
    if (num == 11)
    {
        cout << "eleven";
    }
    else if (num == 12)
    {
        cout << "Twelve";
    }
    else if (num == 13)
    {
        cout << "Thirteen";
    }
    else if (num == 14)
    {
        cout << "Forteen";
    }
    else if (num == 15)
    {
        cout << "Fifteen";
    }
    else if (num == 16)
    {
        cout << "Sixteen";
    }
    else if (num == 17)
    {
        cout << "Seventeen";
    }
    else if (num == 18)
    {
        cout << "Eigtheen";
    }
    else if (num == 19)
    {
        cout << "Nineteen";
    }
    else if (num == 100)
    {
        cout << "hundred";
    }
    else if (num == 10)
    {
        cout << "ten";
    }
    else
    {
        num2 = (num % 10);
        num1 = ((num % 100) - num2) / 10;
    }

    if (num1 == 0)
    {
        cout << "zero";
    }

    if (num1 == 2)
    {
        cout << "Twenty";
    }
    if (num1 == 3)
    {
        cout << "Thirty";
    }
    if (num1 == 4)
    {
        cout << "Forty";
    }
    if (num1 == 5)
    {
        cout << "Fifty";
    }
    if (num1 == 6)
    {
        cout << "Sixty";
    }
    if (num1 == 7)
    {
        cout << "Seventy";
    }
    if (num1 == 8)
    {
        cout << "Eigthy";
    }
    if (num1 == 9)
    {
        cout << "Ninety";
    }

    if (num2 == 1)
    {
        cout << "one";
    }
    if (num2 == 2)
    {
        cout << "two";
    }
    if (num2 == 3)
    {
        cout << "three";
    }
    if (num2 == 4)
    {
        cout << "four";
    }
    if (num2 == 5)
    {
        cout << "five";
    }
    if (num2 == 6)
    {
        cout << "six";
    }
    if (num2 == 7)
    {
        cout << "seven";
    }
    if (num2 == 8)
    {
        cout << "eigth";
    }
    if (num2 == 9)
    {
        cout << "nine";
    }
}