// #include<stdio.h>
// #include<string.h>
// typedef union student{
//     char name[20];
//     int roll;
//     char adress[50];
// }detail;
// int main(){

// detail x ;
// printf("Enter your name ");
// fgets(x.name,sizeof(x.name),stdin);
// printf("%s",x.name);

// printf("Enter your roll number ");
// scanf("%d",&x.roll);
// printf("%d",x.roll);
// getchar();
// printf("Enter your Adress ");
// fgets(x.adress,sizeof(x.adress),stdin);
// printf("%s",x.adress);

//     return 0 ;
// }

#include<stdio.h>
#include<string.h>
typedef union conversion{
    float c;
    float f ;
}conversion;
int main(){

conversion x ;
printf("Enter your temperature in celcius ");
scanf("%f",&x.c);
printf("your faranhite value is :--> %f\n",(x.c*9/5)+32);

printf("Enter your temperature in faranhite ");
scanf("%f",&x.f);
printf("your celcius value is :--> %f",(x.f-32)*5/9);

    return 0 ;
}