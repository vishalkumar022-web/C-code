#include<stdio.h>
#include<string.h>
int main(){

FILE *fp ;
fp = fopen("abc.txt","w");
int n ;
printf("Enter the number ");
scanf("%d",&n);
getchar();
char name[n][50];  // char name[50] ka only matlab hota hai ak student ka naam input lena 
char dis [n][50];//ab bhale hi wo  fgets se le ya scanf("%s",name) se par if we mention char name[n][50];
for(int i = 0 ; i<n ;i++){// then wo 50 size ka string to ban gya naam input ke liye but now ham ab 'n' students ka name input le sakte hai 
                            // Seen in below steps of Question... ye bhi same aaisa hi hai ki agar ham int i ;
                       // likhte hai to ak hi input le pate hai but wahi ham agr int x[n] kr de toh ak baar me hi n students ka user input le sakte hai..                     
    printf("Enter your name ");
    fgets(name[i],sizeof(name[i]),stdin);
    printf("Enter your district ");
    fgets(dis[i],sizeof(dis[i]),stdin);
    
}

for(int i = 0 ; i<n ;i++){
    
    // fputs(name[i],fp);
    // fputs(dis[i],fp);
    fprintf(fp,"Name :- %s",name[i]);
    fprintf(fp,"District :- %s",dis[i]);
}
fclose(fp);

    return 0 ;
}

