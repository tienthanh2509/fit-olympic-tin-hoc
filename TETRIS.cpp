#include <iostream>
#include <algorithm>

using namespace std;

void play()
{
	int A[10], min = 0, sl0 = 0;

//	for(int i = 0; i < 10; i++)
//	{
//		cin>>A[i];
//
//		if(A[i] == 0)
//			sl0++;
//	}
//
//	for(int i = 1; i < 10; i++)
//	{
//		if(A[i] == 0) continue;
//		min = A[i];
//		break;		
//	}
//	
//	for(int i = 0; i < 10; i++)
//	{
//		if(A[i] == 0) continue;
//		if(A[i] < min)
//			min = A[i];	
//	}
//
//	if(sl0 == 4)
//	{
//		bool ok = false;
//		for(int i = 0; i < 7; i++)
//		{
//			if(A[i] == 0 && A[i+1] == 0 && A[i+2] == 0 && A[i+3] == 0)
//			{
//				ok = true;
//				break;
//			}
//		}
//		
//		sl0 = ok ? 4 : 0;
//	}
//
//	if(sl0 == 1 && min > 0)
//		cout<<(min > 4 ? 4 : min)<<endl;
//	else if(sl0 == 4 && min > 0)
//		cout<<1<<endl;
//	else
//		cout<<0<<endl;

	sort(A, A+10);
	
}

int main()
{
	int n = 0;
	cin>>n;

	for(int i = 0; i < n; i++)
		play();
}
