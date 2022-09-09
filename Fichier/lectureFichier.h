#include <iostream>
#include <fstream>

using namespace std;

int LectureFichier(void) {
    ifstream fichier("/root/CLionProjects/Cpp-Tutorial-Exemple/Lecture Fichier/test.txt",
                     ios::in);  // on ouvre le fichier en lecture

    if (fichier)  // si l'ouverture a réussi
    {
        // instructions
        fichier.close();  // on ferme le fichier
    } else  // sinon
        cerr << "Impossible d'ouvrir le fichier !" << endl;

    return 0;
}