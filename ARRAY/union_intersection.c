#include<stdio.h>
int main(){

int arr[5]={1,2,3,4,5};     int brr[3]={2,3,4};
int flag = 0 ;
int c = 5 +3 ;
int crr[c];   int x = 0 ;

for (int i = 0 ;i<5 ;i++){
    crr[x]=arr[i];
    x++ ;
}
for (int j = 0 ; j<3 ; j++){
    crr[x]=brr[j];
    x++ ;
}
printf("Intersection of both array :-->  ");
for (int n = 0 ; n<c ; n++){
    for (int z = n+1 ; z<c ; z++){
        if (crr[n]==crr[z]){
            printf("%d  ",crr[n]);
        }
    }

}
printf("\n");
printf("Union of both Array :-->  ");
for (int k = 0 ; k<c ; k++){
    flag=0 ;
    for(int m = 0 ;m<k ; m++){
        if (crr[m]==crr[k]){
            flag = 1;
        }
    }   
    if (flag==1){
        continue;
    }
    printf("%d ",crr[k]);

}
    return 0 ;
}