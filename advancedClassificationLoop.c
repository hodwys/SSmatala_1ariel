# include<stdio.h>
#include<math.h>

int isArmstrong(int num) {
    int t = num;
    int ans = 0;
    int p = 0;
    int x = num;
    while (x!=0)
    {
        x=x/10;
        p++;
    }
    while (num!=0)
    {
        ans = ans + pow((num%10),p);
        num = num/10; 
    }
    
    if(ans!=t){
        return 0;
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
    
    int f = 0;
    int l = count-1;
    while (f<l)
    {
        if (arr[f]!= arr[l])
        {
            return 0;
        }
        f++;
        l--;
        
    }
return 1;
}