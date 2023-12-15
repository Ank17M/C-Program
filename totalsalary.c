#include<stdio.h>
#include<math.h>
int main()
{
    int salary, allow,total;
    float hra, da, pf,totalsalary;
    char grade;
    printf("Enter Salary -> ");
    scanf("%d",&salary);
    printf("Enter Grade A, B, C -> ");
    scanf(" %c",&grade);
    if(grade == 'A'||grade == 'B'||grade == 'C')
    {
        if(grade == 'A')
            allow = 1700;
        else if(grade == 'B')
            allow = 1500;
        else
            allow = 1300;

        hra = salary*20/100;
        da = salary*50/100;
        pf = salary*11/100;
        totalsalary = salary+hra+da+allow-pf;
        total = round(totalsalary);
        printf("Totalsalary = %d",total);
    }
    else
        printf("Enter a valid grade. \n");

    return 0;
}
