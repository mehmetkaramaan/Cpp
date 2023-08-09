// Online C++ compiler to run C++ program online

#include <iostream>
#include <string>
using namespace std;

int* createArray(size_t size,int initial_value=0){
    int* new_array {nullptr};
    new_array=new int[size];
    for(size_t i=0;i<size;i++){
        *(new_array+i)=initial_value;
    }
      return new_array;
}

void display(const int *const array,size_t size){
    for(size_t i=0;i<size;i++){
        cout<<array[i]<<" ";

    }

}


int main() {

    int *Array {nullptr};
    int size;
    int initial_value;

    cout<<"Array boyutunu giriniz: ";
    cin>>size;

    cout<<"\nInitial value: ";
    cin>>initial_value;

    Array=createArray(size,initial_value);
    display(Array,size);

    delete [] Array;
    return 0;
}
