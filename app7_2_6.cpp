#include <iostream>
using namespace std;
double twoSix(double arr[], int len);
int main()
{
    double y[] = {3, -5, 7, 0, -2, 9, -8, 4, -1, 6, -10, 2, 5, -3, 1, -7, 8, -4, 10, -6};
    cout << twoSix(y, sizeof(y) / sizeof(y[0]));
}

double twoSix(double arr[], int len)
{
    double negatives[len] = {};
    double positives[len] = {};
    int q = 0, p = 0;
    // Разделение элементов на отрицательные и положительные
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] < 0)
        {
            negatives[q] = arr[i];
            q++;
        }
        else if (arr[i] > 0)
        {
            positives[p] = arr[i];
            p++;
        }
    }
    int k = min(p, q);
    // Вычисление суммы произведений
    double sum = 0.0;
    for (int i = 0; i < k; ++i)
    {
        sum += negatives[i] * positives[p - 1 - i];
    }

    return sum;
}