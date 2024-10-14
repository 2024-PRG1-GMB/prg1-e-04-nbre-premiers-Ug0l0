#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char ouinon; //déclaration de la variable pour la condition du do while
    do {
        int limite;
        //entrée de la valeur limite du nombre premier par l'utilisateur
        //et verification si le nombre respecte la taille maximale (2-1000)
        //sinon, l'utilisateur est invité a refaire sa saisie
        while (true) {
            cout << "entrer une valeur [2-1000] : " << endl;
            cin >> limite;
            if (limite < 2 or limite > 1000) {
                cout << "Valeur hors-limite, veuillez saisir une valeur a nouveau." << endl;
                continue;
            } else {
                break;
            }
        }
        //calculs et affichage des nombres premiers
        const int max = limite;
        const int tab_par_ligne = 5; //nombre de tab par ligne pour la mise en forme des nbrs
        int retour_ligne = 0;
        for (int i = 2 ; i <= max ; ++i) {
            int j;
            for (j = 2 ; j * j <= i ; ++j) {
                if (i % j == 0) {
                    break;
                }
            }
            if (j * j > i) {
                cout << '\t' << i << " ";
                retour_ligne++;
                if (retour_ligne % tab_par_ligne == 0) {
                    cout << endl;
                }
            }
        }
        //retour a la ligne après l'enonciation des nb premiers
        cout << endl;

        /*demande a l'utilisateur si il veut recommencer le programme, si oui
        la condition du do while est vraie alors il recommence*/
        ouinon = ' '; //reinitilaise la variable
        while (ouinon != 'O' and ouinon != 'N') { //verification de la saisie de l'utilisateur
            cout << "Voulez-vous recommencez ? [O/N] " << endl;
            cin >> ouinon;
        }
    } while (ouinon != 'N'); //si l'utilisateur ne veut plus recommencez,
                             //il sort de la boucle et le programme se termine
    cout << "Fin du programme";
    return EXIT_SUCCESS;
}
