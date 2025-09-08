# include <stdio.h>
# include <string.h>


int main(){
    char str1[100];
    char str2[100];
    printf("entrer la premere chaine de caracteres :");
    fgets(str1,sizeof(str1),stdin);
    printf("entrer la deuxieme chaine de caracteres :");
    fgets(str2,sizeof(str2),stdin);
    if (strcmp(str1,str2)==0){
        printf("les deux chaines sont identiques");
    } else {
        printf("les deux chaines sont differentes");
    }
    return 0;

}