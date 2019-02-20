#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

// TODO (1): #include directives and namespace statement here

int main() {
    const string LINE = "--------------------";
    const int ROWS = 4;
    const int COLS = 13;
    // TODO (2): declare variables here
    
    
    string choice;
    int i = 0;
    int j= 0;
    
    int count = 0;
    
    // TODO (3): prompt user for matchword; read in the value
    cout << "Enter match word ('.' for match all): " << endl;
    cin >> choice;
    // TODO (4): consider declaring and initializing additional variables
    string listRank[13] = {"Ace","Two","Three","Four","Five","Six", "Seven","Eight","Nine","Ten","Jack","Queen","King"};
    
    string listSuits[4] = {"Clubs", "Hearts", "Spades", "Diamonds"};
    
    
    // TODO (5): start output with a line
    cout << LINE << endl;
    
    
    // TODO (6): outer loop ..... ///[0...3] 0 => suitName = "Clubs", 1=> suitName = "Hearts", ...
    for (i = 0; i < ROWS; ++i)
    { for (j = 0; j < COLS; ++j) {
        if(choice ==  listSuits[i])
        {
            cout << listRank[j] << " of " << choice << endl;
            ++count;
        }
        else if (choice == listRank[j]) {
            cout << choice << " of " << listSuits[i];
            cout << endl;
            ++count;
        }
        else if (choice == ".") {
            cout << listRank[j] << " of " << listSuits[i];
            cout << endl;
            ++count;
        }
    }
        
    }
    if (count == 0){
        cout << "(no matches)" << endl;
    }
    
    cout << LINE << endl;
    // TODO (8): should we print the card name?  (Does the match word equal the suit name OR the rank name?)
    
    // }
    // }
    
    // TODO: (9) output (no matches) if nothing matched
    
    // TODO: (10) finish output with a line
    
    return 0;
}




