/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdio.h>  // Inclus la bibliothèque stdio qui est la bibliothèque standard du c
#include <stdlib.h> // Inclus la bibliothèque stdlib pour pouvoir utiliser la fonction `atoi`
#include <string.h> // Inclus la bibliothèque string 

int gcd(int a, int b) { // Déclare la fonction gcd qui prend en paramètre 2 entiers a et b et retourne un entier
  int r;                // Déclare une variable `r` qui est le reste de la division
  while (b != 0) {      // reste dans cette boucle tant que b est différent que 0
    r = b;
    b = a % b;          // ce calcule recupère le reste de la division de a par b
    a = r;
  }
  return a;             // retourne la valeur de a à la variable gcd
}

int main(int argc, char* argv[]) {  // boucle principal avec un entier qui représente le nombre total d'arguments passés à la ligne de commande et un tableau de chaînes de caractères (pointeurs char*) contenant les arguments passés
    if (argc <= 2) {                // si il y a moins de deux valeur en entréé on retourne -1
        return -1;
    }

    int a = atoi(argv[1]);          //passage de la table ascci en entier de la première valeur du tableau 
    int b = atoi(argv[2]);          //passage de la table ascci en entier de la deuxième valeur du tableau
    
    int result = gcd(a, b);         // mettre le resultat du calcul dans un entier

    printf("%d\n", result);         // affiché le resultat en decimal

    return 0;
}
