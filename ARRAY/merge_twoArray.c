#include<stdio.h>
int main(){
int n ;
printf("Enter the size of array 1 :--");
scanf("%d",&n);
int arr[n];
printf("Enter your inputs ");
for (int i= 0 ;i<n ;i++){
    scanf("%d",&arr[i]);
}
int m ; 
printf("Enter the size of 2nd array :--");
scanf("%d",&m);
int brr[m];
printf("Enter your inputs ");
for (int i2= 0 ;i2<m ;i2++){
    scanf("%d",&brr[i2]);
}
int v = n + m ;
int crr[v];
int i3 = 0 ;

for(int i=0 ;i<n ;i++){
    crr[i3]= arr[i];
    i3++ ;
}
for (int i2 =0 ;i2<m ; i2++){
    crr[i3]=brr[i2];
    i3++ ;
}
for (int i3 =0 ; i3<v ;i3++){
    printf("%d ",crr[i3]);
}
    return 0  ;
}