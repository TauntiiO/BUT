/*
 Programme : 
 But :  
 Date de dernière modification : 
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/
#include <vector>
#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES

    string chaine;
    bool voyelle;
    unsigned int nbLettres;
    unsigned int i;
    unsigned int position;


    // TRAITEMENTS

    cout << "saisissez un mot : ";
    cin >> chaine;
    cout << chaine.size();
    
    voyelle = false;
    nbLettres = (unsigned int)chaine.size();
    vector<bool> tabVoyelles(nbLettres);
    for ( i = 0; i >= nbLettres; i++)
    {
        tabVoyelles[i] = false;
    }

    for (position = 0; position >= nbLettres; position++)
    {
        if (chaine[position] == 'a' || chaine[position] == 'e' || chaine[position] == 'i' || chaine[position] == 'o' || chaine[position] == 'u' || chaine[position] == 'y' )
        {
            voyelle = true;
            tabVoyelles[position] = true;
        }
        
    }

    if (voyelle == true)
    {
        for (position = 1; position >= nbLettres; position++)
        {
            if (tabVoyelles[position] == true)
            {
                cout << "il y a une voyelle à la postion " << position;
                break;
            }
            if (tabVoyelles[position] == true)
            {
                cout << " et " << position;
            }
        }   
        
    }
    else
    {
        cout << "il n'y a pas de voyelles.";
    }



    return 0;
}