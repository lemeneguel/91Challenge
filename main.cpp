#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> numbers {};
    char selection{};
    
    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "X - Erase the vector" << endl;
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
            
        } else if (selection == 'A' || selection == 'a') {
            int num_to_add {};
            cout << "Enter an integer to add to the list: ";
            cin >>  num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " Added " << endl;
            
        } else if (selection == 'M' || selection == 'm') {
             if (numbers.size() == 0)
                 cout <<"[] - the list is empty" << endl;
             else {
                 int total {};
                 for (auto num: numbers)
                     total += num;
                 cout << "The mean is: " << static_cast<double>(total)/numbers.size() << endl;
             } 
             
        } else if (selection == 'S' || selection == 's') {
            if (numbers.size() == 0)
                 cout <<"[] - the list is empty" << endl;
            else {
                int smallest  = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
            
        } else if (selection == 'L' || selection == 'l') {
            if (numbers.size() == 0)
                 cout <<"[] - the list is empty" << endl;
            else {
                int largest  = numbers.at(0);
                for (auto num: numbers)
                    if (num > largest)
                        largest = num;
                cout << "The smallest number is: " << largest << endl;
            } 
            
        //ERASE DATA    
        } else if (selection == 'X' || selection == 'x') {
            if (numbers.size() == 0)
                 cout <<"[] - the list is already empty" << endl;
            else {
                cout << "Are you sure you want to erase the vector (Y/N) " << endl;
                
                char response{};
                cin >> response;
                switch (response){
                    case 'y': 
                    case 'Y':
                        numbers = {};
                        break;
                    
                    case 'n':
                    case 'N':
                        cout << endl;
                        break;
                    
                    default: cout << "Invalid choice:" << endl;
                }
            }
            
        } else if (selection == 'Q' || selection == 'q') {
            cout << "Bye" << endl;
        } else {
            cout << "Unknown selection" << endl;
        }
        
    } while (selection != 'q' && selection != 'Q');
    cout << endl;
    return 0;
    
}