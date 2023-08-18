//5.168 : Array | Maximum and Minimum of Array
#include<stdio.h>
int main(){
    int n[100],i;

    for(i=0; i<5; i++)
    {
        scanf("%d",&n[i]);
    }
    int min = n[0];
    for(i=1; i<5; i++)
    {
        if(min>n[i])
            min = n[i];
    }
    printf("Minimum = %d",min);
    return 0;
}