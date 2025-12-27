#include<stdio.h>
int Strong(int n ){
   int rem = 0 ; int c = 1 ;  int sum = 0 ;
    int d = n ;
while(d>0){
rem = d %10 ;
  c = 1 ;

for (int i =1 ; i<=rem;i++){
    c = c*i ;
    }

    sum = sum +c ;
d = d/10 ;
}

if (sum == n ){
    return 1 ;
}
else {return 0 ;}
}
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

int m = Strong(n);

if (m==1){
printf("%d is a strong number",n);}
else{
    printf("%d is not a strong number ",n);
}


    return 0 ;
}