#include<stdio.h>

int main()
{
    int a[20],n,i,key,low,high,mid;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter sorted elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            printf("Element found at position %d",mid+1);
            return 0;
        }
        else if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Element not found");

    return 0;
}
