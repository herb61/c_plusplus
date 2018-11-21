//
// Created by Herbert on 21.11.2018.
//
#include <iostream>       // std::cout
#include <stack>          // std::stack


void myFunc(int a, int* b){
    int value = 10;
    int result = value*a;
    *b = result;
}


struct Rechteck{
    int laenge;
    int breite;
};
int main(){

    Rechteck* r = new Rechteck;
    r->breite= 12;
    (*r).laenge = 20;
    double flaeche = r->breite * r->laenge;
    std::cout <<  r->breite * r->laenge << std::endl;
    int local = 2;
    int* ptr = &local;

    myFunc(local, ptr);

    std::cout << local << " " << *ptr << std::endl;
        return 0;
}

