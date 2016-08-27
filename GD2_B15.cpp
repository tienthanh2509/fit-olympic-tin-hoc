/**
 * Nhap 2 day tang dan b co n so va c co n so (0 < n, m = 100).
 * Tron 2 day b, c thanh day a co n+m so tang dan (khong su dung thao tac sap xep tren day a).
 **/

#include <iostream>

using namespace std;

int main()
{
	int b[] = {3, 5, 7};
	int c[] = {1, 2, 4, 6, 8};

	int n = 5;
	int m = 3;

	int k = n + m;
	int *a = new int[k];

	int i = 0;
	int p1 = 0, p2 = 0;

	while(i < k)
	{
		int k1 = 0, k2 = 0;

		if(p1 < n)
			k1 = b[p1];

		if(p2 < m)
			k2 = c[p2];

		if(k1 <= k2)
		{
			a[i++] = k1;
			p1++;
		}
		else
		{
			a[i++] = k2;
			p2++;
		}
	}

	for(i = 0; i < k; i++)
		cout<<a[i]<<" ";

	return 0;
}
