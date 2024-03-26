
struct champs {
    char heure[10];
    char latitude[10];
    char orientationLatitude[2];
    char longitude[10];
    char orientationLongitude[2];
};

char* ExtraireChamps(char tram[], int choix);
void getChamps(char tram[], struct champs *champs);

