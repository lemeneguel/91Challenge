#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> numbers {};
    char selection{};
    
    do {
        cout << "/nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: " << endl;
        cin >> selection;
    }while (selection != 'q' && selection != 'Q');
    
    return 0;
    
}