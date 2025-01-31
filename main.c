#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} etat;

typedef struct Noeud {
    struct Noeud* suivant;
    etat Etat;
} noeud;

typedef struct {
    noeud* debut;
    noeud* fin;
} liste;

liste listeNoeuds;

liste inserer(etat etatcourant, liste listeNoeuds) {
    noeud* nouveauNoeud = (noeud*)malloc(sizeof(noeud));
    nouveauNoeud->Etat = etatcourant;
    nouveauNoeud->suivant = NULL;
    if (listeNoeuds.debut == NULL) {
        listeNoeuds.debut = nouveauNoeud;
        listeNoeuds.fin = nouveauNoeud;
    } else {
        listeNoeuds.fin->suivant = nouveauNoeud;
        listeNoeuds.fin = nouveauNoeud;
    }
}

int main() {
    liste listeNoeuds;
    etat etatcourant = {1, 2};

    listeNoeuds.debut = NULL;
    listeNoeuds.fin = NULL;

    listeNoeuds = inserer(etatcourant, listeNoeuds);


    return 0;
}
/*void RechercheLargeur(etat etatInitial, etat etatFinal, void genereSuccesseurs())
{ liste NoeudsDejaTraites;
etat etatCourant;
listeNoeuds.debut = listeNoeuds.fin = NULL;
Inserer(etatInitial, &listeNoeuds);  //le passage par valeur ou le passage par adresse
NoeudsDejaTraites.debut = NoeudsDejaTraites.fin = NULL;
while (!Vide (listeNoeuds))
{ etatCourant =Extraire (&listeNoeuds);
n++;
if (etatSolution (etatCourant))
{ printf("\nSucces ! Arret sur le noeud :(%d, %d)\n\n
Nombre de nœuds explores : %d\n", etatCourant.x, etatCourant.y, n);
exit(0);
}
else if (!Appartient (etatCourant, NoeudsDejaTraites))
{ genereSuccesseurs (etatCourant);
Inserer (etatCourant, &NoeudsDejaTraites);
}
}
puts("\nPas de solution");
}

void genereSuccesseurs(etat et)
{ int x0, y0, m;
x0 = et.x;
y0 = et.y;
etat e;
Inserer(e,&listeNoeuds); }
if (x0>0) { e.x=0; e.y=y0;
Inserer(e,&listeNoeuds); }
if (y0<3) { e.y=3; e.x=x0;
Inserer(e,&listeNoeuds); }
if (y0>0) { e.y=0; e.x=x0;
Inserer(e,&listeNoeuds); }
if (x0>0 && y0<3) { m=fmin(x0,3-y0);
e.x=x0-m; e.y=y0+m;
Inserer(e,&listeNoeuds); }
if (y0>0 && x0<4) { m=fmin(4-x0,y0);
e.x=x0+m; e.y=y0-m;
Inserer(e,&listeNoeuds); }
}

int main()
{ etat etatInitial = {0,0}, etatFinal = {2,1};
RechercheLargeur (etatInitial, etatFinal, genereSuccesseurs);
return 0;
} */
