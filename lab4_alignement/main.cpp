#include <iostream>
using namespace std;

int main() {
    int list[10];
    int max=0;
    int max_id=0;
    cout << "Enter numbers" ;
    for (int i = 0; i<10; i++){
        cin >> list[i];
        if (list[i]>max){
            max = list [i];
            max_id = i;
        }

    }
    for (int i = 0; i<10;i++){
        if(i==max_id){
            continue;
        }
        else if(i+1<max_id){
            for(int j=i+1;j<max_id;j++){
                if(list[j]<list[i]){
                    list[j]=list[i];
                }
            }
        }
        else if (i-1>max_id){
            for(int j = i-1; j>max_id;j--){
                if(list[j]<list[i]){
                    list[j]=list[i];
                }
            }
        }

    }
    for (int i = 0; i<10; i++){
        cout << list[i] << "  ";
    }
}