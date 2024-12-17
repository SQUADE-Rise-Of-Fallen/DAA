// Find the factorial of a given number. Recursively
#include <iostream>
using namespace std;
int op = 0;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        op++;
        return 1;
    }
    op++;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    cout << "Operations: " << op << endl;
    return 0;
}