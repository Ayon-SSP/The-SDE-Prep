/* C++ implementation to find square root of given number
upto given precision using binary search. */
#include <bits/stdc++.h>
using namespace std;

/* Function to find square root
of given number upto given
precision */

float squareRoot(int number, int precision)
{
    int start = 0;
    int end = number;
    int mid; // for calculating middle element.

    // variable to store the answer
    float ans;

    /* for calculating integral part
     of square root of number */

    // implementation of binary search
    while (start <= end)
    {
        mid = end - ((end-start)/2);
        if (mid * mid == number)
        {
            ans = mid;
            break;
        }

        /* incrementing start if integral
        part lies on right side of the mid */
        if (mid * mid < number)
        {
            start = mid + 1;
            ans = mid;
        }

        /* decrementing end if integral part
        lies on the left side of the mid */
        else
        {
            end = mid - 1;
        }
    }

    /* For calculating the fractional part
    of square root upto given precision */
    float increment = 0.1;
    for (int i = 0; i < precision; i++)
    {
        while (ans * ans <= number)
        {
            ans += increment;
        }

        // loop terminates when (ans * ans) > number
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}

// Driver code
int main()
{

    // taking input from user
    int number,precision;
    cin>>number>>precision;

    // Invoking the function
    cout << squareRoot(number, precision) << endl;

    return 0;
}