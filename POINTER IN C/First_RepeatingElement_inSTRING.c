#include<stdio.h>
int main(){

char arr[100];
char*ptr = arr ;
fgets(ptr,sizeof(arr),stdin);
int count = 1 ;
int flag =-1 ;
for(int i =0 ;*(ptr+i)!='\0' ;i++){
        for(int j = i+1 ; *(ptr+j)!='\0';j++){
            if(*(ptr+i)==*(ptr+j)){
                    count++ ;
                    flag = (*(ptr+i)) ;
                    break;
                 }
        }
        if(flag==*(ptr+i)){
            break;
        }
}
if(flag!=-1){
       printf("%c is repeated %d times in a strings ",flag,count);
}
    return 0 ;
}