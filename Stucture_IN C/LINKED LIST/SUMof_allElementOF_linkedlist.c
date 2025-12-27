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

s3.data =3 ;
s3.ptr =NULL ;

struct node *start ;
start = &s1 ;

// for sum of all element of a linkedlist :-->

int sum = 0 ;
while(start!=NULL){
    sum = sum + start->data ;
    start = start->ptr ;
}
printf(" sum of all element of a linkedlist = %d ",sum);
    return 0 ;
}