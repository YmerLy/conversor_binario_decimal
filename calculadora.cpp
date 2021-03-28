#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("COLOR 17");
    int entrada;
    int escolha;
    char resposta;

    int auxiliar, bdecimal = 0, sequencial;
    int dbinario[8];

    do //O c�digo ir� fazer at� o usu�rio permitir
    {
        std::cout << "\nQual conversor ir� utilizar?\n";
        std::cout << "1 - Bin�rio para Decimal\n";
        std::cout << "2 - Decimal - Bin�rio \n";
        std::cout << "\nResposta: ";
        std::cin >> escolha;

        switch(escolha){ // O switch serve para pegar a escolha do usu�rio e apresentar o que foi escolhido

            case 1:

                std::cout << "\nQual � o valor em bin�rio: ";
                std::cin >> entrada;

                auxiliar = entrada; // auxiliar serve para guardar o numero digitado pelo usuario e apresentar no final
                for(sequencial = 0; entrada > 0; sequencial++) // FOR (inicializa��o | condi��o | incremento)
                {
                    bdecimal = bdecimal + pow(2, sequencial)*(entrada % 10);
                    entrada /= 10;
                }

                std::cout << "\nO valor " << auxiliar << " em decimal �: " << bdecimal;

                break;

            case 2:
                    std::cout << "\nDigite o valor em decimal: ";
                    std::cin >> entrada;

                    auxiliar = entrada;
                    for(sequencial = 0;entrada > 0;sequencial++)
                    {
                        dbinario[sequencial] = entrada % 2;
                        entrada /= 2;
                    }

                    std::cout << "\nO valor " << auxiliar << " em bin�rio �: ";

                    for(sequencial = sequencial - 1; sequencial >= 0; sequencial--)
                    {
                     std::cout << dbinario[sequencial];
                    }
                    break;

            default:

                std::cout << "\nOp��o inv�lida!" << std::endl;
                break;
                return 0;

        }
        std::cout << "\nDeseja fazer outra convers�o? (S para sim e N para n�o)" << std::endl;
        std::cin >> resposta;
    }while (resposta == 'S' || resposta == 's');

    system("PAUSE");
    return 0;
}
