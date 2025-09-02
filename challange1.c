#include <stdio.h>
int main(){
    char name[30];
    char prenom[30];
    int age;
    char sexe[10];
    char email[50];
    printf("entrer votre nom:\n");
    scanf("%s", &name);
    printf("entrer votre prenom:\n");
    scanf("%s", &prenom);
    printf("entrer votre age:\n");
    scanf("%d", &age);
    printf("entrer votre sexe:\n");
    scanf("%s", &sexe);
    printf("entrer votre email:\n");
    scanf("%s", &email);
    printf("votre nom est : %c\n", name);
    printf("votre prenom est : %c\n", prenom);
    printf("votre age est : %d\n", age);
    printf("votre sexe est : %c\n", sexe);
    printf("votre email est : %c\n", email);
    return 0;

}