#include <iostream>
using namespace std;
main()
{
    int RR, WR, tulips;
    float priceRR, priceWR, priceT, priceTotal;

    cout << "Red Rose...";
    cin >> RR;
    cout << "White Rose...";
    cin >> WR;
    cout << "Tulips...";
    cin >> tulips;

    priceRR = RR * 2.00;
    priceWR = WR * 4.10;
    priceT = tulips * 2.50;

    priceTotal = priceRR + priceWR + priceT;

    if (priceTotal > 200)
    {
        float disc, priceDisc;
        disc = priceTotal * 0.20;
        priceDisc = priceTotal - disc;
        cout << "Original Price..." << priceTotal << endl;
        cout << "Price after Discount..." << priceDisc << endl;
    }
}
