// #include<stdio.h>
// int GCD(int a , int b ){
//     int rem = 0 ; 
//     while(b>0){
//         rem = a%b ;
//         a = b ; 
//         b = rem ;
//     }
//     return a; 
// }
// int main(){

// int a ,b ;
// printf("Enter your numbers ");
// scanf("%d%d",&a,&b);

// int m = GCD(a,b);

// printf("Gratest commom factor of given two number = %d ",m);

//     return 0 ;
// }


#include<stdio.h>
int GCD(int a , int b ){
    int rem = 0 ;
    
        for(int i = 1 ; i<=a && i<=b ; i++){
            if (a%i==0 && b%i==0){
                    rem = i ;
            }
            
        }
        return  rem ;
    
}
int main(){

int a , b ;
printf("Enter your values : ");
scanf("%d%d",&a,&b);

int m = GCD(a,b);
printf("Your Gratest common factor  of %d , %d = %d ",a,b,m);


    return 0 ;
}