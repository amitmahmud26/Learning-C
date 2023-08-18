#include<stdio.h>
void display(int x[], int m)
{
    for(int i=0; i<m; i++)
    {
        printf("%d ",x[i]);
    }
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
    display(num,n);
}