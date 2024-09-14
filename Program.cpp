#include <iostream>
#include <ctime>
using namespace std;

int main (){
    time_t waktusekarang= time (nullptr);
    char stringwaktu [100];
    strftime (stringwaktu ,sizeof (stringwaktu), "%Y-%M-%D %H-%M-%S",localtime(&waktusekarang));
    cout << "Jam WIB :"<< stringwaktu << endl;
    cout << "Jarak dari kedua angka "<< endl;
    int a,b;
    cout << "Masukkan angka pertama :" << endl;
    cin >> a ;
    cout << "Masukkan angka kedua :"<< endl;
    cin >> b;
    if (a<b){
        cout <<"Jarak :"<< b-a << endl;
        
    }else if (a>b) {
        cout << "Jarak :"<< a-b << endl;
    }else {
        cout <<"Jarak :" << a-b<< endl;
    }
}