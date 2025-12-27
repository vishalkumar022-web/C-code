int main(){

int a, b ;    float area, perimeter ;

printf("enter the value of a :-");
scanf("%d",&a);
printf("enter the value of b :-");
scanf("%d",&b);

area = a*b ;

perimeter = 2*(a + b);

if (area>perimeter){
    printf("area is grater than perimeter");
}
else{printf("perimeter is grater than area ");
}
    return 0;
}