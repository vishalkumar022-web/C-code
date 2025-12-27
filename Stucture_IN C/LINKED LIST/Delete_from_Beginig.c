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

    
    node* temp = &*(s1) ;  // Yaha ham &*(s1) ke jagH par sirf (s1) bhi likh sakte hai because s1 already denotes a adress    
start = start->ptr;     // agar ham &*(s1) likhte hai toh iska matlab hai ki pahle s1 ka value acess huaa *(s1) se then &- iske karan adress acess huaa !
    free(temp);           
  
    while(start != NULL) {
        printf("%d  ", start->data);
        start = start->ptr;
    }

    return 0;
}
