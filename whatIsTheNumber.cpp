#include <iostream> 
#include <windows.h>
#include <random>
using namespace std;

void loading_dot() {
    int i;
    int loop = 0;
    while (loop < 3) {
        for (i = 0; i < 3; i++) {    
            cout << ".";
            cout.flush();
            Sleep(500);

        }
        cout << "\b\b\b";
        cout.flush();
        loop++;
    }
}

int random_number() {
    int random_number;
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(1, 10);
    random_number = distribution(generator);
}

int main() {

    int choose_user;
    int computer = random_number();
    cout << "I'm thinking of a number";
    loading_dot();
    cout << "\n";
    cout << "Now try to guess the number from 1 to 10";
    loading_dot();
    cout << "\n";
    cout << "You can now type: ";
    cin >> choose_user;

    if(choose_user == computer) {
        cout << " WOW! IT'S AMAZIIIIING: The number is "<< computer;
    } else {
        cout << "NOOOO! YOU A LOOSER! The number is " << computer;
    }

    return 0;

}
