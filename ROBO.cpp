// Robot trong cay

#include <iostream>

using namespace std;

//5 4 1 2
//1 0 1 0
//0 0 1 1
//1 0 0 1
//0 1 0 0
//1 0 0 1
//

#define MAX_SIZE 50

// Huong di chuyen cua robot
//           U R D L
int X[4] = {-1, 0, 1, 0};
int Y[4] = {0, 1, 0, -1};

int m, n, x, y;
int A[MAX_SIZE][MAX_SIZE]; // Ma tran cay da trong
int maxP = 0, P[MAX_SIZE]; // Duong di dai nhat
int dem = 0, PT[MAX_SIZE]; // Duong di tam thoi

void input()
{
	cin>>m>>n>>x>>y;

	for(int i = 0; i <= m+1; i++)
	{
		for(int j = 0; j <= n+1; j++)
		{
			A[i][j] = 1;
		}
	}

	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin>>A[i][j];
		}
	}

	cout<<endl;
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Try(int a, int b)
{
	for(int i = 0; i < 4; i++)
	{
		if(A[a+X[i]][b+Y[i]] == 0)
		{
			cout<<a+X[i]<<","<<b+Y[i]<<" ";

			//
			A[a][b] = 1;

			dem++;
			PT[dem] = i;

			Try(a+X[i], b+Y[i]);

			if(dem > maxP)
			{
				cout<<"\nKy luc moi: ";
				for(int k = 1; k <= dem; k++)
					cout<<PT[k]<<" ";
				cout<<"\n";

				maxP = dem;
				for(int k = 1; k < dem; k++)
					P[k] = PT[k];
			}

			dem--;
			A[a][b] = 0;
		}
	}
}

void process()
{
	Try(x, y);
}

void output()
{
	cout<<"==========\n";
	for(int i = 1; i <= maxP; i++)
	{
		if(P[i] == 0)
			cout<<"U"<<" ";
		else if(P[i] == 1)
			cout<<"R"<<" ";
		else if(P[i] == 2)
			cout<<"D"<<" ";
		else
			cout<<"L"<<" ";
	}
}

int main()
{
	input();
	process();
	output();
}
