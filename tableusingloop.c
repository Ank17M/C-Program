#include<stdio.h>
void main(){
    int num,i;
    i = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
}
