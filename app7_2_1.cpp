#include <iostream>
using namespace std;
void get_arr(int arr[], int len);
bool sorted(int arr[], int len);
#define ARR_LEN 10
int main()
{
    int x[ARR_LEN] = {};
    get_arr(x, ARR_LEN);
    cout << (bool) sorted(x,ARR_LEN);
}

void get_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("arr[%i] = ", i);
        cin >> arr[i];
    }
}

bool sorted(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < arr[i - 1])
            return false; // досрочный выход если текущий меньше предыдущего
    }
    return true;
}
