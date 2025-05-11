#include <iostream>
using namespace std;
void get_arr(int arr[], int len);
void print_arr(int arr[], int len);
int main()
{
#define ARR_SIZE 7
    int arr[ARR_SIZE];
    get_arr(arr, ARR_SIZE);\
    cout << "Elements have got their values\n";
    print_arr(arr,ARR_SIZE);
}

void get_arr(int arr[], int len)
{
    cout << "Enter array values:\n";
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