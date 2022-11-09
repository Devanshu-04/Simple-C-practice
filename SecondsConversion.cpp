#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    long long int input;

    cout << "Enter a number of seconds to be converted in to days, hours, minutes and remaining seconds: "; cin >> input;
    cout << endl;

    if (input <= 0) {
        cout << "seconds must be greater than zero" << endl;
    }
    else if (input > 0)
    {

        long long int day = input / (86400);
        long long int hour = (input % 86400) / 3600;
        input %= 3600;
        long long int minutes = input /60;
        input %= 60;
        long long int seconds = input;

        if (day > 0)
        {
            cout << "Day(s): " << day << endl;
        }
        if (hour > 0) {

           cout << "Hour(s): " << hour << endl;

        }
        if (minutes > 0) {

            cout << "Minute(s): " << minutes << endl;
        }
        if (seconds > 0)
        {
            cout << "Remaining second(s): " << seconds << endl;

        }
    }
    return 0;
}
