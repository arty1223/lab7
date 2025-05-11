#include <iostream>
using namespace std;
void get_arr(int arr[], int len);
void print_arr(int arr[], int len);
bool sorted(int arr[], int len);     // 2_1
int find(int arr[], int len, int x); // 2_2
double progression_sum(int arr[], int len);
double progression_sum(double arr[], int len); // 2_3
double progression_sum(float arr[], int len);

int main()
{
#define ARR_SIZE 7
    int arr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7};
    // int arr[ARR_SIZE] = {1,232,3532,412,55,662,17};
    // get_arr(arr, ARR_SIZE);
    cout << progression_sum(arr, ARR_SIZE);
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
    for (int i = 0; i < len; i++)
    {
        startmul *= arr[i];
        startsum += arr[i] * startmul;
        if (arr[i] < 0.0)
            break;
        if (i == len - 1)
        {
            startmul *= arr[0];
            startsum += startmul;
        }
    }
    return startsum;
}

double progression_sum(double arr[], int len)
{
    double startsum = 0, startmul = 1;
    for (int i = 0; i < len; i++)
    {
        startmul *= arr[i];
        startsum += arr[i] * startmul;
        if (arr[i] < 0.0)
            break;
        if (i == len - 1)
        {
            startmul *= arr[0];
            startsum += startmul;
        }
    }
    return startsum;
}

double progression_sum(float arr[], int len)
{
    float startsum = 0, startmul = 1;
    for (int i = 0; i < len; i++)
    {
        startmul *= arr[i];
        startsum += arr[i] * startmul;
        if (arr[i] < 0.0)
            break;
        if (i == len - 1)
        {
            startmul *= arr[0];
            startsum += startmul;
        }
    }
    return startsum;
}