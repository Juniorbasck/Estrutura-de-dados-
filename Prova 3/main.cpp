#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");

    char opcao;
    int n1, n2, soma, subtrair, dividir, multiplicar;

    cout << "Escolha uma das Op��es: " << endl;
    cout << "1 - para SOMAR" << endl;
    cout << "2 - para SUBTRAIR" << endl;
    cout << "3 - para DIVIDIR " << endl;
    cout << "4 - para MULTIPLICAR" << endl;
    cout << "5 - para SAIR" << endl << endl;
    cout << "Informe a op��o Desejada: ";
    cin >> opcao;
    cout << endl << endl << endl;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << endl;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;
    cout << endl;


    switch(opcao)
    {
        case '1':
          soma = n1 + n2;
          cout << "A soma � " << soma << endl;
        break;
        case '2':
          subtrair = n1 - n2;
          cout << " A subtra��o � " << subtrair << endl;
        break;
        case '3':
          dividir = n1/n2;
          cout << "A divis�o � " << dividir << endl;
        break;
        case '4':
          multiplicar = n1*n2;
          cout << "A multiplica��o � " << multiplicar << endl;
        break;
        default:
          cout << " Op��o invalida!!!" << endl;
        break;
    }

    return 0;
}
