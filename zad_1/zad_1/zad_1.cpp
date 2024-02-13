#include <iostream>
using namespace std;

class Robot {
    public:
        string name;
        int serial_number;
        int digit;

        void runRobot() {
            if (digit == 1) {
                showRobot();
            }
            else {
                messages();
            }
        }

        void showRobot() {
            cout << "Robot uruchomiony: nr - " << serial_number << " Nazwa: "
                << name << endl;
        }
        void messages() {
            cout << "Robott nie uruchomiony" << endl;
        }

};


int main()
{
    int uruchomienie;
    cout << "Robot 1 - Start, inna wartość: Robot nie działa " << endl;
    cout << "Co chesz zrobic: "; cin >> uruchomienie;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl; 
    Robot mojrobocik;
    mojrobocik.digit = uruchomienie;
    mojrobocik.serial_number = 123456789;
    mojrobocik.name = "Bobert 1";
    mojrobocik.runRobot();

    return EXIT_SUCCESS;
}

