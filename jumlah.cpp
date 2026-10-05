#include <iostream>
using namespace std;

int main () {
    int angka ;
    cin>> angka;
    int digit0 = angka/100;
    int digit1 = angka %100;
    int digit2 = digit1 %100/10;
    int digit3 = digit1 %10;
int hasil= digit0 + digit2 + digit3;
    cout<< hasil<< endl;
}