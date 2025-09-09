#include <stdio.h>
#include <string.h>

struct structureenargument {
    float langueur;
    float largeur;

};
void calculeraire(struct structureenargument *rectangl){
    float aire = rectangl->langueur * rectangl->largeur;
    printf("Aire du rectangle: %.2f\n", aire);
}
void affichezaire(float aire){
    printf("Aire du rectangle: %.2f\n", aire);
}
int main (){
    struct structureenargument rectangl1;
    rectangl1.langueur = 5.5;
    rectangl1.largeur = 3.2;
    calculeraire(&rectangl1);
    return 0;
}