#include<stdio.h>
int main(){

char arr[1000];  char* ptr = arr ;

fgets(ptr,sizeof(arr),stdin);
int i =0 ;
while(*(ptr+i)!='\0'){
    if(*(ptr+i)==' '||*(ptr+i)=='\n'){
        *(ptr+i)='\0';
    }
    i++ ;
}
*(ptr+i)='\0';

int flag = 0 ;
for (int i =0 ;*(ptr+i)!='\0';i++){
    flag = 0 ;
    for(int j = 0 ; j<i ;j++){
        if(*(ptr+i)==*(ptr+j)){
            flag = 1 ;
            break;
        }
    }
   if(flag==1){
    continue;
   } 

  int count = 1 ;

  for(int k = i+1 ; *(ptr+k)!='\0' ; k++){
    if(*(ptr+i)==*(ptr+k)){
        count++ ;
    }
  }
  printf(" %c character Repeated %d times\n ",*(ptr+i),count);
}

    return 0 ;
}