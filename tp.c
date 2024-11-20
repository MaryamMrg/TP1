#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct  {
    char nom[10];
    char prenom[10];
    int age;
    float note;
   struct {
    char rue[20];
    char ville[20];
    int code_postal;

   }adress;
}apprenant;

 //creer apprenant
 void creerapprenant(apprenant * app){
    printf("entrer votre nom : ");
    scanf("%s",app->nom);
    printf("entrer votre prenom : ");
    scanf("%s", app->prenom);
    printf("enter votre age : ");
    scanf("%d",&app->age);
    printf("entrer note : ");
    scanf("%f",&app->note);
    printf("entrer rue : ");
    scanf("%s",app->adress.rue);
    printf("entrer ville : ");
    scanf("%s",app->adress.ville);
    printf("entrer code_postal :");
    scanf("%d",&app->adress.code_postal);

 }
 //afficher apprenant
 void afficher_apprenant(apprenant app){
    printf("nom: %s\n",app.nom);
    printf("prenom: %s\n",app.prenom);
    printf("age: %d\n",app.age);
    printf("note: %2.f\n",app.note);
    printf("adress: %s,%s,(%d)\n",app.adress.rue,app.adress.ville,app.adress.code_postal);
 }
//modifier apprenant
void modifier_apprenant(apprenant *app){
    printf("modifier apprenant :\n");
    printf("nouveau nom :\n");
    scanf("%s",app->nom);
    printf("nouveau prenom :\n");
    scanf("%s",app->prenom);
    printf("modifier age :\n");
    scanf("%d",&app->age);
    printf("modifier note :\n");
    scanf("%f",&app->note);
    printf("modifier rue:\n");
    scanf("%s",app->adress.rue);
    printf("modifier ville :\n");
    scanf("%s",app->adress.ville);
    printf("modifier code_postal:\n");
    scanf("%d",&app->adress.code_postal);
}
//supprimer apprenant
void supprimer_apprenant(apprenant *apprenants, int taille, int a) {
    if (a >= 0 && a < taille) {
        for (int i= a; i < taille - 1; i++) {
            apprenants[i] = apprenants[i + 1];
        }
        printf("Apprenant supprimé.\n");
    } else {
        printf("a invalide.\n");
    }
}
int main(){
int taille = 0, choix, a;
    apprenant *apprenants = NULL;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Créer un apprenant\n");
        printf("2. Afficher les apprenants\n");
        printf("3. Modifier un apprenant\n");
        printf("4. Supprimer un apprenant\n");
        printf("5. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                taille++;
                apprenants = (apprenant*)realloc(apprenants, taille * sizeof(apprenant));
                creerapprenant(&apprenants[taille - 1]);
                break;
            case 2:
                for (int i = 0; i < taille; i++) {
                    afficher_apprenant(apprenants[i]);
                }
                break;
            case 3:
                printf("Entrez a de l'apprenant à modifier : ");
                scanf("%d", &a);
                modifier_apprenant(&apprenants[a - 1]);
                break;
            case 4:
                printf("Entrez a de l'apprenant à supprimer : ");
                scanf("%d", &a);
                supprimer_apprenant(apprenants, taille, a - 1);
                taille--;
                break;
            case 5:
                free(apprenants);
                return 0;
            default:
                printf("Choix invalide.\n");
        }
    }
}
