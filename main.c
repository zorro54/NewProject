#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) //argc = ce qu'on écrit sur la ligne de commande;   char** : pointeur sur un pointeur, tableau de chaine de caractères
{
    printf("Hello world!\n");
    return 0;
}

for (i)

int ns [42] //Déclaration d'un tableau. Entre crochets, c'est la taille
int tab [3] = {1,2,3} //: on doit initialiser toutes les cases du tableau
char ch[]={"A", "B", "C"}
char ch2[]={"ABC"} // il y a "\0" derrière, qui est le marqueur de fin de chaine

ns[N-1]=Nème élément
ex: ch[2] = "C";

int *p = ns = &(ns[0]); //ns[0] désigne le premier élément
ns[3] = 5;
*(p+3)=5 == *(ns+3)=5 //pareil

p++;

int i;

double somme_tab (double tab[], int len){
    //donne la somme des éléments du tableau tab, on dit que tab est de longuer len

    double s=0;
    int i;
        for (i=0; i<len; i++){
            s = s+tab[i];
        }
        return s;
}
// déclaration sans indication de taille
// pas de fonction len(tab) => parmaètre len

Pas de tableau comme résultat d une fonction, mais elle sait retourner l adresse d un tableau
Trois manières pour s en sortir :
    Par effet de bord sur l argument de la fonction //i souvent entier

    void tab_carres(int t[], int len){
    int i;
        for (i=0; i < len; i++){
            t[i] = t[i] * t[i];
        }
    }
    //Pas de return
    //Les valeurs originales du tableau sont perdues !

    Par copie sur un un autre argument de la fonction
    Créer tableau résultat avant l'appel à tab_carre

    Par allocation dynamique


void tab

tab = tab [0]
