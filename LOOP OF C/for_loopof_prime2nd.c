
// #include<stdio.h>
// int main(){

// int n ; int c = 0  ;
// printf("enter your number");
// scanf("%d",&n);

// for(int i = 2; i<=(n-1); i++){
//     if (n%i==0)
//     c++;
// }
// if (c==0){printf("prime ");
// }
// else{
//     printf("not prime ");
// }

// return 0;
// }


//USE OF break;

#include<stdio.h>
int main(){

int n ; int c = 0  ;
printf("enter your number ");
scanf("%d",&n);

for(int i = 2; i<=(n-1); i++){
    if (n%i==0){
    c++;
    break;}
}
if (c==0){printf("prime ");
}
else{
    printf("not prime ");
}

return 0;
}


