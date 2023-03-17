// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a[20];

int n;

void input() {

    while (true) {

        cout << "Masukan banyaknya elememt pada array :";


        cin >> n;

        // Deklarasi array a dengan ukuran 20

        // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

                // Procedure untuk input

           // Mengulangi

// Output ke layar

// Input dari pengguna

        if (n <= 20) // Jika
            break;
        else {

            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; // Output ke layar
        }
    }
}
cout << endl;

        
            cout << "===================" << endl;
            cout << "Masukan Elemen Array" << endl;
            cout << "===================" << endl;

            // Output baris kosong

            // Keluar ke layar

            // Keluar ke layar

            // Output ke layar

            for (int i = 0; i < n; i++) { // Looping dengan dimulai dari cout << "Data Ke-" << (i + 1) << ":"; // Output ke layar hingga n-1

                cout << "Data ke-" << (i + 1) << ": "
                    cin >> a[i];
            }
            // Input dari pengguna
            void display() {
                cout << endl;
                cout << "==================================" << endl;
                cout << "Element Array yang telah tersusun" << endl;
                cout << "==================================" << endl;
                for (int j = 0; j < n; j++) {
                    cout << a[j] << endl;
                }
                cout << endl;
            }

            void bubbleSortArray() {
                for (int i = 1; i < n; i++) {
                    for (int j = 0; j < n - i; j++) {
                        if (a[j] > a[j + 1]) {
                            int temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                        }
                    }
                }
            }
            int main() {
                input();
                bubbleSortArray();
                display();
                return 0;
             }
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
