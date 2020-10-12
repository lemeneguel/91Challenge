#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> numbers {1, 2, 3, 4};
    char selection{};
    
    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: " << endl;
        cin >> selection;
        
        if (selection == 'P' || selection == 'p') {
            
            if (numbers.size() == 0)
                cout <<"[] - the list is empty" << endl;
                
            else {
                cout << "[ ";
                for (auto num:numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }else if (selection == 'A' || selection == 'a') {
            int num_to_add {};
            cout << "Enter an integer to add to the list: ";
            cin >>  num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " Added " << endl;
        }
        
        
        
    } while (selection != 'q' && selection != 'Q');
    
    return 0;
    
}