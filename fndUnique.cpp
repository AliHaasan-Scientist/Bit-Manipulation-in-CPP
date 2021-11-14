#include <iostream>
using namespace std;
int check_Uniquet(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ arr[i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    cout << check_Uniquet(arr, 7);
    return 0;
}
