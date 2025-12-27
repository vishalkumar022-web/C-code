#include<stdio.h>
int main(){

int a , b , c ;
printf("enter the value of a , b ,c ");
scanf("%d%d%d",&a,&b,&c);

if (a==b){   // a==b hai and a==c hai toh equillateral jsb dono if cond. sahi hai tab
    if(a==c){
        printf("A given triangle is equillateral ");
    }
    else{printf("A given triangle is issosceles");// jab a==b hai par a not =c hai 
        // tab else me aakar issosc. print hoga kyu ki do side a==b equal hai hi
    }
}
else{ // ye else a==b ka hai jab a==b na ho to niche jayega hi nahi so, if me aakar
    // b==c check karenge. jab do side b==c equal hoga toh bhi toh issosceles hoga .

    if(b==c){
        printf("A given triangle is issosceles");
    }
    else{
        printf("A given triangle is scelences"); // yaha else me jab b not= to c hoga and a toh pahle
        //ho hat chuka hai so, jab a!=b and b!=c hoga toh printf me SCELENCES print to huaa hi hai n.

    }
}


    return 0 ;
}