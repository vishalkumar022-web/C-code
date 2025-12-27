// #include<stdio.h>
// #include<string.h>

// typedef struct student_marks{
//     char name[20];
//     int roll;
//     int marks[5];
// }detail;


// int main(){
// detail a ;

// printf("Enter your name ");
// fgets(a.name,sizeof(a.name),stdin);
// printf("Enter your roll ");
// scanf("%d",&a.roll);
// for(int i =0 ;i<5;i++){
//     scanf("%d",&a.marks[i]);
// }
// int sum =0 ;  int max = a.marks[0];
// for (int i = 0 ; i<5 ;i++){
//     sum = sum + a.marks[i];
//         if(max<a.marks[i]){
//             max = a.marks[i] ;
//         }
//    }
// float average = sum /5 ;

// printf("Heighest marks = %d  \n sum = %d  \n  average = %f",max,sum,average);
//     return 0 ;
// }

// Question no - 8 :-->

// #include<stdio.h>
// #include<string.h>

// typedef struct marks{
//     char name[20];
//     int roll ;
//     float marks ;
// }marks ;

// void inputs(marks arr[],int n ){
//     for(int i =0 ;i<n ;i++){
//         getchar();
//         printf("Enter your name ");
//         fgets(arr[i].name,sizeof(arr[i].name),stdin);
//         printf("Enter your roll ");
//         scanf("%d",&arr[i].roll);
//         printf("Enter your marks");
//         scanf("%f",&arr[i].marks);
//     }
// }
// void sort(marks arr[],int n ){
//     for(int i =0 ;i< n;i++){
//         for (int j =i+1 ;j<n ;j++){
//         if(arr[i].marks<arr[j].marks){
//             marks temp = arr[i];
//             arr[i]= arr[j] ;
//             arr[j] = temp ;
//         }
//       }
//     }
// }
// void output(marks brr[],int n){
// for (int i = 0 ;i<n ;i++){
//     printf("name  = %s  \n marks = %f \n roll = %d ",brr[i].name,brr[i].marks,brr[i].roll);
// }}
// int main(){

// int n ;
// printf("Enter the number of student ");
// scanf("%d",&n);

// marks x[n];

// inputs(x,n);
// sort(x,n);
// output(x,n);

//     return 0 ;
// }

// Question no 9:--> 


// #include<stdio.h>
// #include<string.h>

// typedef struct employee{
//     char name[20];
//     int id ;
//     float salary ;
// }employee ;

// void inputs(employee arr[],int n ){
//     for(int i =0 ;i<n ;i++){
//         getchar();
//         printf("Enter your name ");
//         fgets(arr[i].name,sizeof(arr[i].name),stdin);
//         printf("Enter your id ");
//         scanf("%d",&arr[i].id);
//         printf("Enter your salary");
//         scanf("%f",&arr[i].salary);
//     }
// }

// void output(employee brr[],int n){
// for (int i = 0 ;i<n ;i++){
//     if(brr[i].salary>55000){
//     printf("name  = %s  \n salary = %f \n id = %d ",brr[i].name,brr[i].salary,brr[i].id);}
// }}
// int main(){

// int n ;
// printf("Enter the number of student ");
// scanf("%d",&n);

// employee x[n];

// inputs(x,n);

// output(x,n);

//     return 0 ;
// }

// Question no 10 :-->


// #include<stdio.h>
// #include<string.h>

// typedef struct determine_Age{
//     char name[20];
//     int age ;
//     char adress[20] ;
// }age ;

// void inputs(age arr[],int n ){
//     for(int i =0 ;i<n ;i++){
//         getchar();
//         printf("Enter your name ");
//         fgets(arr[i].name,sizeof(arr[i].name),stdin);
        
//          printf("Enter your adress");
//         fgets(arr[i].adress,sizeof(arr[i].adress),stdin);
        
//         printf("Enter your age ");
//         scanf("%d",&arr[i].age);  
//     }
// }

// void output(age brr[],int n){
//     int max = brr[0].age ;  int min = brr[0].age ;
// for (int i = 0 ;i<n ;i++){
//     if(max<brr[i].age){
//     max = brr[i].age;
// }
// else if(min>brr[i].age){
//     min = brr[i].age ;
// }
// }
// printf("Youngest person = %d   \n oldest person = %d ",min, max);
// }
// int main(){

// int n ;
// printf("Enter the number of student ");
// scanf("%d",&n);

// age x[n];

// inputs(x,n);

// output(x,n);

//     return 0 ;
// }

// Question NO--> 14 ;

// #include<stdio.h>
// #include<string.h>

// typedef struct date{
//     int day;
//     int month ;
//     int year ;
// }date;

// void input(date* x ){
//     printf("Enter your day : ");
//     scanf("%d",&x->day);
//     printf("Enter your month : ");
//     scanf("%d",&x->month);
//     printf("Enter your year : ");
//     scanf("%d",&x->year);
// }

// int main(){

// date d ;
// input(&d);

// int max= 31;

// if(d.month==2){
//     max = 28 ;
// }
// else if (d.month==4||d.month==6||d.month==9||d.month==11){
//     max = 30 ;
// }
//  d.day++ ;
// if(d.day>max){
//     d.day= 1 ;
//     d.month++ ;
// }
// if(d.month>12){
//     d.month = 1 ;
//     d.year++ ;
// }

// printf("%d - %d - %d",d.day,d.month,d.year);

//     return 0 ;
// }

// Question No:--> 11 ;

// #include<stdio.h>
// #include<string.h>
// typedef struct studentDetail{
//     char name[25];
//     int roll_no;
//     float marks ;
// }detail;

// void input(detail* y){
// printf("Enter your name ");
// fgets(y->name,sizeof(y->name),stdin);
// printf("Enter your roll ");
// scanf("%d",&y->roll_no);
// printf("Enter your marks ");
// scanf("%f",&y->marks);
// }
// int main(){
//     detail x ;
//     input(&x);

// printf("\nname = %s Roll number = %d \n marks = %f",x.name,x.roll_no,x.marks);



//     return 0 ;
// }




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

// employee x ;
// input(&x);
// employee result = output(x);

// printf("updated salary = %f",result.salary);



//     return 0 ;
// }
