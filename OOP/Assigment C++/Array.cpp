#include <iostream>
using namespace std;

void b(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {10, 50, 40, 5, 14, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    b(arr, n);
    
    cout <<"Before sorting 10, 50, 40, 5, 14, 11, 90\n";

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
