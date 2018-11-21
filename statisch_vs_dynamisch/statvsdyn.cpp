#include <iostream>
using namespace std;

void myStatic() {
    //static object
    struct dreieck{
        double gegenkathete = 12;
        double ankathete = 6;
        double hypotenuse = 18.5;

    };
//statisch stack
    dreieck r;

    cout << "Gegenkathete: " << r.gegenkathete << endl;

//dynamisch heap
    dreieck* re = new dreieck;

    cout << "Ankathete: " << re->ankathete << endl;
    (*re).ankathete = 1.0;
    //delete re;

    (*re).gegenkathete = 3.0;
    cout << "Ankathete: " << re->ankathete << endl;

    cout << "Landes" << "berufsschule " << 4 << " in" << " Salzburg" << endl;

    int myValue= 20;
    int share = 2;
    int &rMyValue = myValue;
    rMyValue += 5;
    (rMyValue) = 2;
    myValue += 10;
    rMyValue = share;
    cout << "Wert: " << myValue << endl;

}
