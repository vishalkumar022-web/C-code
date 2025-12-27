
// most vvi Question of DEletion of a character :--->   

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

char k ;  
printf("Enter your character ");
// while (1){
    scanf(" %c",&k);    // ye  loop isliye kyunki jab ham user input daalkar enter press 
//    if(k!='\n'){       // karte hai toh woh bhi toh ak character hi hai n to woh k ke jagah 
//        break;          // store ho jata hai isliye ak loop lagana pada ki jab !=\n ho tb ki 
//     }                  // loop break kre.....
// }
int j = 0 ;
for (int i = 0 ;arr[i]!='\0';i++){
    if(arr[i]!=k){
       arr[j]= arr[i];     
       j++ ;
    }
}
arr[j]='\0' ;

for (int j = 0 ;arr[j]!='\0';j++){
       printf("%c",arr[j]);    
    }

    return 0 ;
}


//Deletion of string AK aur logic se solve ho sakta hai ki user input ka size nikal lo and then input lelo char k 
// and utne hi size tk chalake arr[i] = arr[i+1] karenge loop me hi then size-- 
// karke print kar denge.. 