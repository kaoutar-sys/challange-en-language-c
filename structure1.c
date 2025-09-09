#include <stdio.h>
#include <string.h>

    struct mastructure{
        int age;
        char nom[30];
        char prenom[30];
    };
    int main() {  
    struct mastructure s1;
    s1.age=20;
    strcpy(s1.nom, "kaoutar");
    strcpy(s1.prenom, "aloui");

    printf("age :%d\n",s1.age);
    printf("nom :%s\n",s1.nom);
    printf("prenom :%s\n",s1.prenom);

    return 0;

} 