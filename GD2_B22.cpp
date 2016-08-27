/**
 * 22.	Hung la mot hoc sinh gioi, duoc nhieu ban men mo.
 * The nhung, trong dip Tet vua qua, vi mai an mon mut dau ngon tuyet do me cau lam,
 * ket qua la bi dau bung suot may ngay lien, khi cau ta khoi benh cung chinh la luc het Tet.
 * Luc nay Hung moi suc nho ra bai tap Tet ma thay giao,
 * binh thuong do chi la nhung bai tap con con doi voi Hung,
 * the nhung gio dau bung nhu the nay thi den doc de con khong noi huong chi la lam.
 * Cac ban hay giup Hung giai bai tap de khong bi thay phat ngay dau nam nhe.
 * De bai nhu sau:
 * Cho day n so nguyen duong a1, a2, a3, .., an
 * Co the thuc hien thao tac sau day tren day:
 * - Chon ra hai so bat ki trong day
 * - Giam gia tri so lon hon di mot luong bang gia tri cua so nho hon
 * Co the thuc hien so luong thao tac tuy y thich sao cho tong gia tri cac phan tu cua day la nho nhat
 * Input
 * Dong dau tien chua so nguyen duong n (n <= 105)
 * Dong tiep theo chua n so nguyen a1, a2, ..., an (1 <= ai <= 105)
 * Output
 * Mot dong duy nhat la tong nho nhat cua day sau mot so thao tac.
 * VD INPUT :  4, 2, 1 	OUTPUT : 3
 * Voi day so 4 2 1, ta lan luot thuc hien cac thao tac nhu sau
 * - Chon so 4 va 2, giam 4 di 2, khi do day tro thanh 2 2 1
 * - Chon so 2 va 1, giam 2 di 1, khi do day tro thanh 2 1 1
 * - Chon so 2 va 1, giam 2 di 1, khi do day tro thanh 1 1 1
 **/

#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>

using namespace std;

int *a, n;

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

void printArray()
{
	cout<<"A: ";
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}

void printArrayLn()
{
	printArray();
	cout<<endl;
}

void createSequenceArray(int m){
	n = m;
	a = new int[n];

	for(int i = 0; i < n; i++)
		a[i] = i+1;
}

void createRandomArray(int m){
	n = m;
	a = new int[n];

	for(int i = 0; i < n; i++)
		a[i] = random(0, 9);
}

void createArray(vector<int>  b, int m){
	n = m;
	a = new int[n];

	for(int i = 0; i < n; i++)
		a[i] = b[i];
}

void swap(int &a, int &b)
{
	int _t = a;
	a = b;
	b = _t;
}

void sortAsc() {
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;

		for(int j = i + 1; j < n; j++)
			if(a[min] > a[j])
				min = j;

		if(min != i)
			swap(a[i], a[min]);
	}
}

int sq = 0;
void process() {
	printArrayLn();
	sortAsc();
	printArrayLn();
	cout<<"--------------------------------\n";

	while(a[0] != a[n-1])
	{
		int max = 0;

		for(int k = 0; k < n; k++)
			if(a[max] < a[k])
				max = k;

		if(max-1 >= n)
		{
			//cout<<"STOP! ~ "<<max<<endl;
			break;
		}

		if(a[max] == 1)
		{
			//cout<<"DONE!"<<endl;
			break;
		}

		cout<<"#"<<setfill('0')<<setw(2)<<sq+1<<" | "<<a[max-1]<<" ~ "<<a[max]<<" | ";
		
		a[max] -= a[max-1];

		sortAsc();
		printArrayLn();
		sq++;
	}
}

int main(){
	//createArray({4, 2, 1}, 3);
	//createSequenceArray(10);
	createRandomArray(10);

	process();
	cout<<"--------------------------------\n";
	cout<<"STEP: "<<sq;

	return 0;
}
