#include <iostream>
#include <math.h>
using namespace std;
void get_arr(int arr[], int len);
void print_arr(int arr[], int len);
bool sorted(int arr[], int len);     // 2_1
int find(int arr[], int len, int x); // 2_2
double progression_sum(int arr[], int len);
double progression_sum(double arr[], int len); // 2_3
int maxSymSum(int arr[], int len);
double maxSymSum(double arr[], int len); // 2_4
int minPairs(int arr[], int len);
double minPairs(double arr[], int len); // 2_5
int main()
{
    float x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float y[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int arr[ARR_SIZE] = {1,232,3532,412,55,662,17};
    // get_arr(arr, ARR_SIZE);
    cout << minPairs((double *)x, sizeof(x) / sizeof(x[0]));
}

void get_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("arr[%i] = ", i);
        cin >> arr[i];
    }
}

void print_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("arr[%i] = %i\n", i, arr[i]);
    }
}

bool sorted(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < arr[i - 1])
            return false; // вернуть ложь если текущий элемент больше предыдущего
    }
    return true;
}

int find(int arr[], int len, int x)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

double progression_sum(int arr[], int len)
{
    int startsum = 0, startmul = 1;
    int m = len - 1; // по умолчанию идем до конца
    // Находим индекс первого отрицательного элемента
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] < 0)
        {
            m = i;
            break;
        }
    }
    for (int i = 0; i <= m; i++)
    {
        startmul *= arr[i];
        startsum += startmul;
    }
    return startsum;
}

double progression_sum(double arr[], int len)
{
    double startsum = 0, startmul = 1;
    int m = len - 1; // по умолчанию идем до конца
    // Находим индекс первого отрицательного элемента
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] < 0)
        {
            m = i;
            break;
        }
    }
    for (int i = 0; i <= m; i++)
    {
        startmul *= arr[i];
        startsum += startmul;
    }
    return startsum;
}

int maxSymSum(int arr[], int len)
{
    int maxSum = arr[0] + arr[len - 1];
    // Проходим по всем симметричным парам массива
    for (int i = 1; i < len / 2; i++)
    {
        int currentSum = arr[i] + arr[len - 1 - i];
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

double maxSymSum(double arr[], int len)
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

int minPairs(int arr[], int len)
{
    int min_ = INT_MAX;
    for (int i = 1; i < len; ++i)
    {
        if (min_ > arr[i - 1] * arr[i])
        {
            min_ = arr[i - 1] * arr[i];
        }
    }
    return min_;
}

double minPairs(double arr[], int len)
{
    double min_ = (double)INT_MAX;
    for (int i = 1; i < len; ++i)
    {
        if (min_ > arr[i - 1] * arr[i])
        {
            min_ = arr[i - 1] * arr[i];
        }
    }
    return min_;
}