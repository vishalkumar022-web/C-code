
// most vvi Question :--->   

#include<stdio.h>
int main(){

char arr[1000];

int i = 0 ; 
printf("Enter your inputs :--> ");
while(i<1000){
    scanf("%c",&arr[i]);
    if(arr[i]=='#'){
        break;
    }
i++ ;
}

arr[i]= '\0' ;

char k ;   int flag = -1 ;
printf("Enter your character ");
// while (1){
    scanf(" %c",&k);    // ye  loop isliye kyunki jab ham user input daalkar enter press 
//     if(k!='\n'){       // karte hai toh woh bhi toh ak character hi hai n to woh k ke jagah 
//        break;          // store ho jata hai isliye ak loop lagana pada ki jab !=\n ho tb ki 
//     }                 // loop break kre.....
// }
for (int i = 0 ;arr[i]!='\0';i++){
    if(arr[i]==k){
            flag = i ;
    }
}
printf("%c character is present in %d index ",k,flag);

    return 0 ;
}