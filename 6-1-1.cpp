#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int LENGTH = 100;
    double prices[LENGTH];

    int number_of_prices = 0;
    double price;
    while (cin >> price)
    {
        if (number_of_prices < LENGTH)
        {
            prices[number_of_prices] = price;
            number_of_prices++;
        }
    }

    double sum = prices[0] + prices[number_of_prices - 1];
    cout << fixed << setprecision(2);
    cout << "Sum of first and last: " << sum << endl;

    return 0;
}
