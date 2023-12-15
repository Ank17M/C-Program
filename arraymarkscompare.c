#include<stdio.h>
void main(){
    int arrsize, ct1=0, ct2=0, ct3=0, ct4=0, i, stud = 1;

    printf("Enter number of students : ");
    scanf("%d",&arrsize);

    int marks[arrsize];

    for(i=0; i<arrsize; i++){
        printf("Enter marks of Student-%d : ",stud);
        scanf("%d",&marks[i]);
        stud++;
    }

    for(i=0; i<arrsize; i++){
        if(marks[i]<15){
            ct1++;
        }else if(marks[i]>=15 && marks[i]<20){
            ct2++;
        }else if(marks[i]>=20 && marks[i]<25){
            ct3++;
        }else{
            ct4++;
        }
    }
    printf("\nStudents with marks less than 15 are : %d\n",ct1);
    printf("Students with marks more than or equal to 15 and less then 20 are : %d\n",ct2);
    printf("Students with marks more than or equal to 20 and less then 25 are : %d\n",ct3);
    printf("Students with marks more than 25 are : %d\n",ct4);
}
