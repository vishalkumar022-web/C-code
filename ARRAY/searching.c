#include<stdio.h>
int main(){

int size ;
printf("Enter your size : ");
scanf("%d",&size);

int arr[size];

for(int i = 0 ; i<size ; i++){
printf("Enter your %d number ",i+1);
scanf("%d",&arr[i]);}


int x ;  int flag = -2 ;   int y  ;   int flag1 = -1 ;
printf("Enter your index number ");
scanf("%d",&x);
printf("Enter your 2nd number ");
scanf("%d",&y);
int i ;
for( i = 0 ; i<size ;i++){
    if (arr[i]==x){
       flag = i ;   
    }
} 
  for(int x = 0 ; x<size ;x++){
    if (arr[x]==y){
       flag1 = x ;  
    }
}

if(flag!=-2){
    printf("%d is present in array at index %d ",x,flag);
}
 
 if(flag1!=-1){
    printf("%d is present in array at index %d ",y,flag1);
}     

    return 0 ;
}