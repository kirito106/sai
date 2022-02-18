#include<stdio.h>

int removed(int a[],int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]==a[k+1];
                }
                n--;
            }
            else
                j++;
        }
    }
    return k-1;
}
int main()
{
    int n,p;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    p=removed(arr,n);
    
    printf("Array after rearrangement :\n");
    for(int i=0;i<p;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

