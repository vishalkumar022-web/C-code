#include<stdio.h>
void table(int n , int i ){
    if (i>10){
        return;
    }
    printf("Table = %d\n",n*i);
    i++ ;
    table(n,i);

}
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

table (n,1);






    return 0 ;
}