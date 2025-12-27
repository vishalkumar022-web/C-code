#include<stdio.h>
int main(){

int  vehiclesTypes , fine  ;
printf("Enter the vehicle No. \n 1. car \n 2. motorcycle \n 3. Bus \4. truck:- ");
scanf("%d",&vehiclesTypes);

int Actual_speed ;
printf("Enter the Actual vehicles speed :- ");
scanf("%d",&Actual_speed);

int speedLimits ;
printf("enter the speed limit in that area:- ");
scanf("%d",&speedLimits);

int driving_license ;
printf("enter the last year validation of your lisence:- ");
scanf("%d",&driving_license);

int alcohol_check ;
printf("enter the reading of alcohol checking machine:- ");
scanf("%d",&alcohol_check);

fine = 100*(Actual_speed-speedLimits) ;

if((Actual_speed>speedLimits)&&(alcohol_check==1)){
    if(driving_license<=2020){

        printf("fine= %d",fine+=2000);
    }
    else {printf("fine= %d",fine);}

    }
    else {
        if(driving_license<=2020){
            printf("fine = %d",2000);
        } 
        else{
            printf("you have no any fine ");
        }
    }

    return 0 ;
}