#include <iostream>
using namespace std;

int horn(int wsp[], int st, int x) {
    if (st == 0) {
        return wsp[0];
    } else {
        return x * horn(wsp, st - 1, x) + wsp[st];
    }
}

int main(int argc, char** argv) {
    int st;
    int x;
    int size;
    int i = 0;
    cout << "podaj stopien: ";
    cin >> st;
    cout << "podaj argument: ";
    cin >> x;
    size = st + 1;
    int *wsp = new int[size];
    while (i <= st) {
        cout << "podaj wspolnik stojacy przy potedze " << i << ": ";
        cin >> wsp[i];
        i++;
    }
    cout << horn(wsp, st, x) << endl;
    delete[] wsp;
    return 0;
}