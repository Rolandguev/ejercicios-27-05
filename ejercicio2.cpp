#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "ingrese un numero: " << endl;
    cin >> x;

    int numeros[x];
    int impar[x];

    cout << "ingrese " << x << " numeros " << endl;

    for (int i = 0; i < x; i++)
    {
        cin >> numeros[i];

        if (numeros[i] % 2 != 0)
        {
            impar[i] = numeros[i];
        }
    }
    cout << "Los numeros impares son: ";
    for (int i = 0; i < x; i++)
    {
        if (impar[i] % 2 != 0)
        {
            cout << impar[i] << " ";
        }
    }
    return 0;
}