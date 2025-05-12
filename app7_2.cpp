#include <iostream>
#include <math.h>
using namespace std;
void get_arr(int arr[], int len);
void print_arr(int arr[], int len);
bool sorted(int arr[], int len);     // 2_1
int find(int arr[], int len, int x); // 2_2
double twoThree(int arr[], int len);
double twoThree(double arr[], int len); // 2_3
int twoFour(int arr[], int len);
double twoFour(double arr[], int len); // 2_4
int twoFive(int arr[], int len);
double twoFive(double arr[], int len); // 2_5
double twoSix(double arr[], int len);
int main()
{
    float x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // float y[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // double y[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    double y[] = {3, -5, 7, 0, -2, 9, -8, 4, -1, 6, -10, 2, 5, -3, 1, -7, 8, -4, 10, -6};

    // int arr[ARR_SIZE] = {1,232,3532,412,55,662,17};
    // get_arr(arr, ARR_SIZE);
    cout << twoSix(y, sizeof(y) / sizeof(y[0]));
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

double twoThree(int arr[], int len)
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

double twoThree(double arr[], int len)
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

int twoFour(int arr[], int len)
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

int twoFive(int arr[], int len)
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

double twoFive(double arr[], int len)
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

double twoSix(double arr[], int len){
    double splitted [len] = {0,};
    int p = 0, q = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] > 0){
            splitted[p] = arr[i];
            p++;
        }else{
            splitted[len - 1 - q] = arr[i];
            q++;
        }
    }
    for(int i = 0; i < len; i++){
        cout << splitted[i] << ' ';
    }
    return 5051.0;
}