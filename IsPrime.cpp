#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;

bool isPrime(unsigned num);

bool isPrime(unsigned number)
{
    for (unsigned i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
}
int main() {

    unsigned NumberPerLine = 0;
    int submission;
    const int MaxRange = 100;
    const unsigned MaxNumberPerLine = 10;
    const string FILE = "PrimeOut.txt";

    ofstream outputFileStream(FILE);
    if (outputFileStream.fail())
    {
        cout << "File " << FILE << " could not open. " << endl;
        cout << "Press enter once or twice to leave. "; cin.ignore(); cin.get();
        exit(EXIT_FAILURE);
    }

    do
    {
        cout << endl << "Enter the maximum range value from 1 to 100: "; cin >> submission;
        if (submission < 1 || submission > MaxRange)
        {
            cout << endl << "Invalid submission, please enter a number between 1 and 100 inclusive." << endl;
        }
        else
            break;

    } while (true);

    cout << "The primes that are <= " << submission << " are: " << endl;

    for(unsigned number = 2; number <= submission; number++)
    {
        if (isPrime(number))
        {
            NumberPerLine++;
            cout << setw(5) << number;
            outputFileStream << setw(5) << number;
            if (NumberPerLine == MaxNumberPerLine)
            {
                cout << endl;
                outputFileStream << endl;
                NumberPerLine = 0;
            }
        }
    }

    cout << endl;
    outputFileStream.close();
    return EXIT_SUCCESS;
}
