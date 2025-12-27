#include<stdio.h>
int main(){

char c ;
printf("Enter your character ");
scanf("%c",&c);

// if (c>='A' && c<='Z'){
//     if (c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U'){
//         printf("A given input is uppercase and vowel ");
//     } else {printf("A given input is uppercase and consonant");}
// }

//   else 
//   {if (c>='a' && c<='z'){
//     if (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'){
//         printf("A given input is lowercase and vowel ");
//     } else {printf("A given input is lowercase and consonant");}

// }
// else {
//     printf("invalid input ");
// }
//   }

if ((c>='A'&& c<='Z')&& (c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')){
    printf("A given input is uppercase and vowel");
}
else if ((c>='a'&& c<='z')&&(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')){
    printf("A given input is lowercase and vowel");
}
else if ((c>='A'&& c<='Z')&& (c!='A'|| c!='E'|| c!='I'|| c!='O'|| c!='U')){
    printf("A given input is uppercase and consonant");
}
else if((c>='a'&& c<='z')&& (c!='a'|| c!='e'|| c!='i'|| c!='o'|| c!='u')){
    printf("A given input is lowercase and consonant");
}
else {printf("invalid input");
}            

    return 0 ;
}

