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

struct node *start ;
start = &s1 ;     

node tail ;
tail.data = 12 ;
tail.ptr = NULL ;
s3.ptr = &tail ;

while(start!=NULL){
    printf("%d  ",start->data);
    start = start->ptr ;
}

    return 0 ;
}


