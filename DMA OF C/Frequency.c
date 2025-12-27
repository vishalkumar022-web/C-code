#include<stdio.h>
#include<stdlib.h>

int main(){

int* ptr = (int*)calloc(6,sizeof(int));
for (int i = 0 ; i<6 ;i++){
    scanf("%d",&ptr[i]);
}

for(int i = 0 ;i<6 ;i++){
    int a = 0 ;
    for(int k = 0 ; k<i ;k++){
            if(ptr[i]==ptr[k]){
                a = 1 ;
                break;
            }
    }
    if(a==1){
        continue;
    }
    int count = 1 ;
    for (int j = i+1 ;j<6 ;j++){
        if(ptr[i]==ptr[j]){
            count++ ;
        }
    }
    printf("%d is repeated %d times \n",ptr[i],count);
}
    return 0 ;
}