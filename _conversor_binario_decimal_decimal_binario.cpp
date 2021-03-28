// Copyright(c) 2021, Jonas Afonso.
// Reference W3School / Professor Marcos Pacheco Curso: Aprendendo programação básica e avançada com Linguagem C++ / Fórum CPLUSPLUS.COM

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

    do //O código irá fazer até o usuário permitir
    {
        std::cout << "\nQual conversor irá utilizar?\n";
        std::cout << "1 - Binário para Decimal\n";
        std::cout << "2 - Decimal - Binário \n";
        std::cout << "\nResposta: ";
        std::cin >> escolha;

        switch(escolha){ // O switch serve para pegar a escolha do usuário e apresentar o que foi escolhido

            case 1:

                std::cout << "\nQual é o valor em binário: ";
                std::cin >> entrada;

                auxiliar = entrada; // auxiliar serve para guardar o numero digitado pelo usuario e apresentar no final
                for(sequencial = 0; entrada > 0; sequencial++) // FOR (inicialização | condição | incremento)
                {
                    bdecimal = bdecimal + pow(2, sequencial)*(entrada % 10);
                    entrada /= 10;
                }

                std::cout << "\nO valor " << auxiliar << " em decimal é: " << bdecimal;

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

                    std::cout << "\nO valor " << auxiliar << " em binário é: ";

                    for(sequencial = sequencial - 1; sequencial >= 0; sequencial--) //serve para organizar o binário
                    {
                     std::cout << dbinario[sequencial];
                    }
                    break;

            default:

                std::cout << "\nOpção inválida!" << std::endl;
                break;
        }
        std::cout << "\nDeseja fazer outra conversão? (S para sim e N para não)" << std::endl;
        std::cin >> resposta;
    }while (resposta == 'S' || resposta == 's');

    system("PAUSE");
    return 0;
}
