#include <iostream>
#include <algorithm>

using namespace std;

struct tv {
	int s, t;
};


int n = 0, c = 0;
tv *A;

bool dkSoSanh(tv a, tv b)
{
	if(a.s == b.s)
		return a.t < b.t;
	return a.s < b.s;
}

int main() {
	cin>>n;

	A = new tv[n];

	for(int i = 0; i < n; i++)
		cin>>A[i].s>>A[i].t;

	sort(A, A + n, dkSoSanh);

	for(int i = 0; i < n; i++)
		cout<<A[i].s<<","<<A[i].t<<endl;

//	for(int i = 0; i < n-1; i++)
//	{
//		int l = i + 1;
//		int r = n - 1;
//
//		while (l < r) {
//			int mid = (l + r) / 2;
//			if (A[mid].s >= A[i].t)
//				r = mid - 1;
//			else
//				l = mid + 1;
//		}
//
//		if (A[i].t > A[r].s)
//			c += r - i;
//		else {
//			if (A[i].t > A[l].s)
//				c += l - i;
//			else
//				c += l - 1 - i;
//		}
//	}

	cout<<c;

    return 0;
}
