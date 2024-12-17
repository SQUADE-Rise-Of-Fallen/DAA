// Print the Fibonacci sequence upto the given number. Iteratively
#include <iostream>
using namespace std;
int op;
int fibonnaci(int n)
{
    int a = 0, b = 1, c;
    op += 2;
    cout << a << " " << b << " ";
    op++;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        op++;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci sequence up to " << n << " terms: ";
    fibonnaci(n);
    cout << endl
         << "Total operations: " << op << endl;
    return 0;
}