#include<iostream>
#include "Telecom paris/applicationMainSynthese.h"
#include "Telecom paris/fileModewappend.h"
#include "Telecom paris/fileWriteInteractive.h"

int main(int argc, char **argv) {

//    std::cout << "\nA Function ==> aliases: \n\n";
//    std::cout<<aliases();
//
//    std::cout << "\nA Function ==> sizeofOperator: \n\n";
//    std::cout<<sizeofOperator();
//
//    std::cout << "\nA Function ==> arrayInFunctions: \n\n";
//    std::cout<<arrayInFunctions();
//
//    std::cout << "\nA Function ==> arrays: \n\n";
//    std::cout<<arrays();
//
//    std::cout << "\nA Function ==> arraysAndPointers: \n\n";
//    std::cout<<arraysAndPointers();
//
//    std::cout << "\nA Function ==> arraysOfPointers: \n\n";
//    std::cout<<arraysOfPointers();
//
//    std::cout << "\nA Function ==> characterArrays: \n\n";
//    std::cout<<characterArrays();
//
//    std::cout << "\nA Function ==> initialization: \n\n";
//    std::cout<<initialization();
//
//    std::cout << "\nA Function ==> passingToFunction: \n\n";
//    std::cout<<passingToFunction();
//
//    std::cout << "\nA Function ==> staticArrays: \n\n";
//    std::cout<<staticArrays();
//
//    std::cout << "\nA Function ==> graphical: \n\n";
//    std::cout<<graphical();
//
//    std::cout << "\nA Function ==> conditionalOperator: \n\n";
//    std::cout<<conditionalOperator();
//
//    std::cout << "\nA Function ==> recursive: \n\n";
//    std::cout<<recursive();
//
//    std::cout << "\nA Function ==> typeDefinition: \n\n";
//    std::cout<<typeDefinition();
//
//    std::cout << "\nA Function ==> IncrementingAndDecrementing: \n\n";
//    std::cout<<NewAndDelete();
//
//    std::cout << "\nA Function ==> typeDefinition: \n\n";
//    std::cout<<IncrementingAndDecrementing();
//
//    std::cout << "\nA Function ==> IfelseStructure: \n\n";
//    std::cout<<IfelseStructure();
//
//    std::cout << "\nA Function ==> LectureFichier: \n\n";
//    std::cout<<LectureFichier();
//
//    std::cout << "\nA Function ==> Ouverture Ecriture: \n\n";
//    std::cout<<ouvertureEcriture();
//
//    std::cout << "\nA Function ==> ouverture Lecture Ecriture : \n\n";
//    std::cout<<ouvertureLectureEcriture();
//
//    std::cout << "\nA Function ==> Lire Contenu Fichier : \n\n";
//    std::cout<<lireContenuFichier();
//
//    std::cout << "\nA Function ==> Read File Octet By Octet : \n\n";
//    std::cout << readFileOctetByOctet();
//
//    std::cout << "\nA Function ==> Flux Fail : \n\n";
//    std::cout << fluxFail();
//
//    std::cout << "\nA Function ==> Calculer Puissances : \n\n";
//      cout << calculerPuissances();
//
//    std::cout << "\nA Function ==> Permutation Variables : \n\n";
//    std::cout << permutationVariables();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << printChar();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << scanfTest();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << avecUneVariable();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << hello();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << printfAall();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << printfCharStr();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << printChar();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << printfInt();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << printfReel();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << scanfNVar();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << scanfVar();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << opArithmetiqueIn();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << opArithmetiqueDouble();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << opArithmetiquePlusplus();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << opLogic();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << ppcm();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << pgcd();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << tableauMultiDimPrbtype();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << ctrlFor();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << CtrlForAdv();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << CtrlForIndex();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << CtrlWhileAdv();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << foncSimple();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << fonc2fonc();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << varGlbvsLocal();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << varGlbvsLocalFor();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << VecteurSimple();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << vecteurFoncPrint();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << VecteurFoncPrintAdv();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << TableauMultiDim();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << tableauPointeur();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << tableauPointeurMulti();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << pointeur();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << pointeurFonctionVar(;
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << stringAffect();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << allocationDynamique();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << structSimple();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << structAvecFonction();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << structTypedef();

//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << pointeurVarPasReglo();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << allocationDynamiqueMemory();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << allocationDynamiqueStructure();
//
//    std::cout << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout << kurskalSpanningProtocol();
//
//    std::cout  << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout  << fileModewappend(argc, argv);
//
//    std::cout  << "\nA Function ==> Telecom Paris : \n\n";
//    std::cout  << fileWriteInteractive();

    std::cout << "\nA Function ==> Telecom Paris : \n\n";
    std::cout << applicationMainSynthese(argc, argv);

}

