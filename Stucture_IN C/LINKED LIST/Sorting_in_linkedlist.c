#include<stdio.h>

typedef struct node{
    int data;
    struct node* ptr;
} node;

int main(){

    node s1, s2, s3;

    s1.data = 100;
    s1.ptr = &s2;

    s2.data = 21;
    s2.ptr = &s3;

    s3.data = 33;
    s3.ptr = NULL;

    struct node *start = &s1;
    struct node *i , *j;

    
    for(i = start; i != NULL; i = i->ptr){
        for(j = i->ptr; j != NULL; j = j->ptr){
            if(i->data > j->data){
                
             int temp = i->data;
             i->data = j->data;
             j->data = temp;
            }
        }
    }  
    printf("Sorted linked list: ");
    
for (i= start ; i!=NULL;i=i->ptr){
    printf("%d  ",i->data);
}

    return 0;
}
