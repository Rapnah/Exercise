#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int LCM;
    cout << "Nhap so thu 1: \n";
    cin  >> m;
    cout << "Nhap so thu 2: \n";
    cin >> n;
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
    {LCM=n;}
    cout<<"Uoc chung lon nhat: "<<LCM;
}