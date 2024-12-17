// Find the factorial of a given number. Iteratively
#include <iostream>
using namespace std;
int op = 0;
void factorial(int n)
{
    int result = 1;
    op++;
    op++;
    for (int i = 1; i <= n; (i++, op++))
    {
        op++;
        result *= i;
        op++;
    }
    cout << "Result : " << result << endl
         << "Total Operations : " << op << endl;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    factorial(num);
    return 0;
}