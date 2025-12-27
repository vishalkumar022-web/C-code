#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* ptr;
} node;

int main() {
    // Nodes dynamically create karo
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

    
             
  int count = 0 ;
    while(start != NULL) {
      count++ ;
        start = start->ptr;
    }

    printf("Total Number of nodes = %d",count);
    return 0;
}
