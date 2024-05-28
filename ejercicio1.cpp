#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "ingrese tamano de arreglo en numeros: " << endl;
    cin >> x;

    int numero[x];
    int pares[x];
    int p = 0;

    cout << "ingrese " << x << " numeros " << endl;
    
    for (int i = 0; i < x; i++)
    {
        cin >> numero[i];
        
        if (numero[i] % 2 == 0)
        {
            pares[p] = numero[i];
            p++;
        }
    }
        cout << "El arreglo de pares son: ";
        for (int i = 0; i < p; i++)
        {
            cout << pares[i] << " ";
        }
        return 0;
}
