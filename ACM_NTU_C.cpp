#include<stdio.h>
int main()
{
	int n,a[1000][10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<10;j++)scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		int min=20,d=0,b=0,s=0;
		for(int j=0;j<10;j++)
		{
			if(a[i][j]<min&&a[i][j]!=0)min=a[i][j];
			if(a[i][j]==0)d++;
			if(j==0&&a[i][j]==0&&a[i][j+1]==0&&a[i][j+2]==0&&a[i][j+3]==0&&a[i][j+4]!=0)b++;
			else if(j==5&&a[i][j]!=0&&a[i][j+1]==0&&a[i][j+2]==0&&a[i][j+3]==0&&a[i][j+4]==0)b++;
			else if(j<=4&&a[i][j]!=0&&a[i][j+1]==0&&a[i][j+2]==0&&a[i][j+3]==0&&a[i][j+4]==0&&a[i][j+5]!=0)b++;
		}
		if(b==1&&d==4)s=1;
		else
		{
			if(d>=2);
			else
			{
				if(min>=4)s=4;
				else if(min<4)s=min;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
