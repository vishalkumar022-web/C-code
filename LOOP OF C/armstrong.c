#include<stdio.h>
int main(){

int n ; int power = 1 ;  int count = 0 ;  int b = 0 ;  int rem = 0 ; int sum = 0 ;
printf("enter your number ");
scanf("%d",&n);

 b = n ;
 while(b>0){
    b = b/10 ;
    count++ ;
 }
 
int d = n ;            

while(d>0){
     rem = d%10;
     power = 1 ;
     for (int i =1 ;i<=count ;i++){
        power= power * rem ;    
     }
     sum = sum + power ;
    
     d = d/10 ;
}


if (sum==n)
{
    printf("armstrong number ");
}

else{
    printf("not a armstrong number ");
}

    return 0 ;
}