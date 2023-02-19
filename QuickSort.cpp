#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // int temp = arr[i];
            // arr[i] = arr[j];
            // arr[j] = temp;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[high]);
    // int temp = arr[i];
    // arr[i] = arr[high];
    // arr[high] = temp;
    return i;
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);

        QuickSort(arr, low, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int n = 1;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}