#include <iostream>
using namespace std;

void myPointer() {
    int reference_var = 10;
    int reference_array[] = {11,22,33,44,55};
    int pointer_var = 20;
    int pointer_array[]= {16,27,38,49,60};
    int my_var = 30;
    //Referenz
    int &reference = reference_var;
    int &r_array = *reference_array;
    //Pointer
    int* pointer = &pointer_var;
    int *p_array = pointer_array;
    //address
    cout << "reference_var: " << &reference_var << endl;
    cout << "pointer_var: " << &pointer_var << endl;
    cout << "r_array: " << &reference_array << endl;
    cout << "p_array: " << pointer_array << endl;
    cout << "my_var: " << &my_var << endl;
    //reference_pointer

    cout << "reference_var: " << reference_var << " reference: " << reference << " reference_address: " << &reference << endl;
    cout << "pointer_var: " << pointer_var << " pointer: " << *pointer << " pointer_address: " << pointer << endl;

    //calc with reference
    cout << "calc with reference" <<endl;
    reference+= 1;
    cout << "reference_var: " << reference_var << " reference: " << reference << " reference_address: " << &reference << endl;

    reference += 1;

    //calc with pointer
    cout << "calc with pointer" << endl;
    //pointer += 1;
    cout << "pointer_var: " << pointer_var << " pointer: " << *pointer << " pointer_address: " << pointer << endl;
    //*(pointer) += 1;
    cout << "pointer_var: " << pointer_var << " pointer: " << *pointer << " pointer_address: " << pointer << endl;

    //reference with arrays

    cout << "reference_array_0: " << reference_array[0] << " r_array_1: " << r_array + 1 << endl;

    //pointer with arrays

    cout << "pointer_array_0: " << pointer_array[0] << " p_array_1: " << p_array +1 << endl;

}