#include<stdio.h>
void main(){
    int arrsize, i, j;

    printf("Enter size of array : ");
    scanf("%d",&arrsize);

    int ar [arrsize];

    for(i=0; i<arrsize; i++){
        printf("Enter elements of a[%d] : ",i);
        scanf("%d",&ar[i]);
    }

    printf("Entered array is: ");
    for(i=0; i<arrsize; i++){
        printf("%d ",ar[i]);
    }
    for(i=0; i<arrsize; i++){
        for(j=i+1; j<arrsize; j++){
            if(ar[i]==ar[j]){
                printf("\nDuplicate array element : %d\n",ar[i]);
            }
        }
    }
}
