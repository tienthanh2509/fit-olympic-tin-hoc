#include <iostream>

using namespace std;

struct bt {
	int r, e;
	bool c;
};


int n = 0, c = 0, m = 0;
bt *A;

void sort() {
	for(int i = 0; i < n-1; i++)
	{
		int min = i;
		for(int j = i+1; j < n; j++)
			if(A[j].r < A[min].r)
				min = j;

		if(min != i)
		{
			//cout<<"("<<A[i].r<<","<<A[i].e<<") <=> ("<<A[min].r<<","<<A[min].r<<")"<<endl;
			bt _t = A[i];
			A[i] = A[min];
			A[min] = _t;
		}
	}
}

int main() {
	cin>>n>>c;

	A = new bt[n];

	for(int i = 0; i < n; i++)
	{
		cin>>A[i].r>>A[i].e;
		A[i].c = false;
	}

	sort();

//	for(int i = 0; i < n; i++)
//		cout<<A[i].r<<","<<A[i].e<<endl;

//	for(int i = 0; i < n-1; i++)
//		for(int j = i+1; j < n; j++)
//			if(A[i].t > A[j].s)
//				c++;

	bool stop = false;
	while(!stop)
	{
		
	}

	cout<<m;

    return 0;
}
