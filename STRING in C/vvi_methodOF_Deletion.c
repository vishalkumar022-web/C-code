#include<stdio.h>
int main(){

char arr[1000];  int flag = -1 ;

int i = 0 ;    int count = 0 ;
while(i<1000){
    scanf("%c",&arr[i]);
    if(arr[i]=='#'){
        break;
    }
    i++ ;
}
arr[i]= '\0';

i= 0 ;
while(arr[i]!='\0'){
    count++ ;
    i++ ;
}
char k ;
printf("Enter your character ");
scanf(" %c",&k);

for(int i = 0 ; i<count ; i++){
if(arr[i]==k){
    flag = i ;
}
}
if(flag!=-1){
for(int i = flag ;i<count; i++){
    arr[i]= arr[i+1];
}
  }
arr[count-1]='\0';
count-- ;


for (int i = 0 ;i<count ; i++){
    printf("%c",arr[i]);
}
return 0 ;
}