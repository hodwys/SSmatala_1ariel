# include<stdio.h>
#include<math.h> 

int power(int a,int b){
    if(b==0){
        return 1;
    }else if(b==1){
        return a;
    }
    else return a*power(a,b-1);

}

int isArmstrong(int num){
    int t = num;
    int ans = 0;
    int p = 0;
    int x = num;
    int a=0;
    while (x!=0)
    {
        x=x/10;
     p++;
    }
    while(num!=0){
    a=num%10;
    ans=ans+power(a,p);
    num=num/10;
    }
    if(ans!=t){
        return 0;
    }
    return 1;
}

int isPalindromeEzer(int arr[],int f,int l){
    if (f < l) {
        return (arr[f] != arr[l])?0:isPalindromeEzer(arr, f + 1, l - 1);
    }
    return 1;
}


int isPalindrome(int num){
    int count = 0;
    int x = num;
    while (x!=0) {
        x=x/10;
        count++;
    }
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        arr[i]=num%10;
        num=num/10;
    }
    return isPalindromeEzer(arr,0,count-1);  

}