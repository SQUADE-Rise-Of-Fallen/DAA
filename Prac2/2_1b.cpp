// Given an array of integers, use Insertion Sort algorithm to sort the array in ascending order.
#include <iostream>
using namespace std;
int op = 0;
void InsertionSort(int a[], int n)
{
    for (int i = 0; i < n; (i++, op++))
    {
        int key = a[i];
        int j = i - 1;
        op += 2;

        while (j >= 0 && a[j] > key)
        {
            op += 2;
            a[j + 1] = a[j];
            j = j - 1;
            op += 2;
        }
        a[j + 1] = key;
        op++;
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl
         << "Operations: " << op;
}