#include<stdio.h>
void main()
{
    int run;
    printf("Enter Runs : ");
    scanf("%d",&run);
    if(run>49 && run<100)
        printf("Half Century");
    else if(run>99 && run<200)
        printf("Century");
    else if(run>199 && run <299)
        printf("Double Century");
    else
        printf("Nice Runs");
}
