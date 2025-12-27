 #include<stdio.h>
int main(){

int i ;
printf("enter your 1st value :- ");
scanf("%d",&i);
int n ;
printf("enter your 2nd number :- ");
scanf("%d",&n);
int a = 0 ;
int b = 1 ;
int sum ;

while(a<=n){
    if(a>=i){
      printf("%d\n",a); 
    }
    sum = a + b ;
       a = b ;
        b = sum ;
}

    return 0 ;
}