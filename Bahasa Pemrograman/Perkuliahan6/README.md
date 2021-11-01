Penjelasan Source 1 
#include <iostream>

using namespace std;

void Fibonaci (int N);
main (){
    int N;
    long hasil;
    cout<<"Masukan batas akhir dari bilangan fibonaci : ";cin>>N;
    Fibonaci(N);
    cout<<endl;
}
void Fibonaci (int N)
{
 long fib0=0, fib1=1, fib;
 cout<<"Nilai Fibonaci "<<fib0<<" ";
 while (fib0<= N/2)
 {
 fib=fib0+fib1;
 fib0=fib1;
 fib1=fib;
 cout<<fib1<<" ";
 }
}

Program ini di jalankan untuk menghitung nilai bilangan fibonaci. Fibonacci (Deret angka Fibonacci) adalah deret angka yang diperoleh dengan menjumlahkan dua angka sebelumnya dengan awalan angka 0 dan dibatasi angka terakhirnya adalah 5 dalam program yang saya masukkan. Jadi output nya 0, 1, 2, 3, 5 dengan cara hitung yaitu : 0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, dan 2 + 3 = 5.

Penjelasan Source 2 
#include<iostream>

using namespace std;

long int faktorial (int A);
int main(){
    int r,hasil;
    cout<<"MENGHITUNG NILAI FAKTORIAL DENGAN REKURSIF"<<endl;
    cout<<endl;
    cout<<"Masukan Nilai = ";
    cin>>r;
    
    hasil=faktorial(r);
    cout<<"Faktorial "<<r<<"!= "<<hasil<<endl;
}
long int faktorial (int A){
    if (A==1)
    return(A);
    else
    return (A*faktorial(A-1));
}

Program ini di jalankan untuk menghitung nilai factorial serta menggunakan fungsi rekrusif. Rekursif adalah salah satu metode dalam dunia matematika dimana definisi sebuah fungsi mengandung fungsi itu sendiri. Bilangan selain 0, jika dipangkatkan dengan 0 nilainya sama dengan 1. Jika x dipangkatkan dengan y, dengan y lebih dari 0, maka hasilnya sama dengan x dikalikan dengan x dipangkatkan y – 1.