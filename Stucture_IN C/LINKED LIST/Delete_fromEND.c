#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* ptr;
} node;

int main() {
    
    node* s1 = (node*)malloc(sizeof(node));
    node* s2 = (node*)malloc(sizeof(node));
    node* s3 = (node*)malloc(sizeof(node));

    s1->data = 1;
    s1->ptr = &*(s2);

    s2->data = 2;
    s2->ptr = &*(s3);

    s3->data = 33;
    s3->ptr = NULL;

 
    node* start ;
    start = &*(s1);

    
    node* temp = &*(s3) ;     
   s2->ptr = NULL ;     
    free(temp);           
  
    while(start != NULL) {
        printf("%d  ", start->data);
        start = start->ptr;
    }

    return 0;
}
