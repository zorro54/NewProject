#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) //argc = ce qu'on �crit sur la ligne de commande;   char** : pointeur sur un pointeur, tableau de chaine de caract�res
{
    printf("Hello world!\n");
    return 0;
}

for (i)

int ns [42] //D�claration d'un tableau. Entre crochets, c'est la taille
int tab [3] = {1,2,3} //: on doit initialiser toutes les cases du tableau
char ch[]={"A", "B", "C"}
char ch2[]={"ABC"} // il y a "\0" derri�re, qui est le marqueur de fin de chaine

ns[N-1]=N�me �l�ment
ex: ch[2] = "C";

int *p = ns = &(ns[0]); //ns[0] d�signe le premier �l�ment
ns[3] = 5;
*(p+3)=5 == *(ns+3)=5 //pareil

p++;

int i;

double somme_tab (double tab[], int len){
    //donne la somme des �l�ments du tableau tab, on dit que tab est de longuer len

    double s=0;
    int i;
        for (i=0; i<len; i++){
            s = s+tab[i];
        }
        return s;
}
// d�claration sans indication de taille
// pas de fonction len(tab) => parma�tre len

Pas de tableau comme r�sultat d une fonction, mais elle sait retourner l adresse d un tableau
Trois mani�res pour s en sortir :
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
    Cr�er tableau r�sultat avant l'appel � tab_carre

    Par allocation dynamique


void tab

tab = tab [0]
