/**
 * Nhap day n so (n <= 1000).
 * Xac dinh duong chay dai nhat, xuat len man hinh vi tri phan tu dau tien va do dai cua duong chay do.
 * Duong chay la mot day lien tiep cac phan tu khong giam cua day ban dau.
 * Vi du: 
 * Nhap day  1  4  2  3  1  2  6  8  3  5  7
 * Duong chay dai nhat la : 4  4
 **/

#include <iostream>

using namespace std;

int n, *A;

int main()
{
	n = 11;
	A = new int[n];

	// Dummy
	A[0] = 0; A[1] = 1;
	A[2] = 2; A[3] = 3;
	A[4] = 4; A[5] = 2; A[6] = 6; A[7] = 8;
	A[8] = 3; A[9] = 5; A[10] = 7;

	cout<<A[0]<<" ";
	int p = -1;
	int s = 0, _s = 1;

	for(int i = 1; i < n; i++)
		if(A[i-1] < A[i])
		{
			cout<<A[i]<<" ";
			_s++;
		}
		else
		{
			cout<<" - "<<_s;
			if(_s > s)
			{
				s = _s;
				p = i - _s;
			}
			_s = 1;
			cout<<endl<<A[i]<<" ";
		}
	cout<<"    - "<<_s;

	cout<<endl<<"--------------------------------"<<endl;
	cout<<"P: "<<p<<endl;
	cout<<"S: "<<s;

	return 0;
}
