#include <iostream>
using namespace std;

int main() {
    double input,offset,tinggiAtap;
    string hasil = "";
    offset = 0;
    cin>>input;
    if(input <= 1){
        cout<<"Error, Input harus lebih dari 1";
    }
    else{
        if(static_cast<int>(input) % 2 == 0){
            tinggiAtap = input/2;
        }
        else{tinggiAtap = (input/2)+0.5;}
    }
    for(int vertikal = 1 ; vertikal <= static_cast<int>(input) ; vertikal++ ){
        for(int horizontal = 1 ; horizontal <= static_cast<int>(input) ; horizontal++){
            if(vertikal <= tinggiAtap){
                if(static_cast<int>(input) % 2 == 0){
                    if(horizontal >= (input/2)-offset && horizontal <= (input/2)+1+offset){
                        hasil += " * ";
                    }
                    else{hasil += " - ";}
                }
                else{
                    if(horizontal >= tinggiAtap-offset && horizontal <= tinggiAtap+offset){
                        hasil += " * ";
                    }
                    else{
                        hasil += " - ";
                    }
                }
            }
            else{
                if(horizontal == 1 || horizontal == input){
                    hasil += " | ";
                }
                else{
                    hasil += " * ";
                }
            }
        }
        hasil += "\n";
        offset = offset + 1;
    }
    cout<<hasil;
}