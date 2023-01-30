#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout <<"Ingrese número entre 1 y 10: ";
    cin >> num;
    if (num > 0 && num <= 10)
    {
        cout <<"Entrada aceptada" << endl;
    }
    else
    {
        cout <<"Error: Número no aceptable."
        << endl;

        return 1;
    }
    return 0;
}