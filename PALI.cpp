#include <iostream>

using namespace std;

int n, *A;

int palindrome(int a)
{
    int m=0;

    while (a != 0)
    {
        m = m*10 + a%10;
        a = (a - a%10)/10;
    }

    return m;
}

int main() {
	cin>>n;

	A = new int[n];

	for(int i = 0; i < n; i++)
		cin>>A[i];

	for(int i = 0; i < n; i++)
		if(palindrome(A[i]) == A[i])
			cout<<A[i]<<" ";

    return 0;
}

