#include <iostream>
#include <vector>

using namespace std;

int divide(int dividend, int divisor)
{
    int s = 0, e = dividend;
    int ans = 0;
    while (s <= e)
    {
        int mid = (e - s) / 2 + s;
        // check if mid is the answer, treat mid as Quotient
        // Quotient * Divisor + Reminder = Dividend,
        // Predicate: Quotient * Divisor <= Dividend
        if (mid * divisor <= dividend)
        {
            ans = mid;
            // go right for more precise answer
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

double myPrecisionDivide(int dividend, int divisor)
{
    double quotient = divide(dividend, divisor);
    int precision = 5;
    double step = 0.1;
    for (int i = 0; i < precision; ++i)
    {
        double j = quotient;
        while (j * divisor <= dividend)
        {
            quotient = j;
            j += step;
        }
        step /= 10;
    }
    return quotient;
}

int main()
{
    int dividend = 29;
    int divisor = 7;
    cout << myPrecisionDivide(dividend, divisor) << endl;
    return 0;
}