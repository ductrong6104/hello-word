

// DONE!!

#include<iostream>
using namespace std;

int luyThua(int n, int m)
{
	int tich = 1;
	for (int i = 0; i < m; i++)
	{
		tich *= n;
	}
	return tich;
}
int main()
{
	int N, demSo = 0;
	cin >> N;
	int a = luyThua(10, N - 1);
	int b = luyThua(10, N);
	for (int i=a; i<b; i++)
	{
		int demChan = 0, demLe = 0, di = 0;
		int n = i;
		while (n != 0)
		{
			int j = n % 10;
			if (j % 2 == 0) demChan++;
			else demLe++;
			di++;
			n /= 10;
		}
		if ((demChan == demLe) && (di==N))
		{
			cout << i << " ";
			demSo++;
		}
		if (demSo == 10)
		{
			cout << endl;
			demSo = 0;
		}
	}
	return 0;
}