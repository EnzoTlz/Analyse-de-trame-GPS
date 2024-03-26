clean:
	rm -f prog *.o
main:main.c
	gcc src/VerifierTrame.c src/ExtraireChamps.c src/FormaterHeure.c src/Affichage.c src/Convertisseur.c  main.c -o main 
affichage:src/Affichage.c 
	gcc src/Convertisseur.c src/FormaterHeure.c src/Affichage.c src/ExtraireChamps.c -o Affichage
convertisseur:src/Convertisseur.c
	gcc src/Convertisseur.c -o Convertisseur
extraireChamps:src/ExtraireChamps
	gcc src/ExtraireChamps.c -o ExtraireChamps
formaterHeure:src/FormaterHeure.c
	gcc src/FormaterHeure.c -o FormaterHeure
verifierTrame:src/VerifierTrame.c
	gcc src/VerifierTrame.c -o VerifierTrame
