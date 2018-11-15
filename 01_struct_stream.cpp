/*
 * ausgabe.cpp
 *
 *  Created on: Apr 28, 2015
 *      Author: Herbert Pichler
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/*! check input
*
*/
int checkInt(){
    int tmp;
    cin  >> tmp;
    while(cin.fail()){
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Falsche Eingabe:";
        cin  >> tmp;
    }
    return tmp;
}

double checkdouble(){
    double tmp;
    cin  >> tmp;
    while(cin.fail()){
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Falsche Eingabe:";
        cin  >> tmp;
    }
    return tmp;
}

struct artikel{
    int nummer =0;
    int anzahl = 0;
    double preis = 0.0;
    string name = "";
};

//main
int main()
{
    /*long   nummer = 0;
    int    anzahl = 0;
    double preis  = 0.0;
    string name = "" ;
       */
    int num = 0;
    float sum = 0;
    artikel art[5];
    cout << "Wie viele Artikel moechten Sie eingeben?"<<endl;
    cin >> num;
    if (num > 4){
        cout << "max. 5" << endl;
        num = checkInt();
    }
    for(int i = 0; i < num; i++){

        // Eingabe:
        cout << "\nBitte Artikeldaten Nr: " << i+1 << " eingeben.\n";

        cout << "Artikelnummer:\t";

        art[i].nummer = checkInt();

        cout << "Artikelname:\t";
        cin  >> art[i].name;

        cout << "Stueckzahl:\t";

        art[i].anzahl = checkInt();
        cout << "Stueckpreis:\t";
        art[i].preis = checkdouble();

    }
    // Ausgabe der Artikel:

    cout    << setprecision(16)<< setw(16)<<setiosflags(ios::left)<<"Artikelnummer:" << setw(16)<<"Artikelname:"
            << setw(16)<< "Stueckzahl:" << setw(16) <<"Stueckpreis" << setw(16) << "Warenwert" <<endl;
    for(int i = 0; i < num; i++){
        cout  << resetiosflags(ios::left)
              << setprecision(16)<< setiosflags(ios::left)
              << setw(16)  << art[i].nummer
              << setw(16) << art[i].name
              << setw(16) << art[i].anzahl
              << fixed << setprecision(2)
              << setw(16) << art[i].preis
              << setw(14) << art[i].anzahl * art[i].preis << endl;
    }
    for ( int i = 0; i < num; i++){
        sum += art[i].preis*art[i].anzahl;
    }
    cout  << setw(15) << "\t\t\t\t\t\t\t Summe: " << sum << endl ;
    return 0;

}



