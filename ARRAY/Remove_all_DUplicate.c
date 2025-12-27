#include<stdio.h>
int main(){
int n ;
printf("Enter your number ");
scanf("%d",&n);
int arr[n];   int flag = -1 ;
printf("Enter your inputs ");
for (int i =0 ; i<n ;i++){
    scanf("%d",&arr[i]);
}

for (int i = 0 ; i<n ;i++){
    for (int j = i+1 ; j<n ;j++){
            if(arr[i]==arr[j]){
                flag = j ;
                  for(int k = flag ; k<n ; k++){
                arr[k]= arr[k+1];
            }  
    n-- ;     j-- ;
    }   
 }         
}
for (int i = 0 ;i<n ; i++){
    printf("%d  ",arr[i]);
}
  return 0 ;
}