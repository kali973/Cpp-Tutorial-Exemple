#include <iostream>
#include <fstream>

using namespace std;

int readFileOctetByOctet(void) {
    ifstream fichier("/root/CLionProjects/Cpp-Tutorial-Exemple/Lecture Fichier/test.txt", ios::in);  // on ouvre

    if (fichier) {
        char caractere;
        while (fichier.get(caractere))  // tant que l'on peut mettre la ligne dans "contenu"
        {
            fichier.get(caractere);  // on lit un caractère et on le stocke dans caractere
            cout << caractere;  // on l'affiche
        }// notre variable où sera stocké le caractère
        fichier.close();
    } else
        cerr << "Impossible d'ouvrir le fichier !" << endl;

    return 0;
}