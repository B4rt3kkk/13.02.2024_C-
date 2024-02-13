#include <iostream>
using namespace std;

class Maszyna {
public:
    string name;
    int moc;
    int digit;
    string color;

    void runMaszyna() {
        if (digit == 123) {
            showMaszyna();
        }
        else {
            messages();
        }
    }

    void showMaszyna() {
        cout << "Maszyna uruchomiona :) " << " Moc w Watach: " << moc << ", Nazwa: " << name << ", Kolor: " << color << endl;
    }
    void messages() {
        cout << "Maszyna nie uruchomiony" << endl;
    }

};


int main()
{
    int uruchomienie;
    cout << "Machina - Start, inna wartość: Machina nie działa " << endl;
    cout << "Wpisz hasło: "; cin >> uruchomienie;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    Maszyna mojamaszyna;
    mojamaszyna.digit = uruchomienie;
    mojamaszyna.color = "czorny";
    mojamaszyna.moc = 1000;
    mojamaszyna.name = "Super_Kuper_Machina";
    mojamaszyna.runMaszyna();

    return EXIT_SUCCESS;
}

