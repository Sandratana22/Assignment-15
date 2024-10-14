#include <iostream> 

using namespace std; 

int main() {
    int numberofRows; 
    cout << "Number of row: " << endl;
    cin >> numberofRows; 

    for(int i = 1; i <= numberofRows; i++){
        for(int j = 1; j <= i; j++){
            cout << "*"; 
        }
        cout << endl; 
    }
    return 0; 
}
