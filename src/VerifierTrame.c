
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "../header/VerifierTrame.h"
//$GPGGA,180502.00,5041.7342,N,00311.786,E,1,07,1.19,122,M,,,,0000*0E"

// Fonction qui verifie que trame respecte le format demandé
bool verifierTrame(char tram[]){

    // Initialisation des chaines de charatère
    char delimiter[] = ",";
    char *champs;
    char veriftram[] = "$GPGGA";
    int compare;
    char copy[100];
    
    // On copie la tram dans sa copie
    strcpy(copy,tram);

    if(strlen(copy)< 15 ){//Vérifie que la tram > 15 caracteres
        return false;
    }

    if(strstr(copy,delimiter) != NULL){ //SI il ya une virgule on extrait les caracteres jusqu'a la virgule
        champs = strtok(copy,delimiter);
        compare = strcmp(veriftram,champs);//On compare les 2 champs
        if(compare != 0){
            return false;
        }else{
            return true;
        }
    }
}
