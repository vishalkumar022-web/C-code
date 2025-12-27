#include<stdio.h>
int s ;

int main(){
printf("enter the value of s ");
scanf("%d",&s);
int i ;
printf("enter the value of i ");
scanf("%d",&i);

while (i<=s){
if (i==2){
    i++;
    continue;
}
printf("%d",i);
i++;

}



    return 0 ;
}