#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
            i++;

        while (arr[j] > pivot && j >= low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);

    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition = findPivot(arr, low, high);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}
int main()
{
    int arr[] = {4, 6, 2, 5, 7, 9, 4, 1, 3};

    quickSort(arr, 0, 8);

    for (auto u : arr)
    {
        cout << u << " ";
    }
    cout << endl;
}