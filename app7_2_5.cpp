#include <iostream>
using namespace std;

double twoFive(double arr[], int len);
int main()
{
    double y[] = {3, -5, 7, 0, -2, 9, -8, 4, -1, 6, -10, 2, 5, -3, 1, -7, 8, -4, 10, -6};

    // int arr[ARR_SIZE] = {1,232,3532,412,55,662,17};
    // get_arr(arr, ARR_SIZE);
    cout << twoFive(y, sizeof(y) / sizeof(y[0]));
}

double twoFive(double arr[], int len)
{
    double min_ = __DBL_MAX__;
    for (int i = 1; i < len; ++i)
    {
        if (min_ > arr[i - 1] * arr[i])
        {
            min_ = arr[i - 1] * arr[i];
        }
    }
    return min_;
}
