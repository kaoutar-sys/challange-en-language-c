#include <stdio.h>

int main(){
    int i =0;
    char str[20];
    printf("entrer une chaine :");
    fgets(str,sizeof(str),stdin);
    while (str[i] != '\0' ){
    printf("la langueur est :%d",i);
    i++;
    }
    return 0;

}