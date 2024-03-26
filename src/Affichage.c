
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../header/FormaterHeure.h"
#include "../header/Convertisseur.h"
#include "../header/Affichage.h"
#include "../header/ExtraireChamps.h"

// Fonction afin d'afficher l'heure dans la console
char* AffichageHeure(char time[]) {
    // On récupére les chaines de characters correspondant a chaque composant du temps
    char *getHeure = formaterHeure(time);
    char *getMinute = formaterMinute(time);
    char *getSecond = formaterSecond(time);
    
    /* On convertit le résulat au format "HH"h"mm"m"ss"s où :
       "HH" est l'heure sur deux chiffre
       "mm" est les minutes sur deux chiffre
       "ss" est les secondes sur deux chiffres*/
    char *result = malloc(strlen(getHeure) + strlen(getMinute) + strlen(getSecond) + 1);
    sprintf(result, "%sh%sm%ss", getHeure, getMinute, getSecond);
    
    // On affiche le résulat dans la console
    printf("%s\n",result);
    
    // On retourne le résulat
    return result;
}

// Fonction afin d'afficher la Latitude dans la console
char* AffichageLatitude(char latitude[]){
    // On récupére les chaines de characters correspondant a chaque composant de la latitude
    char *getDegré = ConvertisseurLatitudeDegré(latitude);
    char *getMinute = ConvertisseurLatitudeMinute(latitude);
    char *getSecond = ConvertisseurLatitudeSeconde(latitude);
    
    /* On convertit le résulat au format DD°mm'ss.ss" où :
       DD est le dégrées
       mm est les minutes
       ss est les secondes*/
    char *result = malloc(strlen(getDegré) + strlen(getMinute) + strlen(getSecond) + 1);
    sprintf(result, "%s°%s'%s\"", getDegré, getMinute, getSecond);
    
    // On affiche le résulat dans la console
    printf("%s\n",result);
    
    // On retourne le résulat
    return result;
}

// Fonction afin d'afficher la Latitude dans la console
char* AffichageLongitude(char longitude[]){
    // On récupére les chaines de characters correspondant a chaque composant de la latitude
    char *getDegré = ConvertisseurLongitudeDegré(longitude);
    char *getMinute = ConvertisseurLongitudeMinute(longitude);
    char *getSecond = ConvertisseurLongitudeSeconde(longitude);
    
    /* On convertit le résulat au format DD°mm'ss.ss" où :
       DD est le dégrées
       mm est les minutes
       ss est les secondes*/
    char *result = malloc(strlen(getDegré) + strlen(getMinute) + strlen(getSecond) + 1);
    sprintf(result, "%s°%s'%s\"", getDegré, getMinute, getSecond);
    
    // On affiche le résulat dans la console
    printf("%s\n",result);
    
    // On retourne le résulat
    return result;
}


// Fonction afin d'afficher le contenue de la trame et de l'enregistrer dans un fichier
void AffichageFic(char trame[]){
    
    // On initialise les variables
    struct champs mes_champs;
    FILE* fic;
    
    // On ouvre le fichier
    fic = fopen("resultat.txt","w");
    if (fic == NULL){
        printf("Erreur lors de l'ouverture du fichiers");
    }

    // On récupere le contenue de la trame
    getChamps(trame,&mes_champs);
    
    // On convertit et affiche chaque composante
    char *affichageh = AffichageHeure(mes_champs.heure);
    char *affichageLat = AffichageLatitude(mes_champs.latitude);
    char *affichageLong = AffichageLongitude(mes_champs.longitude);
    
    // On récupére additionnelement les orientation 
    char *orientationLat = mes_champs.orientationLatitude;
    char *orientationLong = mes_champs.orientationLongitude;
    
    /* On enregistre l'ensemble dans le fichier au format 
        Heure : H
        Latitude : LatOLat
	Longitude : LonOLon

	où: 
	H est l'heure, 
	Lat est la latitude,
        OLat est l'orientation de la latitude
        Lon est la longitude,
        OLon est l'orientation de la longitude
    */ 
    fprintf(fic,"Heure : %s\n",affichageh);
    fprintf(fic,"Latitude : %s",affichageLat);
    fprintf(fic,"%s",orientationLat);
    fprintf(fic,"\nLongitude : %s",affichageLong);
    fprintf(fic,"%s",orientationLong);
}
