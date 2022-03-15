#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,count=0;
	printf("Enter number of rows");
	scanf("%d",&r);
	printf("Enter number of columns");
	scanf("%d",&c);
	printf("Enter %d matrix elements",(r*c));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements in the matrix are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if (a[i][j]==0)
			count++;
		}
	}
	if (count>r*c/2)
	printf("The above matrix is sparse matrix");
	else
	printf("The above matrix is not a sparse matrix");
}
