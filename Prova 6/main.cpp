#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num1[5];
    int num2[5];
    int num3[5];

    int i, result;

    for (i = 1; i <= 5; i++)
    {
        cout << "Digite o valor da posi��o " << i << " do vetor A: ";
        cin >> num1[i];
        cout << endl;
    }
    cout << endl << endl;

    for (i = 1; i <= 5; i++)
    {
        cout << "Digite o valor da posi��o " << i << " do vetor B: ";
        cin >> num2[i];
        cout << endl;
    }
    cout << endl << endl;

    for (i = 1; i <= 5; i++)
    {
        result = num1[i] + num2[i];
        cout << " A soma dos vetores �: " << result << endl;
    }
    return 0;
}
