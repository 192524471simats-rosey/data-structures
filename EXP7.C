#include<stdio.h>

int main()
{
    int a[20],n,i,pos,item;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter position and element to insert: ");
    scanf("%d%d",&pos,&item);

    for(i=n;i>=pos;i--)
        a[i]=a[i-1];

    a[pos-1]=item;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\nEnter position to delete: ");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

    n--;

    printf("Array after deletion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
