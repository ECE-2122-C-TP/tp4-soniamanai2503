//
// Created by Sonia Manai on 29/09/2021.
//

#include "exercices.h"
#include <stdio.h>
#include "fonctions.h"

void exercice1(){
    int a = saisissezEntier();
    int b = saisissezEntier();
    printf(getMax(a,b));
    return ;}


void exercice3(){
    int longueur = saisissezEntier(), largeur = saisissezEntier() ;
    printf("L'aire du rectangle est : %d \n",calculAire(longueur,largeur));
    printf("Le périmètre du rectangle est : %d \n", calculPerimetre(longueur, largeur));
    return;
}

void exercice4(){
    int a = saisissezEntier(), b = 3, c = 10;
    if (multipleAB(a,b)==1){
        printf("L'entier saisi est un multiple de 3 \n");
    }
    else {
        printf("L'entier n'est pas un multiple de 3 \n ");
    }
    if (a>=c){
        printf("L'entier est supérieur ou égal à %d \n", c);
    }
    return;

}