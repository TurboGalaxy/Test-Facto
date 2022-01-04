#include<iostream>
using namespace std;
int facto(int a)
{
	int k, f;
	f = 1;

	if (a == 0 || a == 1)
	{
		return 1;
	}
	

	else
	{
		for (k = 1; k <= a; k++)
		{
			f = f * k;
		}
		return f;
	}
}

int main()
{
	int l;
	cout << "Enter Your Number:" << endl;
	cin >> l;
	cout << "The Factoriel Reason is:\t" << facto(l);


}