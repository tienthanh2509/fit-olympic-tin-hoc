#include<stdio.h>
int main()
{
	int t,n,a[50];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int s=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		scanf("%d",&a[j]);
		if(a[0]>a[1])s+=a[0]+a[1];
		else s+=a[0]+1;
		if(a[n-2]<a[n-1])s+=a[n-2]+a[n-1];
		else s+=a[n-1]+1;
		for(int j=1;j<n-1;j++)
		{
			s+=a[j];
			if(a[j]>a[j-1])s+=a[j-1];
			if(a[j]>a[j+1])s+=a[j+1];
			if(a[j]<=a[j-1]||a[j]<=a[j+1])s++;
		}
		printf("%d\n",s);
	}
	return 0;
}
