
//Q.. **when user give number i = 1 ; to n = own input find max , min and average ?


// #include<stdio.h>
// int main(){

// int n ; int max = 0 ; int min = 9 ; int sum = 0 ; int count = 0 ;
// printf("Enter your number ");
// scanf("%d",&n);

// for (int i = 1 ; i<=n ; i++){
//     if (i>max){
//         max = i ;
//     }
// if (i<min){
//     min= i ;
// }
// sum = sum + i ;
// count ++;

// }
// float average = sum /count ;

// printf("average of all number is %f",average);
// printf("\n max digit is = %d",max);
// printf("\n min digit is = %d",min);


// return 0 ;
// }






//VVI Qes.. **when user take own input any +ve  number ?

#include<stdio.h>
int main(){

int n ; int max = 0 ;  int min = 9 ; int sum = 0 ; int count = 0 ;  int average = 0 ;

for (;n>=0;count++){
    printf("Enter the value of n ");
    scanf("%d",&n);
if (n>max){
    max = n;
}
    if(n<0){
        break;
    }

  if (n<min){
    min= n ;
}  

sum = sum + n ;
}
average = sum / count ;


printf("it found -ve number ");
printf("\n max digit = %d",max );
printf("\n min digit = %d",min);
printf("\n sum of all number is %d", sum);
printf("\n average of all number = %d",average);

    return 0 ;
}