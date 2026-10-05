#include <iostream>
using namespace std;

int main () {
    int Hari;
    cout<< "masukan hari"<<endl;
    cin>>Hari;
    string hari;
    switch (Hari)
    {
    case 1:
        hari = "senin";
        break;
    case 2:
        hari = "selasa";
        break;
    case 3:
        hari = "rabu";
        break;
    case 4:
        hari = "kamis";
        break;
    }

    cout << hari;

}