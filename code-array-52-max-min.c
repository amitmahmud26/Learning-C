#include<stdio.h>
int main(){
    int a[999],i,n;
    printf("How many numbers?");
    scanf("%d",&n);

    printf("Enter %d Numbers:\n",n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    
    for(i=0; i<n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    int min = a[0];
    for(i=0; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("The maximum is %d\n", max);
    printf("The minimum is %d", min);
return 0;
}