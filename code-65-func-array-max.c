#include<stdio.h>
int display(int x[], int m)
{
    int max = x[0];
    for(int i=0; i<m; i++)
    {
        if (x[i]>max)
        {
            max = x[i];
        }
        
    }
    return max;
}
int main()
{
    int num[100],n;
    printf("How many numbers?");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    
    int maximum = display(num,n);
    printf("Maximum = %d",maximum);
return 0;
}
