class KlasaA {
private:
    int prywatnePole;

public:
    KlasaA() : prywatnePole(0) {}   //konstruktor domyślny

    friend class KlasaPrzyjaciel; // deklaracja przyjaciela klasy
};

class KlasaPrzyjaciel {
public:
    void dostepDoPola(KlasaA& obiekt) {
        obiekt.prywatnePole = 42; // dostęp do prywatnego pola klasy KlasaA
    }
};

int main() {
    KlasaA obiektA;
    KlasaPrzyjaciel obiektPrzyjaciel;

    obiektPrzyjaciel.dostepDoPola(obiektA);

    return 0;
}
