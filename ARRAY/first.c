#include<stdio.h>
int main(){

int size ;
printf("Enter your size");
scanf("%d",&size);

int arr[size];

for(int i = 0 ; i<size ; i++){
printf("Enter your %d number ",i+1);
scanf("%d",&arr[i]);}


int x ; int flag = 0 ;
printf("Enter your index number ");
scanf("%d",&x);

for (int i = 0 ; i<size ; i++){
    if (i==x){
       
       flag = 1 ;

    }
    

}

if(flag==1){
   printf("%d lies on array",arr[x]);
}
 else 
        printf("wrong input index = %d ",x);  
    return 0 ;
}