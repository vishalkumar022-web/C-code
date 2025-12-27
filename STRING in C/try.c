// #include<stdio.h>
// int main(){

// char arr[1000];  int flag = -1 ;

// int i = 0 ;    int count = 0 ;
// while(i<1000){
//     scanf("%c",&arr[i]);
//     if(arr[i]=='#'){
//         break;
//     }
//     i++ ;
// }
// arr[i]= '\0';

// i= 0 ;
// while(arr[i]!='\0'){
//     count++ ;
//     i++ ;
// }
// char k ;
// printf("Enter your character ");

// scanf(" %c",&k);

// for(int i = 0 ; i<count ; i++){
// if(arr[i]==k){
//     flag = i ;
// }
// }
// if(flag!=-1){
// for(int i = flag ;i<count; i++){
//     arr[i]= arr[i+1];
// }}
// arr[count-1]='\0';
// count-- ;


// for (int i = 0 ;i<count ; i++){
//     printf("%c",arr[i]);
// }
// return 0 ;
// }


// #include<stdio.h>
// int main(){

// char arr[1000];    int count = 0 ;
// int i =0 ;
// while(i<1000){
//     scanf("%c",&arr[i]);
//     if (arr[i]=='#'){
//         break;
//     }
//     i++ ;
// }
// arr[i]='\0' ;
// i= 0 ;
// while(arr[i]!='\0'){
//     count++ ;
//     i++ ;
// }
// printf("Your size of a given string is :-> %d\n",count);

// for (int i = 0 ,j= count-1 ; i<=j ; i++,j--){
//     char temp = arr[i];
//     arr[i] = arr[j] ;
//     arr[j] = temp ;
// }
// for(int i = 0 ; i<count ;i++){
//     printf("%c ,",arr[i]);
// }

//     return 0 ;
// }



// #include<stdio.h>
// int main(){

// int a = 5 ;
// printf("a= %d\n",a);

// printf("Adress of a given variable = %p\n",&a);

// int *ptr ;          // this is a string where we can store the value of  adress of
// ptr = &a;
//   printf(" Adress of a given variable through pointer =%p \n",ptr);  
//   printf("Acess the value of variable through poinnter = %d\n",*ptr);               // a given variable  . size of a sting is always 8 byte because it contain hexadecimal value 
   
//   //we can also update the value of given variable through the pointer like :-

//   *ptr = *ptr + 10 ;
//   printf("%d ",*ptr);
  
  
//   return 0 ;      // format specifier to print a value  of adress is %p..
// }



// #include<stdio.h>

// void swap(int *a , int *b ){
// int temp = *a ;
// *a = *b ; 
// *b = temp ;
// }
// int main(){

// int a = 5 ;  int b = 10 ;
// swap(&a,&b);

// printf("%d   ,  %d ",a,b);

//   return 0 ;
// }

#include<stdio.h>
int main(){

int a = 5 ;

int *ptr = &a ;
int **pp = &ptr ;
printf("%d \n",a);
printf("%d \n",*ptr);
printf("%d \n",**pp);
  return 0 ;

}