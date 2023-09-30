#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int GDC,LCM;
    int multi;
    cout << "Nhap so thu 1: ";
    cin  >> m;
    cout << "Nhap so thu 2: ";
    cin >> n;
    multi = m*n;
    while(n!=0 && m!=0)
    {
        if (n>m)
        {n-=m;}
        else
        {m-=n;}
    }
    if (n==0)
    {LCM = m;}
    else
    {LCM = n;}
    GDC=multi/LCM;
    cout<< "Boi chung nho nhat: " << GDC;
}