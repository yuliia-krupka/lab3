#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include "Bubble.h"
#include "Selection.h"
#include "Insertion.h"

#define N 10



#define RED     "\033[1m\033[31m"
#define COLOR "\033[1m\033[32m"
#define YELLOW "\033[33m"
#define NORMAL "\033[37m"
#define BOLDCYAN    "\033[1m\033[36m"
#define MAGENTA "\033[1m\033[35m"

using namespace std;


void Pause(string metod) {
    cout << BOLDCYAN << "\n\n------------" << metod << " SORTING----------------" << endl;
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << NORMAL << arr[i] << "\t";
    }
    cout << "\n";
}

void FillArray(int arr[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void ElapsedTime() {
    int n = 100;
    int i = 0;
    while (i < 100 * n) {
        i++;
    }
}


int main() {

    int arr[N], mass[N], myarr[N];

    FillArray(arr, N);
    cout << MAGENTA << "\n__________ORIGINAL ARRAY ________\n";
    PrintArray(arr, N);


    Pause("SELECTION");

    clock_t start = clock();
    ElapsedTime();

    Selection(arr, N);

    clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    cout << RED << "Time elapsed: " << elapsed;


    Pause("BUBBLE");
    FillArray(myarr, N);

    clock_t start1 = clock();
    ElapsedTime();

    Bubble(myarr, N);

    clock_t stop1 = clock();
    double elapsed1 = (double) (stop1 - start1) / CLOCKS_PER_SEC;
    cout << RED << "Time elapsed: " << elapsed1;


    Pause("INSERT");
    FillArray(mass, N);

    clock_t start2 = clock();
    ElapsedTime();

    Insertion(mass, N);

    clock_t stop2 = clock();
    double elapsed2 = (double) (stop2 - start2) / CLOCKS_PER_SEC;
    cout << RED << "Time elapsed: " << elapsed2;

    return 0;
}