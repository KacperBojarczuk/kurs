class MyClass {
public:
    static int myStaticVariable;  // Statyczna zmienna klasy

    static void myStaticFunction() {  // Statyczna funkcja klasy
        // Implementacja funkcji
    }
};

int MyClass::myStaticVariable = 0;  // Inicjalizacja statycznej zmiennej klasy

int main() {
    MyClass::myStaticVariable = 10;  // Użycie statycznej zmiennej klasy
    MyClass::myStaticFunction();     // Wywołanie statycznej funkcji klasy
    return 0;
}
