#include <iostream>
#include <cmath>
//#include "function.hpp"

using namespace std;

char canchar[][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
char chichar[][12]={"Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Mao","Thin","Ty","Ngo","Mui"};

int Cnyear(int n)
{
    int can,chi;
    can = n % 10;
    chi = n % 12;
	cout<< canchar[can] << " "<< chichar[chi] << endl;
    return 0;
}

int PrefectNum(int n)
{
    int sum;
    for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int PrimeNum(int n)
{
    int count;
    for (int i = 1; i <= n; i++)
	    {
		    if (n % i == 0)
			count++;
	    }
	if(count == 2)
		return 1;
	else
		return 0;
}

int SqrtNum(int n)
{
    if((int)sqrt(n) == sqrt(n))
        return 1;
    else
        return 0;
}

int fbnc(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return (fbnc(n-1) + fbnc(n-2));
}

int main()
{
    int choose,snt,scp,shh,nam,fbcn;
 
    do
    {
        cout << "-----Cac Chuc Nang-----"<< endl;
        cout << "1. So Nguyen To "<< endl;
        cout << "2. So Chinh Phuong "<< endl;
        cout << "3. So Hoan Hao"<< endl;
        cout << "4. Tim Can Chi cua Nam"<< endl;
        cout << "5. Tim so Fibonacci"<<endl;
        cout << "0. Thoat chuong  trinh"<< endl;
        cout << "Chon Chuc Nang: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << "Nhap So Can Xet: ";
            cin >> snt;
            if (PrimeNum(snt) == 1)
                cout << "Day la so nguyen to"<< endl;
            else
                cout  << "Day khong phai la so nguyen to"<< endl;
            break;
        case 2:
            cout << "Nhap So Can Xet: ";
            cin >> scp;
            if (SqrtNum(scp) == 1)
                cout << "Day la so chinh phuong"<< endl;
            else
                cout << "Day khong la so chinh phuong"<< endl;    
            break;
        case 3:
            cout << "Nhap So Can Xet: ";
            cin >> shh;
            if(PrefectNum(shh) == 1)
                cout << "Day la so hoan hao"<< endl;
            else
                cout << "Day khong la so hoan hao"<< endl;
            break;
        case 4:
            cout << "Nhap Nam Can Coi: ";
            cin >> nam;
            Cnyear(nam);
            break;
        case 5:
            cout << "Nhap so Fibonacci can tim: ";
            cin >> fbcn;
            cout << "Fibonacci cua "  << fbcn << " " << "la " << fbnc(fbcn);
        default:
            break;
        }
    } while (choose != 0);
    
}