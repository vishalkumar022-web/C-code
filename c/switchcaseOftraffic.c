#include<stdio.h>
int main(){

char traffic_light ; // Snake case ;
printf("Enter the traffic light ");
scanf(" %c",&traffic_light);

switch(traffic_light){
    case 'r':
    case 'R' :
    printf("stop All vehicles");
    break;

    case 'y':
    case 'Y' :printf(" Ready to start all Vehicles ");
    break ;

    case 'g':
    case 'G' :
    printf("Goo all vehicles");


    default : printf("invalid light"); 
    

}







    return 0 ;
}