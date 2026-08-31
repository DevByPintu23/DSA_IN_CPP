#include <iostream>
using namespace std;

void pintu(int n) {
    cout << "pintu" << endl;
    if(n==0) return;
    pintu(n-1);
}
int main() {
    pintu(3);
    

   
}