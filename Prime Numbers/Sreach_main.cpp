#include <iostream>

using namespace std;

int main()
{
	int i;
	cout << "Nhap So Can Kiem Tra: ";
	cin >> i;
	for(int k=2;k<=i;k++)
    {
        int count = 0;
        for (int n = 1; n <= k; n++)
	        {
	    	    if (k % n == 0)
    		        {
			             count++;
		            }
	        }
    	if(count == 2)
    	    {
		        cout << k <<" Day la so nguyen to !!";
	        }
    }
}