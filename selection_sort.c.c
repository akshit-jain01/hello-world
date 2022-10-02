#include<stdio.h>
#define MAX 50

int main()
{
    int a[MAX];
    int i,n,pos,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pos = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            pos = j;
        }
        if(pos!=i)
        {
            int tmp = a[i];
            a[i] = a[pos];
            a[pos] = tmp;
        }
        
    }
    printf("sorted array: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}