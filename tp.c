#include<stdio.h>
#include<string.h>
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
}Apprenant;

 //creer apprenant
 void creer\apprenant(){
    printf("entrer votre nom : ");
    scanf("%s",&nom);
    printf("entrer votre prenom : ");
    scanf("%s", &prenom);
    printf("enter votre age : ");
    scanf("%d",&age);
    printf("entrer note : ");
    scanf("%f",&note);
    printf("entrer rue : ");
    scanf("%s",&adress.rue);
    printf("entrer ville : ");
    scanf("%s",&adress.ville);
    printf("entrer code_postal :");
    scanf("%s",&adress.code_postal);

 }
 //afficher apprenant
 void afficher_apprenant(){
    printf("nom: %s\n",&nom);
    printf("prenom: %s\n",&prenom);
    printf("age: %d\n",&age);
    printf("note: %2.f\n",&note);
    printf("adress: %s,%s,(%d)\n",&adress.rue,&adress.ville,&adress.code_postal)
 }
//modifier apprenant
void modifier_apprenant(){
    printf("modifier apprenant :\n");
    printf("nouveau nom :\n");
    scanf("%s",&nom);
    printf("nouveau prenom :\n");
    scanf("%s",&prenom);
    printf("modifier age :\n");
    scanf("%d",&age);
    printf("modifier note :\n");
    scanf("%f",&note);
    printf("modifier rue:\n");
    scanf("%s",&adress.rue);
    printf("modifier ville :\n");
    scanf("%s",&adress.ville);
    printf("modifier code_postal:\n");
    scanf("%s",&adress.code_postal);
}
//supprimer apprenant
void supprimer_apprenant(){
   free(apprenant);
    

}
int main(){

   int apprenant **apprenant = null;
   int napprenant =0;
   while(1){
      printf("1. entrer le nom :\n");
      printf("2. entrer prenom :\n");
      printf("3. entrer age :\n");
      printf("4. entrer note :\n");
      printf("5. entrer adress :\n");
      int choix;
      scanf("%d",&choix);
   }
   switch(choix){
case 1:
                // Agrandir le tableau si nécessaire
                apprenants = (Apprenant**)realloc(apprenants, (nbApprenants+1) * sizeof(Apprenant*));
                apprenants[nbApprenants++] = creerApprenant();
                break;
 case 2:
                // Afficher tous les apprenants
                for (int i = 0; i < nbApprenants; i++) {
                    afficherApprenant(apprenants[i]);
                }
                break;
 case 3:
            for{
               if (nbApprenants == 0) {
        printf("no apprenant à modifier.\n");
    } else {
        int i;
        printf("Entrez i de l'apprenant à modifier (1-%d): ", nbApprenants);
        scanf("%d", &i);
            }
            }
             if (i< 1 || i > nbApprenants) {
            printf("i invalide.\n");
        } else {
            Apprenant *apprenant = apprenants[i - 1];
            printf("Entrez le nouveau nom : ");
            scanf("%s", apprenant->nom);
            printf("entrer le nouveau prenom :\n");
            scanf("%s",apprenant->prenom);
            printf("entrer nouveau age :\n ");
            scanf("%d",apprenant->age);
            printf("entrer nouveau note :\n");
            scanf("%f",apprenant->note);
            printf("modifier rue:\n");
            scanf("%s",apprenant->adress.rue);
            printf("modifier ville :\n");
            scanf("%s",apprenant->adress.ville);
             printf("modifier code_postal:\n");
            scanf("%s",apprenant->adress.code_postal);
            printf("Apprenant modifié avec succès.\n");
        }break;

case 4 :
      if (napprenants == 0) {
        printf("no apprenant à supprimer.\n");
    } else {
        int i;
        printf("Entrez i de l'apprenant à supprimer (1-%d): ", nApprenants);
        scanf("%d", &i);

        if (i < 1 || i> nApprenants) {
            printf("i invalide.\n");
        } else {
            supprimerApprenant(apprenants[i - 1]);
            // Décaler les apprenants suivants
            for (int a= i - 1; x < nApprenants - 1; a++) {
                apprenants[a] = apprenants[a+ 1];
            }
            nApprenants--;
            printf("Apprenant supprimé avec succès.\n");
        }
    }
    break;
    
case 5:
                // Libérer la mémoire et quitter
                for (int i = 0; i < nApprenants; i++) {
                    supprimerApprenant(apprenants[i]);
                }
                free(apprenants);
                return 0;
   
}

}


