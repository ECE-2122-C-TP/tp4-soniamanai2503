//
// Created by Sonia Manai on 29/09/2021.
//

#include "fonctions.h"
#include <stdio.h>

int getMax(int a, int b){
    if (a<b)
    {
        printf("L'entier le plus grand est %d: \n", b);
    }
    else if (a>b)
    {
        printf("L'entier le plus grand est %d : \n", a);
    }
    else
    {
        printf("les deux nombres sont égaux");
    }
}



int saisissezEntier(){
    int entier = 0;
    printf("Saisissez un entier : \n");
    scanf("%d", &entier);
    return entier;
}

int calculAire(int a, int b){
    return (a*b);
}

int calculPerimetre(int a, int b){
    return((a+b)*2);
}

int multipleAB(int a, int b){
    if(a%b==0){
        return 1;
    }
    else{
        return 0;
    }

}
