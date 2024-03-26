#Analyse de trame GPS

Afin de réaliser les commandde suivante ouvrez un terminal et placer vous dans le dossier racine (celui contenant ce fichier)

## Compilation du programme

Si le programme a précedemment été compilé faire la commande `make clean`

Une fois cela fait pour compilé lancé la commande `make main`

## Execution du programe

Afin d'excuter le programme executer le fichier `main` Creer post compilation

Il vous sera alors demander d'entrer un trame

Si la trame est incorrecte Un message d'erreur vous sera afficher sinon la trame sera afficher dans la console est un fichier `resultat.txt` sera creer contenant le résultat de l'analyse au format :
```
    Heure : H
    Latitude : LatOLat
    Longitude : LonOLon
où: 
    H est l'heure, 
    Lat est la latitude,
    OLat est l'orientation de la latitude
    Lon est la longitude,
    OLon est l'orientation de la longitude
```

*Attention*: Lorsque que vous relancez un execution le contenue du fichier résultat.txt est ecrasée avec les résulat les plus récents 

