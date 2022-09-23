#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");

    char opcao;
    int n1, n2, soma, subtrair, dividir, multiplicar;

    cout << "Escolha uma das Opções: " << endl;
    cout << "1 - para SOMAR" << endl;
    cout << "2 - para SUBTRAIR" << endl;
    cout << "3 - para DIVIDIR " << endl;
    cout << "4 - para MULTIPLICAR" << endl;
    cout << "5 - para SAIR" << endl << endl;
    cout << "Informe a opção Desejada: ";
    cin >> opcao;
    cout << endl << endl << endl;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << endl;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << endl;


    switch(opcao)
    {
        case '1':
          soma = n1 + n2;
          cout << "A soma é " << soma << endl;
        break;
        case '2':
          subtrair = n1 - n2;
          cout << " A subtração é " << subtrair << endl;
        break;
        case '3':
          dividir = n1/n2;
          cout << "A divisão é " << dividir << endl;
        break;
        case '4':
          multiplicar = n1*n2;
          cout << "A multiplicação é " << multiplicar << endl;
        break;
        default:
          cout << " Opção invalida!!!" << endl;
        break;
    }

    return 0;
}
