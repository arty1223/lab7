#include <iostream>
using namespace std;
int find(int arr[], int len, int x); // 2_2
#define ARR_LEN 10
int main()
{
    int arr[ARR_LEN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 0;
    cout << "x = ";
    cin >> x;
    cout << find(arr, ARR_LEN, x);
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
