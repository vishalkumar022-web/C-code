#include<stdio.h>
int main(){

 int arr[6] = { 1, 5, 10, 20, 40, 80 }, brr[5] = { 6, 7, 20, 80, 100 },
  drr [8]= { 3, 4, 15, 20, 30, 70, 80, 120 };


int crr [19];    int x = 0 ;
for (int i = 0 ; i<6 ;i++){
        crr[x]=arr[i];
        x++ ;
}
for (int i =0 ; i<5 ;i++){
    crr[x]=brr[i];
    x++ ;
}
for (int i =0 ; i<8 ;i++){
    crr[x]=drr[i];
    x++ ;
}
for(int x =0 ; x<19 ; x++){
    int flag =0 ;
    for (int k =0 ;k<x; k++){
        if(crr[k]==crr[x]){
           flag = 1 ;
           break;
        }
    }
    if(flag==1){
        continue;
    }
    
    for (int y = x+1 ; y<19 ;y++){
        if(crr[x]==crr[y]){
            printf("%d  ",crr[x]);
              break;
            }
    }  
}


    return 0 ;
}