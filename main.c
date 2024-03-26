


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "header/VerifierTrame.h"
#include "header/VerifierTrame.h"
#include "header/ExtraireChamps.h"
#include "header/FormaterHeure.h"
#include "header/Convertisseur.h"
#include "header/Affichage.h"
#define MAX_LENGTH 100

//gcc src/VerifierTrame.c src/ExtraireChamps.c src/FormaterHeure.c src/Affichage.c src/Convertisseur.c  main.c -o main && ./main
//               $GPGGA,180502.00,5041.7342,N,00311.786,E,1,07,1.19,122,M,,,,0000*0E


// Fonction principale du programme
int main(){

    // Initialise des chaines de charactère et structure
    char trame[MAX_LENGTH];
    struct champs mes_champs;
    
    // Entrer utilisateur de trame
    printf("Entrez une trame : ");
    fgets(trame, MAX_LENGTH, stdin);
    
    // Erreur si Trame incorrecte
    if(!verifierTrame(trame)){
        printf("Trame incorrect !\n");
        return 0;
    }  
    
    // Affichage dans la console et fichier
    AffichageFic(trame);

}   
