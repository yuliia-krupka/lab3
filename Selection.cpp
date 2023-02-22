#include <iostream>

#define COLOR "\033[1m\033[32m"
#define YELLOW "\033[33m"
#define NORMAL "\033[37m"
#define MAGENTA "\033[35m"

using namespace std;
#define N 10

void SelectionSorting(int arr[], int size) {
    int comparisons = 0, changes = 0;

    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            comparisons++;
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            changes++;
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        cout << YELLOW << "STEP NUMBER " << i + 1 << ":" << endl;
        for (int k = 0; k < size; k++) {
            cout << NORMAL << arr[k] << "\t";
        }
        cout << endl;
    }
    cout << MAGENTA << "\nNumber of comparisons done to sort the list: " << NORMAL << comparisons << endl;
    cout << MAGENTA << "Number of changes done to sort the list: " << NORMAL << changes << endl;
}


void Selection(int arr[], int size) {
    // SELECTION SORTING
    cout << COLOR << "\nORIGINAL ARRAY" << endl;
    for (int i = 0; i < size; i++) {
        cout << NORMAL << arr[i] << "\t";
    }
    cout << "\n";

    cout << COLOR << "\nPROCESS OF SORTING AN ARRAY" << endl;
    SelectionSorting(arr, N);

    cout << COLOR << "\nSORTED ARRAY " << endl;
    for (int i = 0; i < size; i++) {
        cout << NORMAL << arr[i] << "\t";
    }
    cout << "\n";
}
