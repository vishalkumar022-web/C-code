#include<stdio.h>
#include<string.h>
int main(){// VVI Read kuch bhi karna ho bhale hi wo char. ho int. ho ya float 
    char str[50];  //value read krne ke liye hm Aaise hi karte hai jaise niche diya huaa hai 
    char ch ;
    FILE*fp ;
fp = fopen("student.txt","r");   

// while(!feof(fp)){
//     fgets(str,sizeof(str),fp);
//     // fscanf(fp,"%s",str);
//     printf("%s\n",str);
// }

// Read character by character :-->   
while((ch=fgetc(fp))!=EOF){
    printf("%c",ch);
}

fclose(fp);

return 0 ;

}