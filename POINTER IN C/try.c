// #include<stdio.h>
// int main(){

// int a , b ;

// int *ptr = &a ;   int *ptr1 = &b ;

// printf("Enter your value :--> ");
// scanf("%d%d",  & *ptr,& *ptr1);



// if(*ptr>*ptr1){
//     printf("a is max %d ",*ptr);
// }
// else{
//     printf("b is max %d ",*ptr1);
// }

//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// int a[5];
// int *ptr = &a[0] ;

// printf("Enter your value :--> ");
// for (int i = 0 ; i<5 ;i++){
// scanf("%d",&*(ptr+i));
// }

// printf("Your output Array is :--> \n");
// for (int i = 0 ; i<5 ;i++){
// printf("%d  ",*(ptr+i));
// }
//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// int a[5];
// int *ptr = &a[0] ;

// printf("Enter your value :--> ");
// for (int i = 0 ; i<5 ;i++){
// scanf("%d",&*(ptr+i));
// }
// int flag = -1 ;
// int k ;
// printf("Enter your value which you want to search :- ");
// scanf("%d",&k);

// for (int i = 0 ; i<5 ;i++){
//     if(*(ptr+i)==k){
//         flag = i ;
//         break;
//     }
// }
// if(flag!=-1){
//     printf("%d is present in %d index ",k,flag);
// }

//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// char arr[1000];
// char *ptr = arr ; 
// fgets(ptr,sizeof(arr),stdin);  //yaha ptr isliye likhte hai instead of *ptr kyunki iska format 
// int i = 0 ;                   // fgets(arr, sizeof(arr),stdin) hai and arr bhi first ka adress hi 
// while(i<1000){                 // Batata hai and ptr bhi first ka adress store karta hai, isliye ham arr ke jagah pr ptr likh sakte hai but *ptr nahi 
//     if(*(ptr+ i )==' '|| *(ptr+ i )=='\n'){
//         *(ptr+i)= '\0' ;
//     }
//     i++ ;
// }

// int count = 0 ; 
// for (int i = 0 ; *(ptr+ i )!='\0' ;i++){
//     count++ ;
// }
// printf("the size of a given string is %d ",count);

//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// char arr[1000];
// char* ptr = arr ;

// fgets(ptr,sizeof(arr),stdin);
// int i = 0 ;
// while(i<1000){
// if(*(ptr+i)==' '||*(ptr+i)=='\n'){
//     *(ptr+i) = '\0' ;
// }
// i++ ;
// }

// int count = 0 ;
// for (int i =0 ; *(ptr+i)!='\0'; i++){
//     count++ ;
// }
//  i = 0 ; int x = count-1 ;

// while(i<=x){
//     char temp = *(ptr+i) ;
//     *(ptr+i) = *(ptr+x);
//     *(ptr+x) = temp ;
//     i++ ;    x-- ;
// }
// for(int i = 0 ;i<count ; i++){
//     printf("%c  ",*(ptr+i));
// }
//     return 0 ;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
// char crr[] = "is a best" ;
// char arr[100];    char* ptr = arr ;       char* ptr2 = crr ;
// char brr[100];     char*ptr1 = brr ;    

// fgets(ptr,sizeof(arr),stdin);
// fgets(ptr1,sizeof(brr),stdin);
// int i = 0 ;
// while(i<100){
// if(*(ptr+i)==' '||*(ptr+i)=='\n'){
//     *(ptr+i) = '\0' ;
// }
// i++ ;
// }

//  i = 0 ;
// while(i<100){
// if(*(ptr1+i)=='\n'){
//     *(ptr1+i) = '\0' ;
// }
// i++ ;
// }

// strcat(ptr,ptr1);
// strcat(ptr,ptr2) ;

// // printf("%s",ptr);   // instead of doing this ham for loop se bhi print kara sakte hai..

// for (int i = 0 ;*(ptr+i)!='\0';i++){
//     printf("%c",*(ptr+i));
// }
//     return 0 ;
// }

//  ** SAME QUESTION MEANS CONCATENATE BUT BY USING LOOP :--->

// #include<stdio.h>
// int main(){

// char arr[1000];     char* ptr = arr ;
// char brr[100];      char* ptr1 = brr ;

// printf("Enter the input in 1st string :- ");
// fgets(ptr,sizeof(arr),stdin);
// printf("Enter the input in 2nd string :- ");
// fgets(ptr1,sizeof(brr),stdin);

// int i =0  ;  int count =0 ;

// while(*(ptr+i)!='\0'){
//     if(*(ptr+i)=='\n'){
//         *(ptr+i)='\0' ;
//     }
//     i++ ;
// }

// i=0 ;
// while(*(ptr+i)!='\0'){
//     count++ ;
//     i++ ;
// }
//    i = 0 ;
// while(*(ptr1+i)!='\0'){
//     *(ptr+count)=*(ptr1+i);
//     count++ ;
//     i++ ;
// }
// *(ptr+count)= '\0' ;

// for (int i = 0 ;*(ptr+i)!='\0';i++){
//     printf("%c",*(ptr+i));
// }
//     return 0 ;
// }


#include<stdio.h>
int main(){

int arr[2][2];
int* ptr = &arr[0][0] ;

for(int i =0 ; i<2 ;i++){
    for (int j =0 ; j<2 ;j++){
        scanf("%d",&*(ptr+i*2+j));
    }
}
for(int i = 0 ;i<2 ; i++){
    for (int j =0 ;j<2 ;j++){
        printf("%d ",*(ptr+i*2+j));
    }
    printf("\n");
}


    return 0 ;
}



// #include<stdio.h>
// int main(){

// int arr[2][2];         int brr[2][2];
// int* ptr = &arr[0][0] ;             int* ptr1 = &brr[0][0];
// printf("Enter the value in arr ");
// for(int i =0 ; i<2 ;i++){
//     for (int j =0 ; j<2 ;j++){
//         scanf("%d",&*(ptr+i*2+j));
//     }
// }

// printf("Enter the value in brr ");

// for(int i = 0 ;i<2 ; i++){
//     for (int j =0 ;j<2 ;j++){
//         scanf("%d",&*(ptr1+i*2+j));
//     }
// }
// int crr[2][2] ;    int* ptr2 = &crr[0][0];


// for(int i = 0 ;i<2 ; i++){
//     for (int j =0 ;j<2 ;j++){
//         *(ptr2+i*2+j) = *(ptr+i*2+j) + *(ptr1+i*2+j) ;
//     }
// }
// for(int i = 0 ; i<2 ;i++){
//     for (int j=0 ;j<2 ;j++){
//         printf("%d  ", *(ptr2+i*2+j));
//     }
//     printf("\n");
// }

//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// int arr[2][3];         
// int brr[3][2];
// int* ptr = &arr[0][0] ;             
// int* ptr1 = &brr[0][0]; 

// printf("Enter the value in arr ");
// for(int i =0 ; i<2 ;i++){
//     for (int j =0 ; j<3 ;j++){
//         scanf("%d",&*(ptr+i*3+j));
//     }
// }

// printf("Enter the value in brr ");

// for(int i = 0 ;i<3 ; i++){
//     for (int j =0 ;j<2 ;j++){
//         scanf("%d",&*(ptr1+i*2+j));
//     }
// }
// int crr[2][2] ;    int* ptr2 = &crr[0][0];
// int m = 3 ;

// for(int i = 0 ;i<2 ; i++){
//     for (int j =0 ;j<2 ;j++){
//         *(ptr2+i*2+j) = 0 ; 
//         for(int k = 0 ; k<m ;k++){
//             *(ptr2+i*2+j)+= *(ptr+i*m+k) * (*(ptr1+k*2+j));
//         }
//     }
// }
// for(int i = 0 ; i<2 ;i++){
//     for (int j=0 ;j<2 ;j++){
//         printf("%d  ", *(ptr2+i*2+j));
//     }
//     printf("\n");
// }

//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// char arr[1000];   char* ptr = arr ;
// char brr[1000];   char* ptr1 = brr ;

// fgets(ptr,sizeof(arr),stdin);
// fgets(ptr1,sizeof(brr),stdin);

// int i = 0 ;
// while (*(ptr+i)!='\0')
// {
//   if( *(ptr+i)==' '||*(ptr+i)=='\n'){
//     *(ptr+i) = '\0' ;
//   }
//   i++ ;
// }

//  i = 0 ;
// while (*(ptr1+i)!='\0')
// {
//   if( *(ptr1+i)==' '||*(ptr1+i)=='\n'){
//     *(ptr1+i) = '\0' ;
//   }
//   i++ ;
// }
// int flag = 1;

// for (int i =0 ; *(ptr+i)!='\0'&&*(ptr1+i)!='\0';i++){
//     if(*(ptr+i)!=*(ptr1+i)){
//         flag = 0 ;
//         break;
//     }
// }
//  if(*(ptr+i)!='\0'||*(ptr1+i)!='\0'){
//         flag =0 ;
//     }
// if(flag==1){
//     printf("both string are equal ");
// }
// else{
//     printf("both string are not equal ");
// }

//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// int arr[5][5];  int *ptr = &arr[0][0];
// for(int i =0 ;i<5 ;i++){
//     for (int j =0 ;j<5 ;j++){
//         scanf("%d",&*(ptr+i*5+j));
//     }
// }
// int c = 5 * 5 ;  
// int temp[c];   int *ptr1 = temp ;
// int x = 0 ;
// for (int i =0 ;i<5 ;i++){
//     for (int j = 0 ; j<5 ;j++){
//        *(ptr1 + x) = *(ptr+i*5+j) ;
//               x++ ;
//     }
// }

// for(int x =0 ;x<c ;x++){
//     for(int j = x+1 ; j<c; j++){
//         if(*(ptr1 + x)>*(ptr1 + j)){
//             int temp = *(ptr1 + x);
//             *(ptr1 + x) = *(ptr1 + j);
//             *(ptr1 + j) = temp ;
//         }
//     }
// }
//  x = 0 ;
// for (int i = 0 ;i<5 ;i++){
//     for (int j =0 ;j<5 ;j++){
//         *(ptr+i*5+j)= *(ptr1 + x);
//         x++ ;
//     }
// }
// for(int i = 0 ;i<5 ;i++){
//     for (int j =0 ;j<5 ;j++){
//         printf("%d ",*(ptr+i*5+j));
//     }
//     printf("\n");
// }
//     return 0 ;
// }

// #include<stdio.h>
// int main(){

// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int *ptr = &arr[0][0];

// int sum = 0 ;   int max_sum = 0 ;  int flag = -1 ;

// for(int i = 0 ;i<3;i++){
//     sum = 0 ;
//     for (int j = 0 ;j<3 ; j++){
//         sum = sum + *(ptr+i*3+j) ;
//     }
//     if(sum>max_sum){
//         max_sum = sum ;
//         flag = i ;
//     }
// }

// printf("%d is a max sum present in %d row",max_sum,flag);
//     return 0 ;
// }