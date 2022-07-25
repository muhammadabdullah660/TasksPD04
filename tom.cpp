#include <iostream>
using namespace std;
main()
{
    int off, work, gameTime, diff, diffInt, diffmin;
    float diffhr;

    cout << "Holidays...";
    cin >> off;

    work = 365 - off;

    gameTime = ((work * 63) + (off * 127));

    if (gameTime < 30000)
    {

        diff = 30000 - gameTime;
        diffhr = diff / 60.0;

        diffInt = diffhr;

        diffmin = (diffhr - diffInt) * 60;

        cout << diffInt << " hours " << diffmin << " minutes" << endl;
        cout << "Tom sleeps well";
    }

    else if (gameTime > 30000)
    {

        diff = gameTime - 30000;
        diffhr = diff / 60.0;

        diffInt = diffhr;

        diffmin = (diffhr - diffInt) * 60;

        cout << diffInt << " hours " << diffmin << " minutes" << endl;
        cout << "Tom will run away";
    }
}