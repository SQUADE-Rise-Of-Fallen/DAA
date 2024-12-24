// Given a sorted array of integers, find the first occurrence of a target element x. If the target element is not found, return -1.  Explore alternatives of searching such elements and analyze.
#include <iostream>
using namespace std;
int op = 0;
int BinarySearch(int a[], int left, int right, int x)
{
    while (left <= right)
    {
        op++;
        int mid = (right - left) / 2 + left;
        op++;
        if (a[mid] == x)
        {
            op++;
            return mid;
        }
        else if (a[mid] > x)
        {
            right = mid - 1;
            op += 2;
        }
        else
        {
            left = mid + 1;
            op++;
        }
    }
    return -1;
}
int main()
{
    int n, x;
    cout << "Enter Total number of Elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter Numbers : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the Element to be Found : ";
    cin >> x;
    int result = BinarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "Element Not Found";
    else
        cout << "Element " << x << " at Index " << result;
    cout << endl
         << "Operations: " << op;
    return 0;
}