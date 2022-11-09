#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int coin = 0, totalFlips = 0, Heads = 0, Tails = 0;
    double heads, tails;
    unsigned int seed;
    char answer;

    //seed = time(0);
    cin >> seed;
    srand(seed);

    do
    {
        coin = rand() % 2 + 1;

        if (coin == 1)
        {
            cout << "Flip = Heads" << endl;
            Heads++;
        }
        else if (coin == 2)
        {
            cout << "Flip = Tails" << endl;
            Tails++;
        }
        totalFlips++;

        cout << "Would you like to flip again? Enter Y for Yes or N for No ";
        cin >> answer;

        while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
        {
            cout << "input is not valid ";
            cin >> answer;
        }
    }
    while (answer == 'Y' || answer == 'y');

    cout << endl;
    heads = static_cast<double>(Heads) / static_cast<double>(totalFlips) * 100.0;
    tails = static_cast<double>(Tails) / static_cast<double>(totalFlips) * 100.0;

    cout << Heads << " of the " << totalFlips << " flips were Heads or " << setprecision(1) << fixed << showpoint << heads << "% were Heads." << endl;
    cout << Tails << " of the " << totalFlips << " flips were Tails or " << setprecision(1) << fixed << showpoint << tails << "% were Tails." << endl;

    return 0;
}
