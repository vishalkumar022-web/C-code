#include<stdio.h>
int main(){

int n ;


while (1){

 
  int count = 0 ;      int x = 0 ;     int v = 0 ;    

  printf("Enter your number ");
scanf("%d",&n);
int e = n ;

if (n<=0){
    break;
}

if (n==1){
    x = 0 ;
}

for(int i = 2 ; i<=(n-1) ;i++ ){  
   
if (n%i==0){
    count++ ;
    break;
}
}
if (count == 0){
    x =  1 ;
}


int a = 0 ; int b =  1 ; int c = 0 ; 
if (e==0 || e==1 ){
    v = 1 ;
}
while(b<e){
    c = a + b ; 
    a = b ; 
    b = c ;

} 
if (b==e){
v = 1 ;
}

if (v&&x){
    printf("A given number is fibo and prime = %d\n",n);
}
else if (v && !x){
    printf("A given number is fibo and not  prime = %d\n",n);
}
else if (!v && x ){
    printf("A given number is not  fibo and prime = %d\n",n);
}
else {
    printf ("a number is not fibo and not  prime = %d\n",n);
}
}
printf("it found negative number so, loop get ended = %d ",n);

    return 0 ;
}
