/**
 * Viet chuong trinh nhap so nguyen to 0 < N <= 10000 va mot mang a gom N so nguyen
 * a. Tinh va in ra trung binh cong cac so am, so duong trong a
 * b. In ra tat ca cac so nguyen to cua a[]
 **/

#include <stdio.h>

int n, a[10000];

bool la_snt(int x) {
	if(x < 2)
		return false;

	for(int i = 2; i <= x/2; i++)
		if(x%i == 0)
			return false;

	return true;
}

int main() {
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}

	// a. Tinh va in ra trung binh cong cac so am, so duong trong a
	int tong_am = 0, tong_duong = 0;
	int dem_am = 0, dem_duong = 0;

	for(int i = 0; i < n; i++)
		if(a[i] > 0)
		{
			tong_duong += a[i];
			dem_duong++;
		}
		else
		{
			tong_am += a[i];
			dem_am++;
		}
	float tba = (dem_am > 0) ? ((float) tong_am/dem_am) : 0;
	float tbd = (dem_duong > 0) ? ((float) tong_duong/dem_duong) : 0;
	printf("Tong so am: %f\nTong so duong: %f\n", tba, tbd);

	// b. In ra tat ca cac so nguyen to cua a[]
	printf("Cac SNT: ");
	for(int i = 0; i < n; i++)
		if(la_snt(a[i]))
			printf(" %d", a[i]);
}
