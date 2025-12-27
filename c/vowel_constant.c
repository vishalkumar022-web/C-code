#include<stdio.h>
int main(){

char c ;
printf("enter your character:- ");
scanf(" %c",&c);


if ((c>='a'&& c<='z')|| (c>='A' && c<='Z')){
    switch(c){
        case 'a':
        case 'A': 
        case 'e':
        case 'E':
        case 'i':          // switch part to find vowel or consonant ;
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("vowel");
        break;

        default:
        printf("constant");
    }
}
else
{printf("invalid input");}
//      if (c=='a' || c=='A'|| c=='e'||c=='E' || c=='i'|| c=='I' || c=='o'|| c=='O' || c=='u'|| c=='U'){
//         printf("vowel");
//      }
//      else{printf("constant");}

//      }
    
// else {printf("invalid input ");}

    return 0;
}