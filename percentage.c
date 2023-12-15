#include<stdio.h>
int main()
{
    float percentage;
    int totalmarks = 3600;
    int scored = 2827;
    percentage = (float)scored/totalmarks*100.0;
    printf("Percentage = %.2f%%",percentage);
    return 0;
}
