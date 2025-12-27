#include<stdio.h>
int main(){

int arr[7]={1,2,3,4,5,6,7};
int brr[7];   int a = 0 ;  int b = 6 ;

for (int x = 0 ;x<7 ; x++){
    if(x%2==0){
        brr[x]=arr[b];
         b-- ;
    }
    else{
        brr[x]=arr[a];
        a++ ;
    }
}
for(int x=0 ;x<7 ;x++){
    printf("%d   ",brr[x]);
}

    return 0 ;
}