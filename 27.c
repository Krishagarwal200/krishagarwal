#include<stdio.h>
int main()
{
    int n,a;
    printf("enter the size=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter the number of rotations");
    scanf("%d",&k);
    k=k%n;
    int arr2[k];
    for(int i=1;i<=k;i++)
    {
        arr2[k-i]=arr[n-i];

    }
    for(int i=0;i<k;i++)
    printf("%d ",arr2[i]);
    for(int i=0;i<n-k;i++)
    printf("%d ",arr[i]);



}