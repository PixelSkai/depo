#include <iostream>
using namespace std;

int fact(int);

int main(){
    int sayi;
    cout << "Faktoriyeli alinacak sayiyi giriniz..:";
    cin >> sayi;
    cout << "sonuc...:" << fact(sayi);
    cin.get();
    return 0;
}

int fact(int a){
    int carpim = 1;
    for(int i=1;i<=a;i++){
      carpim = carpim * i;
    }
    return carpim;
}
