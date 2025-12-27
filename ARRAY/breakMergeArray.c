#include<stdio.h>
int main(){

int n ;
printf("Enter the size of array ");
scanf("%d",&n);
int arr[n];
printf("Enter your inputs in array ");
for(int i= 0 ; i<n ;i++){
scanf("%d",&arr[i]);
}

  int x = 0 ; int y = 0 ;  int c =0 ; int c1 = 0 ;    
int brr[n];    int crr[n];

for (int i = 0 ; i<n ;i++){
    if (arr[i]%2==0){
        brr[x]=arr[i];
        
        x++ ;
        c++ ;
    }
    else {
        crr[y]=arr[i];
        y++ ;
        c1++ ;
    }
}
printf("brr[a]= ");
for (int x = 0 ;x<c ;x++){
    printf("%d",brr[x]);
}
printf("crr[b]= ");
for (int y= 0 ;y<c1 ; y++){
    printf("%d",crr[y]);
}

    return 0 ;
}