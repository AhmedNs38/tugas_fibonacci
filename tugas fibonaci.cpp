#include <iostream>
#include <conio.h>
using namespace std;

//Mendeklarasikan fungsi fibonaccinya
int Fibonacci(int n);

int main(){
	int angka,hasil;
	//Masukkan angka deret fibonacci
	cout<<"Masukan Fibonacci ke : "; cin>>angka;
	hasil=Fibonacci(angka);
	
	//Menampilkan hasil
	cout<<"Hasilnnya : "<<hasil; getch();
}

int Fibonacci(int n){
	//Memfilter urutan 0 dan 1
	if(n == 0||n == 1){
		//Mengembalikan nilai sendiri
		return n;
	}
	//Rekursif untuk mencari bilangan fibonacci
	else{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}
