//FOR ---->  A
//          ABA
//         ABCBA
//        ABCDCBA


#include<stdio.h>
int main(){

int n ; 
printf("Enter your number ");
scanf("%d",&n);
    int nsp =  n - 1 ;  int s = 1 ;
for (int i =1 ; i<=n ; i++){
        int a = i-1 ;       int b = i+ 63 ;    int m = 65 ;
    for (int j = 1 ; j<=nsp ; j++){
        printf(" "); 
    }
    nsp -- ;

    for (int k = 1 ; k<=s ; k++){    // yaha par k<=s ke jagah pr k<=i bhi ho sakta hai to form a
                                     // triangle shape but ham s as a extra variable maankar apna 
                                        //logic easy karne ke liye kar sakte hai..
        printf("%c",m);
            m++ ;
    }
   
    for (int l = 1 ; l<=a ; l++){
              
            printf("%c",b);
         b-- ;
             
    }
       printf("\n");
        s++ ;
    }


    return 0 ;
}