# include<stdio.h>
# include "NumClass.h"

int main(){

    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);

    printf("all armstrong numbers in the range:");
    for(int i=a; i<=b; i++){
        if(isArmstrong(i)==1){
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("all polindrom numbers in the range:");
    for(int i=a; i<=b; i++){
        if(isPalindrome(i)==1){
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("all strong numbers in the range:");
    for(int i=a; i<=b; i++){
        if(isStrong(i)==1){
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("all prime numbers in the range:");
    for(int i=a; i<=b; i++){
        if(isPrime(i)==1){
            printf("%d ",i);
        }

    }
    printf("\n");
    return 0;

}