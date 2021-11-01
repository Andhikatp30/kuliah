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