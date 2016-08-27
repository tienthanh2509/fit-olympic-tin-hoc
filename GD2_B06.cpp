/**
 * Cho mang a[N]
 * a. a co phai la mang doi xung ko?
 * b. In phan tu xuat hien nhieu nhat trong a
 * c. Nhap so X. Xac dinh vi tri cua so nguyen to tren a co gia tri gan X nhat
 **/

#include <iostream>
#include <random>
#include <time.h>

using namespace std;

const bool DEBUG = true;

int n, a[10000];

int random(int min, int max) //range : [min, max)
{
   static bool first = true;
   if (first) 
   {  
      srand(time(NULL)); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (max - min);
}

bool la_snt(int x)
{
	if(x < 2)
		return false;

	for(int i = 2; i <= x/2; i++)
		if(x%i == 0)
			return false;

	return true;
}

bool kt_mang_dx()
{
	
}

int main()
{
	cout<<"Nhap so nguyen n: ";
	cin>>n;

	if(!DEBUG)
		for(int i = 0; i < n; i++)
		{
			printf("A[%d] = ", i);
			scanf("%d", &a[i]);
		}
	else
		for(int i = 0; i < n/2; i++)
			a[i] = random(0, 10);
}
