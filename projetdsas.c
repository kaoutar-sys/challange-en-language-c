#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char nom[30];
    char prenom[30];
    int numero;
    char poste[20];
    int age;
    int buts;
    char statut[15];
} Joueur;

Joueur equipe[MAX];
int nbJoueurs = 0;
int idCounter = 1;

// ajouterJoueur
void ajouterJoueur() {
    Joueur j;
    j.id = idCounter++;
    printf("Nom: ");
    scanf("%s", j.nom);
    printf("Prenom: ");
    scanf("%s", j.prenom);
    printf("Numero maillot: ");
    scanf("%d", &j.numero);
    printf("Poste: ");
    scanf("%s", j.poste);
    printf("Age: ");
    scanf("%d", &j.age);
    printf("Nombre de buts: ");
    scanf("%d", &j.buts);
    strcpy(j.statut, "titulaire");
    equipe[nbJoueurs++] = j;
    printf("Joueur ajoute avec succes.\n");
}

// afficherJoueurs
void afficherJoueurs() {
    if (nbJoueurs == 0) {
        printf("Aucun joueur.\n");
        return;
    }
    for (int i = 0; i < nbJoueurs; i++) {
        Joueur j = equipe[i];
        printf("ID:%d | %s %s | #%d | %s | Age:%d | Buts:%d | Statut:%s\n",
               j.id, j.nom, j.prenom, j.numero, j.poste, j.age, j.buts, j.statut);
    }
}

// modifierJoueur
void modifierJoueur() {
    int id;
    printf("Entrer l'ID du joueur: ");
    scanf("%d", &id);
    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].id == id) {
            int choix;
            printf("1. Modifier poste\n2. Modifier age\n3. Modifier buts\nChoix: ");
            scanf("%d", &choix);
            if (choix == 1) {
                printf("Nouveau poste: ");
                scanf("%s", equipe[i].poste);
            } else if (choix == 2) {
                printf("Nouvel age: ");
                scanf("%d", &equipe[i].age);
            } else if (choix == 3) {
                printf("Nouveau nombre de buts: ");
                scanf("%d", &equipe[i].buts);
            }
            printf("Modification terminee.\n");
            return;
        }
    }
}
void rechercherJoueur() {
    int choix;
    printf("1. Par ID\n2. Par Nom\nChoix: ");
    scanf("%d", &choix);
    if (choix == 1) {
        int id;
        printf("Entrer ID: ");
        scanf("%d", &id);
        for (int i = 0; i < nbJoueurs; i++)
            if (equipe[i].id == id) {
                printf("%s %s trouve.\n", equipe[i].nom, equipe[i].prenom);
                return;
            }
        }                                                                                                                                                                                                                                                                                                                                                               
    }
    void supprimerJoueur() {
    int id;
    printf("Entrer l'ID du joueur a supprimer: ");
    scanf("%d", &id);
    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].id == id) {
            for (int j = i; j < nbJoueurs - 1; j++) {
                equipe[j] = equipe[j + 1];
            }
            nbJoueurs--;
            printf("Joueur supprime.\n");
            return;
        }
    }
}

void statistiques() {
    if (nbJoueurs == 0) {
        printf("Aucun joueur.\n");
        return;
    }
    printf("Nombre total: %d\n", nbJoueurs);
    int somme = 0, maxButs = 0;
    int minAge = equipe[0].age, maxAge = equipe[0].age;
    Joueur meilleur = equipe[0], jeune = equipe[0], vieux = equipe[0];
    for (int i = 0; i < nbJoueurs; i++) {
        somme += equipe[i].age;
        if (equipe[i].buts > maxButs) { maxButs = equipe[i].buts; meilleur = equipe[i]; }
        if (equipe[i].age < minAge) { minAge = equipe[i].age; jeune = equipe[i]; }
        if (equipe[i].age > maxAge) { maxAge = equipe[i].age; vieux = equipe[i]; }
    }
    printf("Age moyen: %.1f\n", (float)somme/nbJoueurs);
    printf("Meilleur buteur: %s %s (%d buts)\n", meilleur.nom, meilleur.prenom, meilleur.buts);
    printf("Le plus jeune: %s (%d ans)\n", jeune.nom, jeune.age);
    printf("Le plus vieux: %s (%d ans)\n", vieux.nom, vieux.age);
}

    
// Menu principal
int main() {
    int choix;
    while (1) {
        printf("\n--- Gestion Equipe de Football ---\n");
        printf("1. Ajouter joueur\n2. Afficher joueurs\n3. Modifier joueur\n4. Supprimer joueur\n5. Rechercher joueur\n6. Statistiques\n0. Quitter\nVotre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajouterJoueur(); 
            case 2: afficherJoueurs(); 
            case 3: modifierJoueur(); 
            case 4: supprimerJoueur();
            case 5: rechercherJoueur();
            case 6: statistiques(); 
            case 0: printf("Au revoir.\n"); break;
            default: printf("Choix invalide.\n");
        }
    }

    return 0;
}
