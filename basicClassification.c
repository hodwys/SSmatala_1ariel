# include<stdio.h>
#include<math.h> 

int isPrime(int num){
 if(num==1){
 return 1; 
 }
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}


int isStrong(int num){
int ans = 0;
while(num!=0)
{
  int a= num%10;
  num =num/10;
  int j = 1;

  for(int i =1; i<=a ; i++)
  {
    j=j*i;

  }
  ans=ans+j;
  a=0;
}

 return ans;
}
