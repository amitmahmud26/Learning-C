#include<stdio.h>
void rev(int n, int arr[]);
int main()
{
    int n,arr[20];
    rev(n,arr);
return 0;
}
void rev(int n, int arr[])
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
}
