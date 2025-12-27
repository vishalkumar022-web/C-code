#include<stdio.h>
#include<string.h>
int main(){

char arr[100];    char* ptr = arr ;
char brr[100];    char* ptr1 = brr ;

fgets(ptr,sizeof(arr),stdin);
fgets(ptr1,sizeof(brr),stdin);
// int x = 0 ;
// while(*(ptr+x)!='\0'){
//     *(ptr+x)='\0' ;
//         x++ ;
// }

// x = 0 ;
// for (int i = 0 ;*(ptr1+i)!='\0';i++){
//     *(ptr+x)= *(ptr1+i);
//     x++ ;
// }
// *(ptr+x)='\0';
strcpy(ptr1,ptr);
//strcpy(destination yani jis string me print karna hai , source string jaha se print krna hai );
printf("%s\n",ptr);  
printf("\n%s",ptr1);

    return 0 ;
}