#include <iostream>
#include <cmath>

using namespace std;

int checkSqr(int);

int main()
{
    int n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    if(checkSqr(n) == 1)
        cout << "Day la so chinh phuong !!";
    else
        cout << "Day khong la so chinh phuong !!";
}

int checkSqr(int n)
{
    if((int)sqrt(n) == sqrt(n))
        return 1;
    else
        return 0;
}