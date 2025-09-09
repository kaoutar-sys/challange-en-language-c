#include <stdio.h>
#include <string.h>

struct representation {
    char nom [50];
    char prenom[50];
    float note[60];
};
      void affichageredepresentation( struct representation *etudient){
        printf ("nom:%s\n",etudient->nom);
        printf ("prenom:%s\n",etudient->prenom);
        for(int i=0;i<3;i++){
            printf("note[%d]:%.2f\n",i,etudient->note[i]);
        }
    }


    int main (){
        struct representation etudient1;
        strcpy (etudient1.nom,"sanaa");
        strcpy (etudient1.prenom,"lmrdi");
        etudient1.note[0]=15.5;
        etudient1.note[1]=12.5;
        etudient1.note[2]=13.5;
        affichageredepresentation(&etudient1);
        return 0;
    }
 
