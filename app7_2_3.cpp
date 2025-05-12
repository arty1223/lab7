#include <iostream>
using namespace std;
double twoThree(double arr[], int len); // 2_3
int main()
{
    double x[10] = {3, -5, 7, 0, -2, 9, -8, 4, -1, 6};
    cout << twoThree(x, sizeof(x) / sizeof(x[0]));
}

double twoThree(double arr[], int len)
{
    int m = 0; // По умолчанию 0 (если нет отрицательных элементов)
    // Поиск первого отрицательного элемента
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] < 0)
        {
            m = i;
            break;
        }
    }
    double sum = 0.0;     // сумма
    double product = 1.0; // текущее произведение
    for (int i = 0; i <= m; ++i)
    {
        product *= arr[i];
        sum += product;
    }
    return sum;
}
