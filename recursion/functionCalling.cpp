#include <iostream>
using namespace std;
// pintu();
// mintu()
// bittu();

void pintu() {
    cout << "pintu" << endl;
    bittu();
}

void bittu() {
    cout << "bittu" << endl;
    mintu();
}

void mintu() {
    cout << "mintu" << endl;
}

int main() {
    pintu();
    bittu();
    mintu();

   
}