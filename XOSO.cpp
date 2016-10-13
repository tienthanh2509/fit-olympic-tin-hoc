#include <iostream>

using namespace std;

//int n = 0, c = 0, *A;
//long s = 0;
//
//int main() {
//	cin>>n;
//
//	A = new int[n];
//
//	for(int i = 0; i < n; i++)
//	{
//		cin>>A[i];
//		s += A[i];
//	}
//
//	for(int i = 0; i < n-1; i++)
//		for(int j = i+1; j < n; j++)
//			if((s-A[i]-A[j])%2 == 0)
//				c++;
//
//	cout<<c;
//
//    return 0;
//}

int n = 0;
long long A = 0, s = 0, c = 0, l = 0;

int main() {
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		cin>>A;
		s += A;

		if(A%2 == 0)
			c++;
		else
			l++;
	}

	if(s%2 == 0)
		cout<<l*(l-1)/2 + c*(c-1)/2;
	else
		cout<<c*l;

    return 0;
}
