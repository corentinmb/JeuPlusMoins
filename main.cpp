//
//  main.cpp
//  JeuPlusMoins
//
//  Created by Corentin on 01/09/2014.
//  Copyright (c) 2014 Corentin. All rights reserved.
//

#include <iostream>

using namespace std;

// Fonction de saisie
int saisie()
{
    int n;
    cout << "Veuillez entrer un nombre compris entre 1 et 100: ";
    cin >> n;
    return n;
}

// Fonction principale
int main(int argc, const char * argv[])
{
    //Variables
    bool jeuFini = false;
    srand((unsigned)time(NULL));
    int random=1+rand()%99;
    int nbSaisi=1;
    
    // Jeu
    cout << "Bienvenue sur le jeu du Plus ou Moins !" << endl;
    // ---> Boucle de jeu
    while(!jeuFini)
    {
        
    // ---> On assigne nbSaisi à la valeur retournée par la fonciton
        nbSaisi=saisie();
        
    // ---> Conditions de comparaison à l'entier aléatoire
        if (nbSaisi >= 1 && nbSaisi <= 100) {
            if (nbSaisi < random) {
                cout << "C'est PLUS !" << endl;
            }
            else if (nbSaisi > random){
                cout << "C'est MOINS !" << endl;
            }
            else if (nbSaisi == random)
            {
                cout << "Bravo !!" << endl;
                jeuFini=true;
            }
        }
    }
    
    // Fin du jeu
    return 0;
}

