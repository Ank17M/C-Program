#include<stdio.h>
int main(){
    int num, i, prime = 1;
    char choice = 'n';
    do{
        printf("Enter a number : ");
        scanf("%d",&num);

        if(num <= 1){
            prime = 0;
        }else{
            for(i = 2; i<=num/2; i++){
                if(num%i==0)
                    prime = 0;
                    break;
            }
        }

        if(prime){
            printf("Prime Number\n");
        }else{
            printf("Not Prime Number\n");
        }

        printf("Do you want to check another number for Prime? (y/n) : ");
        scanf(" %c",&choice);

    }while(choice == 'y' || choice == 'Y');
    printf("Program Terminated");

    return 0;
}
