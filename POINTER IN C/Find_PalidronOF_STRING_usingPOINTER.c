#include<stdio.h>
int main(){

char arr[100];   char* ptr = arr ;
fgets(ptr,sizeof(arr),stdin);

for (int i = 0 ;*(ptr+i)!='\0' ; i++){
    if(*(ptr+i)=='\n'){
        *(ptr + i )= '\0' ;
    }
}
int count = 0 ;
for (int i = 0 ;*(ptr + i)!='\0' ; i++){
        count++ ;
}

char brr[count];  char*ptr1 = brr ;
for (int i =0 ;i<count ;i++){
        *(ptr1+i) = *(ptr+i);
}

for (int i =0,n = count-1 ; i<=n ;i++,n--){
        char temp = *(ptr + i) ;
        *(ptr+i) = *(ptr+n) ;
        *(ptr+n) = temp ;
        
}
 int flag = 1 ;
for(int i = 0 ;i<count;i++){
    if(*(ptr+i)!=*(ptr1+i)){
        flag = 0 ;
        break;
    }
}

if(flag==1){
    printf("Palidron");
}
else{
    printf("Not a palidron ");
}
    return 0 ;
}

