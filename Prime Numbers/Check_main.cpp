#include <iostream>

using namespace std;

int main()
{
	int i;
	int count;
	cout << "Nhap So Can Kiem Tra: ";
	cin >> i;
	for (int n = 1; n <= i; n++)
	{
		if (i % n == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		cout << "Day la so nguyen to !!";
	}
	else
	{
		cout << "Day khong phai la so nguyen to !!";
	}
}