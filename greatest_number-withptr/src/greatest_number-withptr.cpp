// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int *greatest(int *one , int *second){
    int *x {nullptr};
    if(*one>*second){
        x=one;
    }
    else {
        x=second;
    }
    return x;
}



int main() {

   int one {};
   int second{};
   int *x {nullptr};
   cout<<"iki sayidan en buyugunu bulunuz :"<<endl;
   cout<<"------------------------------------------------------------"<<endl;

   cout<<"ilk sayiyi giriniz :";
   cin>>one;

   cout<<"\nİkinci sayiyi giriniz :";
   cin>>second;

    x=greatest(&one,&second);
    cout<<"En buyuk sayi: "<<*x;
    return 0;
}
