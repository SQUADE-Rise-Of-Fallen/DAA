// Print the Fibonacci sequence upto the given number. Reccursive
#include <iostream>
using namespace std;
int op = 0;
int fibonacci(int n)
{
    if (n <= 1)
    {
        op++;
        return n;
    }
    else
    {
        op++;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
void print_fibonacci(int n)
{
    op++;
    if (n == 0)
    {
        cout << "0";
        return;
    }
    cout << "0 1 ";
    op++;
    for (int i = 2; i < n; (i++, op++))
    {
        op++;
        cout << fibonacci(i) << " ";
    }
    cout << endl
         << "Total operations: " << op << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    print_fibonacci(n);
    return 0;
}