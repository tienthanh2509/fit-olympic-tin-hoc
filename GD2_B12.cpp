#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int n, m, *a, k;

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
}

void sort()
{
	for(int i = 0; i < n-1; i++)
	{
		int min = i;

		for(int j = i+1; j < n; j++)
			if(a[min] > a[j])
				min = j;

		swap(a[i], a[min]);
	}
}

int main()
{
	n = 10;
	a = new int[n];
	k = 5;

	for(int i = 0; i < n; i++)
		a[i] = random(0, 10);

	inMang();
	//sort();
	inMang();

	for(int i = 0; i < n; i++)
		for(int j = i; j < n; j++)
			if(i != j && (a[i] + a[j] == k))
			{
				cout<<"A["<<i<<"] = "<<a[i]<<" + A["<<j<<"] = "<<a[j]<<" = "<<k<<endl;
			}
}
