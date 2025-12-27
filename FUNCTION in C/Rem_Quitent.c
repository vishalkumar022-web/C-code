#include<stdio.h>
int Quitent(int a , int b ){
    int v = a/b ;
    return v ;
}
int Reminder(int a , int b ){
    int rem = a%b ;
    return rem ;
}
int main(){

int a , b ; 
printf("Enter your numbers ");
scanf("%d%d",&a,&b);

int m = Quitent(a,b);
int n = Reminder(a,b);

printf("Quitent of given these number is %d\n",m);
printf("Reminder of given number is %d",n);

    return 0 ;
}