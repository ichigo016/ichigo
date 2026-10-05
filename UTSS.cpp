#include <iostream>
#include <string>

using namespace std;

// =================================================================
// PROGRAM 1: Array 2D Huruf (carbon 6.png)
// =================================================================
void program1() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 1 (Array 2D Huruf):" << endl;
    cout << "==========================================" << endl;

    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

// =================================================================
// PROGRAM 2: Pola Segitiga Angka (carbon 5.png)
// =================================================================
void program2() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 2 (Pola Segitiga Angka):" << endl;
    cout << "==========================================" << endl;

    int num1, nom2;
    for (int i = 7; i >= 1; i--) {
        for (int j = 1; j <= 7; j++) {
            if (j >= i) {
                cout << j << "\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// =================================================================
// PROGRAM 3: Penjumlahan N Angka (carbon 4.png)
// =================================================================
void program3() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 3 (Total N Angka):" << endl;
    cout << "==========================================" << endl;

    int totalnum;
    int curnum;
    int sum = 0;

    cout << "How many numbers? ";
    cin >> totalnum;
    for (int i = 1; i <= totalnum; i++) {
        cout << "Input your number: ";
        cin >> curnum;
        sum += curnum;
    }

    cout << "The total is " << sum << endl << endl;
}

// =================================================================
// PROGRAM 4: Jumlah Bilangan Genap di Antara 2 Angka (carbon 3.png)
// =================================================================
void program4() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 4 (Jumlah Genap Antara 2 Angka):" << endl;
    cout << "==========================================" << endl;

    int num1, num2;
    int sum = 0;

    cout << "Number1: ";
    cin >> num1;
    cout << "Number2: ";
    cin >> num2;

    for (int i = num1 + 1; i < num2; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum: " << sum << endl << endl;
}

// =================================================================
// PROGRAM 5: Konversi Nilai / Score Grading (carbon 2.png)
// =================================================================
void program5() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 5 (Grade Nilai):" << endl;
    cout << "==========================================" << endl;

    int points;
    cout << "Enter points (0-100): ";
    cin >> points;

    if (points <= 0 || points >= 100) { // Sesuai dengan gambar
        cout << "Points out of scope";
    } else {
        if (points <= 20) {
            cout << "Score = E";
        } else if (points <= 40) {
            cout << "Score = D";
        } else if (points <= 60) {
            cout << "Score = C";
        } else if (points <= 80) {
            cout << "Score = B";
        } else {
            cout << "Score = A";
        }
    }
    cout << endl << endl;
}

// =================================================================
// PROGRAM 6: Simulasi Penarikan ATM (carbon 1.png)
// =================================================================
void program6() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 6 (Simulasi Penarikan ATM):" << endl;
    cout << "==========================================" << endl;

    int Pin = 123;
    int Balance = 1000000;

    int enteredPin;
    int amount;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != Pin) {
        cout << "PIN does not match, program ends" << endl << endl;
        return;
    }

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount > 10000000) {
        cout << "Over daily limit! Program ends." << endl << endl;
        return;
    }

    if (amount > Balance - 50000) {
        cout << "Insufficient funds! Program ends." << endl << endl;
        return;
    }

    Balance = Balance - amount;
    cout << "Withdrawal complete, current balance: " << Balance << " IDR" << endl << endl;
}

// =================================================================
// PROGRAM 7: Konversi Desimal ke Biner & Biner ke Desimal (carbon 12.jpg)
// =================================================================
string decimalToBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int binaryToDecimal(string b) {
    return stoi(b, nullptr, 2);
}

void program7() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 7 (Konversi Desimal / Biner):" << endl;
    cout << "==========================================" << endl;

    int repeat = 1;

    while (repeat == 1) {
        cout << "[1] Decimal to binary\n";
        cout << "[2] Binary to decimal\n";

        int option;
        cout << "Input your option: ";
        cin >> option;

        if (option == 1) {
            int dec;
            cout << "Input your decimal: ";
            cin >> dec;
            cout << "Your binary is: " << decimalToBinary(dec) << "\n";
        } else if (option == 2) {
            string bin;
            cout << "Input your binary: ";
            cin >> bin;
            cout << "Your decimal is: " << binaryToDecimal(bin) << "\n";
        } else {
            cout << "Invalid option.\n";
        }

        cout << "Repeat? [0:No/1:Yes]: ";
        cin >> repeat;
    }

    cout << "\nProgram ends\n\n";
}

// =================================================================
// PROGRAM 8: Deret Fibonacci (carbon 11.png)
// =================================================================
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void program8() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 8 (Deret Fibonacci):" << endl;
    cout << "==========================================" << endl;

    int n_terms;
    cout << "Input number: ";
    cin >> n_terms;

    cout << "Fibonacci sequence:\n";
    for (int i = 0; i < n_terms; i++) {
        cout << fibonacci(i);

        if (i < n_terms - 1) {
            cout << ", ";
        }
    }
    cout << endl << endl;
}

// =================================================================
// PROGRAM 9: Rekursi Faktorial (carbon 9.png)
// =================================================================
int fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

void program9() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 9 (Hitung Faktorial):" << endl;
    cout << "==========================================" << endl;

    int result = fact(5) + fact(4);
    cout << "The result is " << result << endl << endl;
}

// =================================================================
// PROGRAM 10: Pemesanan Kursi Bioskop (carbon 10.jpg)
// =================================================================
void displaySeats(bool seats[5][10]) {
    cout << "---CINEMA SEAT LAYOUT---" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void bookTicket(bool seats[5][10]) {
    int position;
    cout << "Please book a ticket first by selecting a seat number (1 - 50): ";
    cin >> position;

    if (position >= 1 && position <= 50) {
        int row = (position - 1) / 10;
        int col = (position - 1) % 10;

        if (seats[row][col] == 0) {
            cout << "Sorry, this seat is already booked." << endl;
        } else {
            seats[row][col] = 0;
            cout << "Booking successful for seat number " << position << endl;
        }
    } else {
        cout << "Invalid seat number!" << endl;
    }
}

bool askBookingStatus() {
    string answer;
    cout << "Have you booked a ticket for a seat? (Y/N): " << flush;
    cin >> answer;

    if (answer == "Y" || answer == "y") {
        return true;
    }
    return false;
}

void program10() {
    cout << "==========================================" << endl;
    cout << "OUTPUT PROGRAM 10 (Pemesanan Kursi Bioskop):" << endl;
    cout << "==========================================" << endl;

    bool cinema_seats[5][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    cout << "---Welcome to XXXX Cinema---" << endl;
    bool hasBooked = askBookingStatus();

    if (hasBooked == false) {
        bookTicket(cinema_seats);
    } else {
        cout << "Enjoy the movie!" << endl;
    }
    displaySeats(cinema_seats);
    cout << endl;
}

// =================================================================
// FUNGSI UTAMA (MAIN)
// Menjalankan semua program secara berurutan
// =================================================================
int main() {
    program1();
    program2();
    program3();
    program4();
    program5();
    program6();
    program7();
    program8();
    program9();
    program10();

    return 0;
}