 #include<stdio.h>
int main(){
int flag = -1 ;
int arr[5]={1,2,3,2,3};
for (int i =0 ; i<5 ; i++){
    for(int j = i+1; j<5 ;j++){
        if (arr[i]==arr[j]){
                flag = j ;
        }
    }
}
for(int i = flag ; i<5;i++){
    arr[i]=arr[i+1];
}

for (int i=0 ;i<3 ; i++){
    printf("%d ",arr[i]);
}

    return 0 ;
}

