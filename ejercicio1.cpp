#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "ingrese un numero: " << endl;
    cin >> x;

    int numero[x];
    int pares[x];
    int paresCount = 0;

    cout << "ingrese " << x << " numeros " << endl;
    
    for (int i = 0; i < x; i++)
    {
        cin >> numero[i];
        
        if (numero[i] % 2 == 0)
        {
            pares[paresCount] = numero[i];
            paresCount++;
        }
    }
        cout << "los numeros pares son: ";
        for (int i = 0; i < paresCount; i++)
        {
            cout << pares[i] << " ";
        }
        return 0;
}