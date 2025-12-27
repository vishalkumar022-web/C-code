#include<stdio.h>
int main(){

int a , b, c ;
printf("enter the value of a,b,c :- ");
scanf("%d%d%d",&a,&b,&c);

if (b> a){
    if (c>b){
        printf("A , B , C are in assending order");
    }
}

else {
    printf(" A, B, C are not in assending order ");
}




    return 0 ;
}