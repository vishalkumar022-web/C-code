#include<stdio.h>
void decreasing(int n , int i ){
    if (i==n){
        return ;
    }
     printf("%d\n",n);
     n-- ; 
     decreasing(n,i);

}
int main(){

int n , i ;
printf("Enter your numbers ");
scanf("%d%d",&n,&i);

decreasing(n,i);

    return 0 ;
}