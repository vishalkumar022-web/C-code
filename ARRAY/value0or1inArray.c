#include<stdio.h>
int main(){

int n ;
printf("Enter your size of array ");
scanf("%d",&n);

int arr[n];

int x ;
printf("Enter your number ");

int i = 0 ;
while(1){
scanf("%d",&x);

if (x==1||x==0){
    arr[i]=x ;
    i++;
}

else{printf("not valid input \n");}

if(i==n){
    break;
}

}

for (int i = 0 ;i<n ; i++){
    printf("%d  ",arr[i]);
}

    return 0 ;
}