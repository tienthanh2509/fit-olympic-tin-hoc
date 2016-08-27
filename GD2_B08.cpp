#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int n, a[10000];

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

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
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

void inMang()
{
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void trimArray()
{
	for(int i = 0; i < n-1; i++)
		if(a[i] == a[i+1])
		{
			// doi mang
			for(int j = i; j < n-1; j++)
				a[j] = a[j+1];

			n--;
			inMang();
		}
}

int main()
{
	cout<<"Nhap so nguyen n: ";
	//cin>>n;
	n = 18;

	for(int i = 0; i < n; i++)
		a[i] = random(0, 10);

	inMang();

	sort();
	
	inMang();

	trimArray();

}
