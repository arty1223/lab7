#include <iostream>
using namespace std;
double twoFour(double arr[], int len);
int main()
{
    double y[] = {3, -5, 7, 0, -2, 9, -8, 4, -1, 6, -10, 2, 5, -3, 1, -7, 8, -4, 10, -6};
    cout << twoFour(y, sizeof(y) / sizeof(y[0]));
}

double twoFour(double arr[], int len)
{
    double maxSum = arr[0] + arr[len - 1];
    // Проходим по всем симметричным парам массива
    for (int i = 1; i < len / 2; i++)
    {
        double currentSum = arr[i] + arr[len - 1 - i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }
    // Если количество элементов нечетное, проверяем средний элемент с самим собой
    if (len % 2 != 0 && 2 * arr[len / 2] > maxSum)
    {
        maxSum = 2 * arr[len / 2];
    }
    return maxSum;
}
