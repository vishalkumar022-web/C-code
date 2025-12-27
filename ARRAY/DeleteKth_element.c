// Delete kth element from a array ;

#include<stdio.h>
int main(){

int n ;
printf("Enter your array size ");
scanf("%d",&n);

int arr[n];
printf("Enter your inputs ");
for(int i=0 ;i<n ;i++){
    scanf("%d",&arr[i]);
}

int k ;
printf("Enter your kth elements ");
scanf("%d",&k);

for (int i=k ; i<n ;i++){
    arr[i]=arr[i+1];
}
n-- ;
for (int i =0 ; i<n ;i++){
    printf("%d  ",arr[i]);
}

    return 0 ;
}   