#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int ouvertureLectureEcriture(void) {
    string mon_fichier = "/root/CLionProjects/Cpp-Tutorial-Exemple/Lecture Fichier/test.txt";  // je stocke dans la chaîne mon_fichier le nom du fichier à ouvrir
    ifstream fichier(mon_fichier.c_str(), ios::in);
    if (fichier)  // si l'ouverture a réussi
    {
        // instructions
        fichier.close();  // je referme le fichier
    } else  // sinon
        cerr << "Erreur à l'ouverture !" << endl;

    return 0;
}