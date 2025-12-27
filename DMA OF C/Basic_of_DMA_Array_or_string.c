// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
    
//     char *ptr = (char*) malloc(100*sizeof(char));
//         fgets(ptr,100,stdin);
//     for(int i =0 ; *(ptr+i)!='\0';i++){
//             printf("%c",*(ptr+i));
//     }
//     return 0 ;
// }


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int arr[6] ={1,2,3,4,5,6};

    int*ptr = (int*) malloc(10*4);
        
    for(int i =0 ; i<10;i++){
           scanf("%d",&*(ptr+i));
    }

    for(int i = 0 ;i<10 ;i++){
        printf("%d  ",*(ptr+i));
    }
    return 0 ;
}