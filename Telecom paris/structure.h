typedef struct Usager {
    const char *getNom() const {
        return nom;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Usager::age = age;
    }

    double getTaux() const {
        return taux;
    }

    void setTaux(double taux) {
        Usager::taux = taux;
    }

    char nom[40];
    int age;
    double taux;
} Usager;
