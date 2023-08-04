// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

void decyrpt(string word,int n){
    int i,j;
    string bds;
    string alphabet="ABCDEFGHIJKLMOPQRSTUVWXYZ";
    for (i=0;i<word.size();i++){
        for(j=0;j<=alphabet.size();j++){
            if(word[i]==alphabet[j]){
                if((26-j)>=n){
                    bds+=alphabet[j-n];
                }
                else {
                    bds+=alphabet[j-(26-n)];
                }
            }


        }
    }
     cout<<bds;
}

int main() {


    string word;
    int n;

    cout<<"Key: ";
    cin>>n;
    cout<<endl;

    cout<<"Decrypted message is: ";
    cin>>word;
    cout<<endl;

    decyrpt(word,n);
    return 0;
}
