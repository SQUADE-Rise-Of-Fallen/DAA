// Print the Fibonacci sequence upto the given number. Iteratively
#include <iostream>
using namespace std;
int op;
void fibonnaci(int n)
{
    int a = 0, b = 1, c;
    op += 2;
    op++;
    if (n == 1)
    {
        cout << a;
        return;
    }
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
    return;
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