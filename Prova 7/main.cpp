#include <iostream>
#include <locale>

using namespace std;

float  area (float numA, int numB)
{
    int resultado;
    resultado = numA*numB;
    return resultado;
}

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num1, total, quanti, result, resul2;
    int i;

    cout << "Quantos comodos t�m no Im�vel: ";
    cin >> quanti;
    cout << endl << endl;

    for (i = 1; i <= quanti; i++)
    {
       cout << "Digite a largura do c�modo " << i << ":";
       cin >> result;
       cout << "Digite o comprimento do c�modo " << i << ":";
       cin >> resul2;
       cout << endl << endl;
       total = area(result, resul2);
       cout << "O c�modo possui " << total << " de constru��o" << endl << endl << endl;
    }
    return 0;
}
