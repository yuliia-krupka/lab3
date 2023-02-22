#include <iostream>

#define COLOR "\033[1m\033[32m"
#define YELLOW "\033[33m"
#define NORMAL "\033[37m"
#define MAGENTA "\033[35m"

#define N 10

using namespace std;


void BubbleSorting(int arr[],  int size) {
    int comparisons = 0, changes = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                changes++;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
            cout << YELLOW << "STEP NUMBER " << i + 1 << ":" << endl;
            for (int k = 0; k < size; k++) {
                cout << NORMAL << arr[k] << "\t";
            }
            cout << "\n";
        }
    cout << MAGENTA << "\nNumber of comparisons done to sort the list: " << NORMAL << comparisons << endl;
    cout << MAGENTA << "Number of  changes done to sort the list: " << NORMAL << changes << endl;
}

void Bubble(int arr[], int size) {
    //BUBBLE SORTING
    cout << COLOR << "\nORIGINAL ARRAY" << endl;
    for (int i = 0; i < size; i++) {
        cout << NORMAL << arr[i] << "\t";
    }
    cout << "\n";

    cout << COLOR << "\nPROCESS OF SORTING AN ARRAY" << endl;
    BubbleSorting(arr, N);

    cout << COLOR << "\nSORTED ARRAY" << endl;
    for (int i = 0; i < size; i++) {
        cout << NORMAL << arr[i] << "\t";
    }
    cout << "\n";
}

