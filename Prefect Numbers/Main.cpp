#include <iostream>

using namespace std;

void main()
{
	int n;
	cout << "Nhap so can kiem tra: ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		cout << "Day la so hoang hao !!";
	}
	else
	{
		cout << "Day khong phai la so hoang hao !!"
	}
}