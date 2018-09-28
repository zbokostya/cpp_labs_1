#include <iostream>
#include <climits>

int imax(int a, int b);
int imin(int a, int b);

using namespace std;

int main() {
    int n;
    cout << "Enter count";
    cin >> n;
    int *list = new int[n];
    int *maxLeft = new int[n];
    int *maxRight = new int[n];
    cout << "Enter numbers";
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxLeft[i] = imax(max, list[i]);

        if (max < list[i]) {
            max = list[i];
        }
    }

    max = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        maxRight[i] = imax(max, list[i]);

        if (max < list[i]) {
            max = list[i];
        }
    }

        for (int i = 0; i < n; ++i) {
           cout << imax(list[i], imin(maxLeft[i], maxRight[i])) << "  ";
       }



}


int imax(int a, int b) {
    if (a > b) return a;
    return b;
}

int imin(int a, int b) {
    if (a < b) return a;
    return b;
}
