/**
 * 35.	Nhap vao ma tran so thuc cap N x M. Tao menu thuc hien cac thao tac tren ma tran: 
 * a.	Tim phan tu nho nhat, lon nhat (chi ra vi tri )
 * b.	Tim hang co tong lon nhat, cot co tong nho nhat. In vi tri tim thay va tong.
 **/

#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int **a, n, m;

int random(int min, int max) //range : [min, max)
{
   static bool first = true;
   if (first) 
   {  
      srand(time(NULL)); // seeding for the first time only!
      first = false;
   }
   return min + rand() % (max - min);
}

void createSequenceMatrix(int _n, int _m){
	n = _n;
	m = _m;
	a = new int*[n];

	for(int i = 0; i < n; i++)
		a[i] = new int[m];

	int sq = 0;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			a[i][j] = sq++;
}

void printMatrix()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
}

struct item {
  int x, y, data;
};

int main(){
	createSequenceMatrix(3, 4);
	printMatrix();

	item min, max;
	min.x = max.x = 0;
	min.y = max.y = 0;
	min.data = max.data = a[0][0];

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] > max.data)
			{
				max.x = i;
				max.y = j;
				max.data = a[i][j];
			}

			if(a[i][j] < min.data)
			{
				min.x = i;
				min.y = j;
				min.data = a[i][j];
			}
		}

	cout<<"\n\n       x|y|value\n";
	cout<<"A. min="<<min.x<<"|"<<min.y<<"|"<<min.data<<endl;
	cout<<"   max="<<max.x<<"|"<<max.y<<"|"<<max.data<<endl;

	return 0;
}
