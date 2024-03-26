
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../header/Convertisseur.h"

// Convertit les degrés de la latitude en chaine de charactère
char* ConvertisseurLatitudeDegré(char tram[]){

    // On initialise les chaines de charactère
    char *latitude = malloc(strlen(tram) + 1);
    char *degré = malloc(2);
    
    // On copie la tram d'entrée dans latitude
    strcpy(latitude,tram);
    // On copie la valeur des degrés de la latitude
   strncpy(degré,latitude,2);      //Extrait degré
 
    //On renvoit les degrés
    return degré;
}

// Convertit les minutes de la latitude en chaine de charactère
char* ConvertisseurLatitudeMinute(char tram[]){
    // On initialise les chaines de charactère
    char *latitude = malloc(strlen(tram) + 1);
    char *minute = malloc(2);

    // On copie la tram d'entré dans latitude
    strcpy(latitude,tram);
    // On copie la valeur des degrés de la latitude
    strncpy(minute,latitude+2,2);
    
    //On renvoit les degrés
    return minute;
}

// Convertit les secondes de la latitude en chaines de charactère
char* ConvertisseurLatitudeSeconde(char tram[]){

    char *latitude = malloc(strlen(tram) + 1);
    char *second = malloc(strlen(tram) - 4); // Alloue de la memoire dynamique pour second en supprimant degré et minute
    char carac[10] = "0.";

    strcpy(latitude,tram);
    
    strncpy(second, latitude+5, strlen(tram)); // On commence a prendre les caracteres a partir du 5eme jusqua la fin (taille latitude)

    strcat(carac, second); // Concatene les 2 chaine de caractere

    double secondes = atof(carac);
    secondes = secondes * 60;

    char* resultat = malloc(20); // Alloue de la memoire pour stocker le resultat (20 caracteres devraient suffire pour une latitude)
    sprintf(resultat, "%.2f", secondes); // Formate le resultat en une chaine de caractères avec 2 chiffres après la virgule

    return resultat;
}
//================================================================

// Convertit les degrés de la longitude en chaine de charactère
char* ConvertisseurLongitudeDegré(char tram[]){

    // On initialise les chaines de charactère
    char *Longitude = malloc(strlen(tram) + 1);
    char *degré = malloc(3);
    
    // On copie la tram d'entrée dans longitude
    strcpy(Longitude,tram);
    // On copie la valeur des degrés de la longitude
    strncpy(degré,Longitude,3);      //Extrait degré
    
    // On revoit les degrès 
    return degré;
}

// Convertit les degrés de la longitude en chaine de charactère
char* ConvertisseurLongitudeMinute(char tram[]){

    // On initialise les chaines de charactère
    char *Longitude = malloc(strlen(tram) + 1);
    char *minute = malloc(3);

    // On copie la tram d'entrée dans longitude
    strcpy(Longitude,tram);
    
    // On copie la valeur des degrés de la longitude
    strncpy(minute,Longitude+3,2);

    //On revoit le résultat
    return minute;
}

// Convertit les secondes de la longitude en chaine de charactère
char* ConvertisseurLongitudeSeconde(char tram[]){

    char *Longitude = malloc(strlen(tram) + 1);
    char *second = malloc(strlen(tram) - 5); // Alloue de la memoire dynamique pour second en supprimant degré et minute
    char carac[10] = "0.";

    strcpy(Longitude,tram);
    
    strncpy(second, Longitude+6, strlen(tram)); // On commence a prendre les caracteres a partir du 5eme jusqua la fin (taille latitude)

    strcat(carac, second); // Concatene les 2 chaine de caractere

    double secondes = atof(carac);
    secondes = secondes * 60;

    char* resultat = malloc(20); // Alloue de la memoire pour stocker le resultat (20 caracteres devraient suffire pour une latitude)
    sprintf(resultat, "%.3f", secondes); // Formate le resultat en une chaine de caractères avec 2 chiffres après la virgule

    return resultat;
}
