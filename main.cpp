// COMSC-210 | Mauricio Espinosa | Lab 23
// IDE Used: Visual Studio Code & Github

#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include <ctime> // for seeding time
#include <cstdlib> // for randoms
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();

    main_menu();




    return 0;
}


// function to display main menu, returns user's selection
int main_menu() {
    int userChoice;

    do {
        cout << "*** GOAT MANAGER 3001 ***" << endl;
        cout << "[1] Add a goat" << endl;
        cout << "[2] Delete a goat" << endl;
        cout << "[3] List goats" << endl;
        cout << "[4] Quit" << endl;
        cout << "Choice --> ";
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 4) {
            cout << "Invalid input" << endl;
        }

    } while (userChoice < 1 || userChoice > 4);
    
    return userChoice;
}


// function to add a goat to the trip
void add_goat(list<Goat> &trip, string [], string [])
{
    string goatName;
    int goatAge;
    string goatColor;

    Goat newGoat();


}

// function to delete a goat from the trip
void delete_goat(list<Goat> &trip)
{


}

// function to display the current trip
void display_trip(list<Goat> trip)
{


}