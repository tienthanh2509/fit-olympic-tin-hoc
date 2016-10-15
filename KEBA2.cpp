#include <iostream>

using namespace std;

//long long n = 0, b = 0, c = 0;
//long long *A;
//
//int main() {
//	cin>>n>>b;
//
//	A = new long long[n];
//
//	for(int i = 0; i < n; i++)
//		cin>>A[i];
//
//	for(long long i = 0; i < n-1; i++)
//		for(long long j = i+1; j < n; j++)
//			if(A[i]+A[j] == b)
//				c++;
//
//	cout<<c;
//
//    return 0;
//}

long long n = 0, m = 0, b = 0, c = 0;

map<long long,long long>s;
map<long long,long long>::iterator it, it2;

int main()
{
	for(int i = 0; i<n; i++)
	{
		cin>>m;
		s[m]++;
	}

	for(it = s.begin(); it != s.end(); it++)
	{
		for(it2 = s.begin(); it2 != s.end(); it2++)
		{
			
		}
	}
}

