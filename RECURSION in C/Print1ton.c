#include<stdio.h>
void increasing(int a , int b ){
    
    if(a>b){
        return  ;
    }
    printf("a = %d\n",a);
      a++ ;
    increasing(a,b);

}
int main(){

    int a, b ;
    printf("Enter your numbers ");
    scanf("%d%d",&a,&b);

increasing(a,b);  

    return 0 ;
}