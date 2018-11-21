#include <iostream>
using namespace std;
// namespace eins
namespace eins {
    void func(){
        cout << "Im ersten Namespace" << endl;
    }
}
// namespace zwei
namespace zwei {
    void func() {
        cout << "Im zweiten Namespace " << endl;
    }
}

void myNamespace() {

    eins::func(); //im ersten Namespace
    zwei::func(); //im zweiten Namespace

    double zahl = -123;
    cout.width(6); // alternative zu cout << setw(6)
    cout.fill('*'); // alternative zu cout << setfill(‘*‘)
    cout << internal  << zahl << endl ; //Ausgabe -123**

    double *c;
    double* p;
    c = &zahl;
    p = c;
    cout << internal  << c << endl ; //Ausgabe -123**
    cout << internal  << *c << endl ; //Ausgabe -123**
    cout << internal  << *p << endl ; //Ausgabe -123**
}


