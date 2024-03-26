
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../header/ExtraireChamps.h"


// Fonction afin d'extraire un champ d'une trame GPS
char* ExtraireChamps(char tram[], int choix){
    // On initialise les chaines de charactère
    char copy_tram[100];
    char delimitation[] = ",";
    char *token;
    
    // On copy la tram dans sa copie
    strcpy(copy_tram,tram);
    
    // On récupé le premier champ
    token = strtok(copy_tram,delimitation); 
    
    // On parcour les champs jusqu'au bon
    for(int i = 1; i <= choix ; i++){                  
        token = strtok(NULL,delimitation);
    }
    
    // Retourne le champs
    return token;
}

// On recupére tout les champs GPS d'une trame
void getChamps(char tram[], struct champs *champs){ 
    // On recupere l'heure
    char *heure = ExtraireChamps(tram , 1);
    strcpy(champs->heure,heure);
    
    // On récupére la latitude 
    char *latitude = ExtraireChamps(tram , 2);
    strcpy(champs->latitude,latitude);
    
    // On recupére l'orientation de la latitude
    char *orientationLatitude = ExtraireChamps(tram , 3);
    strcpy(champs->orientationLatitude,orientationLatitude);
    
    // On récupére la longitude 
    char *longitude = ExtraireChamps(tram , 4);
    strcpy(champs->longitude,longitude);
    
    // On récupére l'orientation de la longitude
    char *orientationLongitude = ExtraireChamps(tram , 5);
    strcpy(champs->orientationLongitude,orientationLongitude);
}
