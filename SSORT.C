#include<stdio.h>
#include<conio.h>
void main()
{
       int min(int a[],int,int);
       void SelectionSort(int a[],int,int);
       int a[5],n,l,r,i;
       clrscr();
       scanf("%d%d%d",&n,&l,&r);
       for(i=0;i<n;i++)
       {
		scanf("%d",&a[i]);
       }
       SelectionSort(a,l,r);
       for(i=0;i<n;i++)
       {
		printf("%d  ",a[i]);
       }
       getch();
}
int min(int a[], int l,int r)
{
	int m,mi,i;
	m=a[l];
	mi=l;
	for(i=l+1;i<=r;i++)
	{
		if(m>a[i])
		{
			m=a[i];
			mi=i;
		}
	}
	return mi;
}
void SelectionSort(int a[], int l, int r)
{
	int i,mi,temp;
	for(i=l;i<r;i++)
	{
		mi=min(a,i,r);
		if(i!=mi)
		{
			temp=a[i];
			a[i]=a[mi];
			a[mi]=temp;
		}
	}
}
