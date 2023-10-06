#include <iostream>

using namespace std;

int fbnc(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return (fbnc(n-1) + fbnc(n-2));
}

int main()
{
    int n;
    cout  << "Nhap so tinh Fibonacci: ";
    cin >> n;
    cout << "Fibonacci cua "  << n << " " << "la " << fbnc(n);
}