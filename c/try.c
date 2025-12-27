#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d", a);
    scanf("%d", b);
    scanf("%d", c);
    printf("%d, %c, %d run", &a, &b, &c);
      
    return 1;
}

// scanf me & na use karne ke karan es code me aapse input nahi mang raha hai
// and direct output print kar raha hai koi bhi garbage value mere samajh se . 
// Aur jaha tk baat hai return 0; kyu nahi lagaye toh waha return 10000,1588; 
// kooi bhi integer value rakh sakte hai jaise aap 1 liye hai ushse koi fark
// nahi padega..




