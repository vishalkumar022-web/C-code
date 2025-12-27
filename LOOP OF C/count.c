#include<stdio.h>
int main(){

int n = 5423 ;
int count = 0;

for(;n>0;count++){

   n = n/10 ;

}
printf("count of given dighit is = %d", count);

    return 0;
}