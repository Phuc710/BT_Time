#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    double x;
    const double pi = 3.14;

    while (true)
    {
        cout << "Enter the angle of the circle: ";cin >> x;
        if (!(x))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        
        double radians = x * (pi / 180);
        cout << "The angle in radians is: " << radians << endl;
        double sinx = sin(radians);
        cout << "the sin of the angle is: " << sinx << endl;
        if (x == 0)
        {
            break;
        }
    }
}
