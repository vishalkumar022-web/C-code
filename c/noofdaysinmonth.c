#include<stdio.h>
int main(){

int n ;
printf("enter the no. of month ");
scanf("%d",&n);

if (n==1){
    printf("No. of days is 31");
}
else if (n==2 )
printf("No of days is 28 ");

else if( n==3){
    printf("No. of days is 31");
}
else if(n==5){
    printf("No. of days is 31");
}
else if (n==7){
    printf("No. of days is 31");
}
else if (n==8){
    printf("No. of days is 31");
}
else if (n==10){
    printf("No. of days is 31");
}
else if (n==12){
    printf("No. of days is 31");
 }
  else if (n==4){
            printf("No. of days is 30");}
            else if (n==6){
                printf("No. of days is 30");}
                else if (n==9){
                    printf("No. of days is 30");}
                    else if (n==11){
                        printf("No. of days is 30");}
            
else {
    printf("No of month is invalid ");
}
    return 0 ;
}