#include <iostream>

using namespace std;

int n, m[10][2];

int main() {
	do {
		cin>>n;
		if(n == -1)
		 break;

		for(int i = 0; i < n; i++)
			for(int j = 0; j < 2; j++)
				cin>>m[i][j];

		// First 20*2 ~ 20 miles in 2 hours
		int miles = m[0][0]*m[0][1];

		for(int i = 1; i < n; i++)
			miles += m[i][0]*(m[i][1]-m[i-1][1]);

		cout<<miles<<" miles"<<endl;
	} while(n != -1);

	return 0;
}
