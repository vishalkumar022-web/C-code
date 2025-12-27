// #include<stdio.h>
// int main(){

// int arr[6]={1,2,3,4,5,6};
// int flag = -1 ;
// int x , y ;
// printf("Enter your number that you want to delete from array:- ");
// scanf("%d%d",&x,&y);

// for(int i = 0 ; i<6 ;i++){
//     if (arr[i]==x){
//         flag = i ;
//     }
// }
// for (int i = flag ; i<6 ;i++){
//         arr[i]=arr[i+1];
// }

// for(int j = 0 ; j<5 ;j++){
//     if (arr[j]==y){
//         flag = j ;
//     }
// }
// for (int i = flag ; i<5 ;i++){
//         arr[i]=arr[i+1];
// }

// for (int i =0 ;i<4 ;i++){
//     printf("%d ",arr[i]);
// }
//     return 0 ;
// }


#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int x , y ;   int brr[5];  int a = 0 ;
printf("Enter your elements that you want to delete ");
scanf("%d%d",&x,&y);

for (int i =0 ;i<5 ;i++){
    if (arr[i]==x||arr[i]==y){
        continue;
    }
    brr[a]=arr[i];
    a++ ;
}
for (int i=0 ;i<a ; i++){
    printf("%d ",brr[i]);
}

return 0 ;}