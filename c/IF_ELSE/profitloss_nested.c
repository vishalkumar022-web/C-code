#include<stdio.h>
int main(){

int sp , cp ;
printf("Enter your S.P");
scanf("%d", &sp);
printf("Enter your C.P");
scanf("%d",& cp);
if(sp>=cp){
    if(sp>cp){
        printf("profit");
    }
    else{
        printf("S.P = C.P");
    }

}
else{
    printf("loss");
}

    return 0 ;
}