
// #include<stdio.h>
// #include<string.h>

// typedef struct employee{
//     int id ;
//     float salary ;
// }employee ; 

// void input(employee* p){
//     printf("Enter your id ");
//     scanf("%d",&p->id);
//     printf("ENter your salary ");
//     scanf("%f",&p->salary);
// }
                           
// employee output(employee q){
//     q.salary= q.salary+(q.salary*10/100) ;
//     return q ;
// }
// int main(){


//             // NOTE - 1:= simple saaf matlab hai hm normal return type fn me kya karte the ki jo number  
// employee x ;//ko hme Fn se Pass krna rhta tha wahi number ko argument se pass karke usi type ka parameter 
// input(&x);  // banate the agr int pass kiye to int type ka float- float ,char to char And return bhi jis type 
// employee result = output(x);  // ka data karte the usi type ka dataType banate the main Fn me Accept karne ke liye

// printf("updated salary = %f\n",result.salary);
// printf("Normal id  = %d",x.id);  // YAHA Hmne result.id isliye nahi likha kynki result store return q value jo ki only salary ko change karke update kr rha hai n ki id ko ..


// // NOTE - 2:= Pr Fn me kya hai ki change hame kisi bhi var. me krna Ho Denote toh sara var.-> x.variable_name se hi hoga n chahe wo id ho toh x.id ya salary ho to x.salary
// // agar hame change sirf salary me hi krna hai n like same question to bhi argument se pass pura x hi karenge And ye x toh pura stucture hai n toh upr fn. ke argument bhi ak 
// // ak stucture hi decleare krenge and jo ki pura x ko except karega and then hame jo bhi changes krni hai wo ham under kr sakte hai then return karenge pura function hi kyunki 
// // hamne stucture hi toh decleare bhi kiya tha n isliye so, pura stucture ko except karne ke liye bhi ak structure form karenge jo ki return q struct ko except karega then hm 
// // PRINT karenge structName . jo bhi print karna hai like salary ,id etc .
//     return 0 ;
// }




// // MOST VVI QUESTION :---> 


// // Question no - 12 ;

// #include<stdio.h>
// #include<string.h>

// typedef struct time{
//     int hour ;
//     int minute ;
//     int second ;
// }time;

// void input(time*p){
//     printf("Enter your hours");
//     scanf("%d",&p->hour);
//     printf("Enter your minute");
//     scanf("%d",&p->minute);
//     printf("Enter your second");
//     scanf("%d",&p->second);

// }

// time compare(time time1,time time2){
//   if(time1.hour>time2.hour){
//     return time1;
//   }
//   else if(time1.hour<time2.hour){
//         return time2;
//     }
//     else if(time1.minute<time2.minute){
//         return time2;
//     }
//     else if(time1.minute>time2.minute){
//         return time1;
//     }
//     else if(time1.second<time2.second){
//         return time2;
//     }
//     else if(time1.second>time2.second){
//         return time1;
//     }
//   }
// //   void display(time t){
// //     printf("%d hour : %d minute : %d second",t.hour,t.minute,t.second);
// //   }

// int main(){

// time t1,t2 ;
// input(&t1);
// input(&t2);

// time result = compare(t1,t2);  

// printf("Max time :--> \n");
// // display(result);

// printf("%d hour : %d minutes : %d sec. ",result.hour,result.minute,result.second);
//     return 0 ;
// }


//VVI QUESTION :-->

#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    int rollNo;
    float marks;
} Student;


Student input( Student s) {
   

    printf("Enter your name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    return s;
}

int main() {

    Student x ;
    Student result = input(x);
    printf("\nName: %s\n", result.name);
    printf("Roll No: %d\n", result.rollNo);
    printf("Marks: %f\n", result.marks);

    return 0;
}
