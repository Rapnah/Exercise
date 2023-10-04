#include <iostream>

using namespace std;

char canchar[][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
char chichar[][12]={"Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Mao","Thin","Ty","Ngo","Mui"};

int main()
{
    int year,can,chi;
    cout << "Nhap nam can kiem tra: ";
    cin >> year;
    can = year % 10;
    chi = year % 12;
    cout<< canchar[can] << " "<< chichar[chi] << endl;

}