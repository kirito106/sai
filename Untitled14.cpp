#include<stdio.h>
void merge_func(int A[], int low, int mid, int high)
{
 int i = low;
 int j = mid+1;
 int k = low;
 int B[10000];
 while (i<= mid && j <= high)
 {
    if(A[i]>A[j])
    {
        B[k]=A[j];
        j++;
        k++;
    }
    else
    {
        B[k]=A[i];
        i++;
        k++;
    }
 }
    while (i<=mid)
    {
        B[k]=A[i];
        i++;
        k++;
   }
    while (j<=high)
    {
        B[k]=A[j];
        j++;
        k++;
    }
    for (int i = 0; i <= high; i++)
    {
        A[i]=B[i];
    }
}
void merge_sort(int arr[],int l,int r)
{
    int mid = (l+r)/2;
    if(l<r)
    {
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge_func(arr,l,mid,r);
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    scanf("%d",&A[i]);
    merge_sort(A,0,N-1);
    int k;
    scanf("%d",&k);
    printf("kth largest element is %d\n",A[N-k]);
    if(k==1)
    printf("kth largest value is %d",A[N-1]);
    else
    {
        int ans;
        for (int i = N-2; i >= 0 ; i--)
        {
            if(A[i] != A[i+1])
            k--;
            if(k==1)
            {
                ans = A[i];
                break;
            }
        }   
        printf("kth largest value is %d",ans);
    }
    return 0;
}
