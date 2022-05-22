#include<stdio.h>
#include<conio.h>

void bubble_sort(int[], int);
void main()
{
	int i;
	int a[10]={3,2,5,22,6,7,8,23,12,10};
	clrscr();
	printf("Before Sorting :");
	for(i=0;i<10;i++){
		printf("%d, ",a[i]);
			}
	bubble_sort(a,10);
	printf("\nAfter Sorting : ");
	for(i=0;i<=9;i++){
		if(i==9)
			printf("%d ",a[i]);
		else
			printf("%d, ",a[i]);
	}
	getch();
}
void bubble_sort(int a[],int n)
{
	int pass,j,temp,flag=1;
	for(pass=0; pass<n && flag; pass++){
		flag=0;
		for(j=0;j<n-pass+1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
	}
}
