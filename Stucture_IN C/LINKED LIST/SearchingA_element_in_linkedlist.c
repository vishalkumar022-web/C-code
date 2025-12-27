#include<stdio.h>

 typedef struct node{
    int data ;
    struct node* ptr ;
}node ;

int main(){

node s1, s2 , s3 ;

s1.data = 1 ;
s1.ptr = &s2 ; 

s2.data =2 ;
s2.ptr = &s3 ;

s3.data =33 ;
s3.ptr =NULL ;

 node *start ;
start = &s1 ;
int n = 8 ;  int flag = 0 ;
while(start!=NULL){
    if(start->data==n){
        flag = 1 ;
        break;
}
 start = start->ptr ;
}
if(flag==1){
    printf("%d is present in linkedlist ",n);
}
else{
     printf("%d is not present in linkedlist ",n);

}
    return 0 ;
}
