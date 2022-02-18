#include <stdio.h>

int main()
{
	int n;
	
	printf("Enter the n of the array : ");
	scanf("%d", &n);
	
	int a[n];
	int i, flag = 0, temp;
	
	for(i=0; i<n; i++)
	{
		printf("Enter number: ");
		scanf("%d", &a[i]);
	}
	
	while(flag == 0)
	{
		flag = 1;
		for(i= 0; i<n-1; i++)
		{
			if(a[i]%2 == 1 && a[i+1]%2 == 0)
			{
				temp = a[i+1];
				a[i+1] = a[i];
				a[i] = temp;
				flag = 0;
			}
		}	
	}
	
	printf("Final array:\n");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	return 0;
}
