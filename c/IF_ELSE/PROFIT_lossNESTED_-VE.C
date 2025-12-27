#include<stdio.h>
int main (){
int sp , cp ;
printf("enter your S.P :--");
scanf("%d", &sp);
printf("enter your C.P :--");
scanf("%d", &cp);

if(sp>cp){
    printf("profit");
}
else{
    if(sp==cp){
        printf("sp = cp ");
    }
    else{
        printf("loss");
    }
}


    return 0;
}