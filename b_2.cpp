#include <iostream>
using namespace std;

// trade secone to 00:00:00
int main()
{
    int t;
    char c;

    while (true)
    {
        cout << "Enter the number of seconds: ";
        if (!(cin >> t))
        {
            cin.clear();
            cin.ignore(1000000000, '\n');
            cout << "Please enter a number !!!" << endl;
            continue;
        }
    

    int hour, minute, second;
    hour = (t / 3600) % 24;
    minute = (t % 3600) / 60;
    second = (t % 3600) % 60;
    //"The time is: " << (hour > 12 ? hour - 12 : hour) << ":" << minute << ":" << second << (hour > 12 ? "PM" : "AM") << "\n";

    cout << "The time is: " << hour << ":" << minute << ":" << second << "\n";
    
    while (true)
        {
            cout << "Do you want to continue? (y/n): "; cin >> c;
            c = tolower(c);
            if (c == 'y') break;
            if (c == 'n') return 0;
            cout << "Please enter y or n !!!" << endl;
            cin.clear();
            cin.ignore(10000,'\n');
        }
    }

}