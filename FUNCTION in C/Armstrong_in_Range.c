#include<stdio.h>
int Armstrong(int n ){
    int count = 0 ; int rem = 0 ; int power = 1 ;  int sum = 0 ;
 int b = n ;
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
   return 1 ;
}

else{
    return 0 ;
}
}
    
int main(){


int n ; 
printf("Enter your number ");
scanf("%d",&n);

int m = Armstrong(n);
if (m==1){
    printf("%d is Armstrong number ",n);
}
else {
    printf("%d is not a Armstrong number ",n);
}


    return 0 ;
}