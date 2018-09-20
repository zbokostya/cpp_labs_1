#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number";
    cin >> a;
    int length = to_string(a).length();
    int *listNum = new int[length];
    for(int i = 0 ; i < length; i++ ){
        cout << a%10 << endl;
        listNum[i] = a % 10;
        a = a /10;

    }
    cout << "-------------" << endl;
    for(int i = 0; i<length; i++){
        cout << listNum[length - i - 1] << endl;
    }

    return 0;
}