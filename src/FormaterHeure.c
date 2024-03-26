
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../header/FormaterHeure.h"
//180502.00
//renvoi 18h05m02s
//Extraire les champs 2 pars 2

// Recupérer l'heure du temps
char *formaterHeure(char time[]){
    // On intialise les chaines de charactère
    char *cpy = time;
    char *hour = malloc(3);
    
    // On copie la composante de l'heure dans hour
    strncpy(hour,cpy,2);
    
    // On retourne l'heure
    return hour;
}

// Recupérer les minutes du temps
char *formaterMinute(char time[]){
    // On intialise les chaines de charactère
    char *cpy = time;
    char *minute = malloc(3);
    
    // On copie la composante des minutes dans minutes
    strncpy(minute,cpy+2,2);
    
    // On retourne les minutes
    return minute;
}

// Recupérer les secondes du temps
char *formaterSecond(char time[]){
    // On intialise les chaines de charactère
    char *cpy = time;
    char *second = malloc(3);
    
    // On copie la composante des minutes dans minutes
    strncpy(second,cpy+4,2);
    
    // On retourne les secondes
    return second;
}
