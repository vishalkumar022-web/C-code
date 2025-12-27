#include<stdio.h>
int main (){

int a,b ;

printf("Enter the value of a:- ");
scanf("%d",&a);
printf("enter the value of b:-  ");
scanf("%d",&b);

if ((a>0)&&(a>b)&&(a%2==0)){
    printf("a is larger ,+ve and even ");
}
 
 else if ((a<0)&&(a>b)&&(a%2==0)){
    printf("a is larger ,-ve and even ");
}

 else if ((a>0)&&(a>b)&&(a%2==1)){
    printf("a is larger ,+ve and odd ");
}

else if ((a<0)&&(a>b)&&(a%2==-1)){
    printf("a is larger ,-ve and odd ");
}

else if ((b>0)&&(b>a)&&(b%2==0)){
    printf("b is larger ,+ve and even ");
}

else if ((b<0)&&(b>a)&&(b%2==0)){
    printf("b is larger ,-ve and even ");
}

else if ((b>0)&&(b>a)&&(b%2==1)){
    printf("b is larger ,+ve and odd ");
}
else if ((b<0)&&(b>a)&&(b%2==-1)){
    printf("b is larger ,-ve and odd ");
}

else {printf("both number are same ");}



// if (a>b){
//     if (a>0){
//         if (a%2==0){
//             printf("a is Larger, +ve and even");
//         }
//          else {
//             printf("a is Larger, +ve and odd ");
//         }
//     }else {if(a%2==0){
//         printf("a is Larger, -ve and even");

//     }
//     else{printf("a is Larger, -ve and odd ");}
//     }
// }
// else {if(b>a){
//     if (b>0){
//         if(b%2==0){
//             printf("b is larger , +ve and even ");
//         }else {printf("b is larger , +ve and ODD");}
//     }else {
//         if (b%2==0){
//             printf("b is larger , -ve and even");
//         }else {printf("b is larger , -ve and odd");}
//     }
// }
// else {printf("both a and b are same number ");}
// }

(a>b)?(a>0)?(a%2==0)? printf("a is larger ,+ve and even"): printf("a is larger ,+ve and odd"):(a%2==0)? printf("a is larger ,-ve and even"): printf("a is larger ,-ve and odd"):(b>a)?(b>0)?(b%2==0)?printf("b is larger ,+ve and even"):printf("b is larger ,+ve and odd"):(b%2==0)?printf("b is larger ,-ve and even"):printf("b is larger ,-ve and odd"):printf("a and b are same");








    return 0;
}