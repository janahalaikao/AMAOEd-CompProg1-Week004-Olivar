#include <iostream>
using namespace std;

int main() {
    string sagot;

    cout << "Single ka pa ba: ";
    cin >> sagot;
    
    if (sagot == "Hindi") {
        cout << "Edi wow" << endl;
    } else {
        cout << "Okay" << endl;
    }
    return 0;
}