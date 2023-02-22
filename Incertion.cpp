#include <iostream>

#define N 10

#define COLOR "\033[1m\033[32m"
#define YELLOW "\033[33m"
#define NORMAL "\033[37m"
#define BOLDCYAN    "\033[1m\033[36m"
#define MAGENTA "\033[35m"

using namespace std;


void InsertionSorting(int mass[], int size) {
    int comparisons = 0, changes = 0;
    for (int i = 1; i < size; i++) {
        int key = mass[i];
        int j = i - 1;

        while (j > 0 && mass[j] > key) {
            comparisons++;
            mass[j + 1] = mass[j];
            j--;
            changes++;
        }
        mass[j + 1] = key;
        changes++;
        cout << YELLOW << "STEP NUMBER " << i << ":" << endl;
        for (int k = 0; k < size; k++) {
            cout << NORMAL << mass[k] << "\t";
        }
        cout << "\n";
    }
    cout << MAGENTA << "\nNumber of comparisons done to sort the list: " << NORMAL << comparisons << endl;
    cout << MAGENTA << "Number of  changes done to sort the list: " << NORMAL << changes << endl;
}


void Insertion(int mass[], int size) {
    //INSERTION SORTING
    cout << COLOR << "\nORIGINAL ARRAY" << endl;
    for (int i = 0; i < size; i++) {
        cout << NORMAL << mass[i] << "\t";
    }
    cout << "\n";

    cout << COLOR << "\nPROCESS OF SORTING AN ARRAY" << endl;
    InsertionSorting(mass, N);

    cout << COLOR << "\nSORTED ARRAY " << endl;
    for (int i = 0; i < size; i++) {
        cout << NORMAL << mass[i] << "\t";
    }
    cout << "\n";
}
