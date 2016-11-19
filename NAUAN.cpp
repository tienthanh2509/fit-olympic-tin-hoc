#include <iostream>

using namespace std;

#define DEBUG true

int *A, n = 0;
int *P, m = 0;

int binarySearch(int x)
{
    int left = 0;
    int right = n;

    while(left <= right) {
    	int mid = (left+right)/2;

        if(x >A[mid-1] && x <= A[mid])
        	return mid;
        else if(x < A[mid])
        {
       		right = mid-1;
        }
        else if(x > A[mid])
        {
        	left = mid+1;
        }
    }

    return -1;
}

int main()
{
    cin>>n;
    
    A = new int[n+1];
    A[0] = 0;

    for(int i = 1; i <= n; i++)
    {
        cin>>A[i];
        A[i] = A[i-1]+A[i];
    }

#ifdef DEBUG
	for(int i = 0; i <= n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
#endif

    cin>>m;
    P = new int[m];

    for(int i = 0; i < m; i++)
    {
        cin>>P[i];
    }

#ifdef DEBUG
	for(int i = 0; i < m; i++)
    {
        cout<<P[i]<<" ";
    }
    cout<<endl;
#endif

    for(int i = 0; i < m; i++)
    {
        cout<<binarySearch(P[i])<<" ";
    }

    return 0;
}
