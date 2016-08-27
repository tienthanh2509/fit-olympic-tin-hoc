#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int n, m, a[100], b[100];

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

void inMang()
{
	cout<<"A: ";
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	cout<<"B: ";
	for(int i = 0; i < m; i++)
		cout<<b[i]<<" ";
	cout<<endl;
}

int main()
{
	n = 4; m = 3;
	int p = 1;

	for(int i = 0; i < n; i++)
		a[i] = random(0, 4);

	for(int i = 0; i < m; i++)
		b[i] = random(5, 9);

	inMang();
	cout<<"-------------"<<endl;

	int k = m + n;
	int *c = new int[k];

//	for(int i = 0; i < k; i++)
//		c[i] = -1;

	for(int i = 0; i < p; i++)
		c[i] = a[i];

	for(int i = 0; i < m; i++)
		c[p+i] = b[i];

	for(int i = p+m; i < k; i++)
		c[i] = a[i-m];

	cout<<"C: ";
	for(int i = 0; i < k; i++)
		cout<<c[i]<<" ";
	cout<<endl;
}
