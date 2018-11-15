#include <iostream>
using namespace std;

int main() {
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
    dreieck *re = new dreieck;

    cout << "Ankathete: " << re->ankathete << endl;

    delete re;

    cout << "Ankathete: " << re->ankathete << endl;

}
