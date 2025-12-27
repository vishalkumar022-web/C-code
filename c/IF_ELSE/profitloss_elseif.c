#include<stdio.h>
int main(){

int sp ,cp ;
printf("Enter your SP:");
scanf("%d", &sp);
printf("Enter your CP:");
scanf("%d", &cp);

if(sp>cp){
    printf("profit");
}
else if (cp>sp){
    printf("loss");
}

else {
    printf("cp = sp");
}


    return 0;
}