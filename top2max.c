#include<stdio.h>
void bubble(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAfter sorting array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n1st Max element in array is--%d",a[n-1]);
	printf("\n2nd Max element in array is--%d",a[n-2]);
	printf("\n");
}
int main()
{
	int a[20],i,n,pos;
	printf("Total number of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	bubble(a,n);
}
/*OUTPUT
Total number of elements: 6
Enter array elements:20 30 10 90 50 70

Array is:
20	30	10	90	50	70	
After sorting array is:
10	20	30	50	70	90	
1st Max element in array is--90
2nd Max element in array is--70
*/
