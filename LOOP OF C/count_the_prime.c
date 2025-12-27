#include<stdio.h>
int main(){
 int i ; 
printf("Enter your 1st number ");
scanf("%d",&i);
int n ;
printf("Enter your 2nd  number ");
scanf("%d",&n);

while(i<=n){
    int count = 0 ;
    for(int a =1 ;a<=i;a++ ){
        if (i%a==0){
            count ++ ;
        }
    }
 
if (count==2 ){
    printf("%d is prime \n",i);
}
else{
    printf("%d is not prime\n ",i);
} 
  i++;
}

    return 0 ;
}