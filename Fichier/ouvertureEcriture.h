#include <iostream>
#include <fstream>

using namespace std;

int ouvertureEcriture() {
    ofstream fichier("/root/CLionProjects/Cpp-Tutorial-Exemple/Lecture Fichier/test.txt",
                     ios::out | ios::trunc);  //déclaration du flux et ouverture du fichier

    if (fichier)  // si l'ouverture a réussi
    {
        // instructions
        fichier.close();  // on referme le fichier
    } else  // sinon
        cerr << "Erreur à l'ouverture !" << endl;

    return 0;
}
