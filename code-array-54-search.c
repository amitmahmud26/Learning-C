#include<stdio.h>
int main(){
    int a[100],n,find,pos=-5;

    printf("How many numbers?");
    scanf("%d",&n);

    printf("Enter %d numbers:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("What do you want to find?");
    scanf("%d",&find);

    for (int i = 0; i < n; i++)
    {
        if(a[i] == find)
        {
            pos = i+1;
            break;
        }
    }
    if (pos == -5)
    {
        printf("Not found");
    }
    else
    {
        printf("%d",pos);
    }
    return 0;
    

}