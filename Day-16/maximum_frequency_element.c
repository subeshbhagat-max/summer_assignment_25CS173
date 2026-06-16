#include <stdio.h>
int main ()
{
    int n, i, a[100], j, count, frequency=0, element;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements of the array :\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if (count>frequency)
        {
            frequency=count;
            element=a[i];
        }
    }
    printf("Elemets occuring maximum times: %d",element);
    return 0;

}