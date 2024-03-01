#include <iostream>
#include <string>
using namespace std;

class MusicIns {
private:
    string stringInstruments[5];
    string windInstruments[5];
    string percInstruments[5];

public:
    void stringInit() {
        stringInstruments[0] = "Veena";
        stringInstruments[1] = "Guitar";
        stringInstruments[2] = "Sitar";
        stringInstruments[3] = "Sarod";
        stringInstruments[4] = "Mandolin";
    }

    void windInit() {
        windInstruments[0] = "Flute";
        windInstruments[1] = "Clarinet";
        windInstruments[2] = "Saxophone";
        windInstruments[3] = "Nadaswaram";
        windInstruments[4] = "Piccolo";
    }

    void percInit() {
        percInstruments[0] = "Tabla";
        percInstruments[1] = "Mridangam";
        percInstruments[2] = "Bongos";
        percInstruments[3] = "Drums";
        percInstruments[4] = "Tambour";
    }

    void get() {
        int choice;
        do {
            cout << "\nChoose the type of instrument to display:" << endl;
            cout << "1. String Instruments" << endl;
            cout << "2. Wind Instruments" << endl;
            cout << "3. Percussion Instruments" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice (1-4): ";
            cin >> choice;

            switch (choice) {
                case 1:
                    stringInit();
                    show(stringInstruments);
                    break;
                case 2:
                    windInit();
                    show(windInstruments);
                    break;
                case 3:
                    percInit();
                    show(percInstruments);
                    break;
                case 4:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
            }
        } while (choice != 4); // Loop until the user chooses to exit
    }

    void show(string instruments[]) {
        for (int i = 0; i < 5; i++) {
            cout << instruments[i] << endl;
        }
    }
};

int main() {
    MusicIns instruments;
    instruments.get();
    return 0;
}
