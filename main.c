#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pontosPlayer1, pontosPlayer2;

    char escolha, player1[10], player2[10];
    char sair = '0';

        escolha = '0';

        sair = '1';
        pontosPlayer1, pontosPlayer2 = 100;


        printf("Para sair do programa a qualquer momento escreva SAIR,\n Apos cada numero tecle <ENTER>.\nBom jogo!\n");
        printf("\nNome do seu lutador:  ");
        gets(player1);
        printf(player1);
        printf(" ao seu dispor\n");
        printf("Nome do seu oponente:  ");
        gets(player2);
        printf("O combate vai comecar, pressione ENTER! \n");


        printf("%s Vs. %s", player1, player2);

        while (sair == '1')
        {
                printf("\nAtualmente %s tem %d hp\n", player2, pontosPlayer2);
                printf("Atualmente %s tem %d hp\n", player1, pontosPlayer1);

                printf("Que ataque pretende?\n");

                printf("(1) Eruption - Elemento: Fogo => Força de ataque: Retira 3 de HP\n");

                printf("(2) Water Pulse - Elemento: Água => Força de ataque: Retira 5 de HP\n");

                printf("(3) Earth Power - Elemento: Terra => Força de ataque: Retira 9 de HP\n");

                printf("(4) Air Slash - Elemento: Ar => Força de ataque: Retira 4 de HP\n");

                printf("numero referente ao ataque que pretende fazer\n");


                scanf("%s", &escolha);

                switch (escolha)
                {
                    case '1':
                            printf("Escolheu o ataque Eruption");
                            pontosPlayer2 -= pontosPlayer2 - 3;
                            printf("Fez um dano de 3 e o %s ficou com %d Pontos", player2, pontosPlayer2);
                            break;
                    case '2':
                            printf("Escolheu o ataque Water Pulse");
                            pontosPlayer2 = pontosPlayer2 - 5;
                            printf("Fez um dano de 5 e o %s ficou com %d Pontos", player2, pontosPlayer2);
                            break;
                    case '3':
                            printf("Escolheu o ataque Earth Power");
                            pontosPlayer2 = pontosPlayer2 - 9;
                            printf("Fez um dano de 9 e o %s ficou com %d Pontos", player2, pontosPlayer2);
                            break;
                    case '4':
                            printf("Escolheu o ataque Air Slash");
                            pontosPlayer2 = pontosPlayer2 - 4;
                            printf("Fez um dano de 4 e o %s ficou com %d Pontos", player2, pontosPlayer2);
                            break;
                }

                //AQUI SERIA O CPU QUE GERAVA UM NUMERO PARA O ATAQUE

                printf("\nCarregue enter para que o oponente possa atacar...\nAtaque:");
                scanf("%s", &escolha);
                printf("Opcao do oponente de ataque...");

                switch (escolha)
                {
                    case '1':
                            printf("O seu oponente atacou-o com o Eruption\n");
                            pontosPlayer1 = pontosPlayer1 - 3;
                            printf("O oponente fez um dano de 3 e o %s e voce ficou com %d Pontos", player1, pontosPlayer1);
                            break;
                    case '2':
                            printf("O seu oponente atacou-o com o Water Pulse\n");
                            pontosPlayer1 = pontosPlayer1 - 5;
                            printf("O oponente fez um dano de 5 e o %s e voce ficou com %d Pontos", player1, pontosPlayer1);
                            break;
                    case '3':
                            printf("O seu oponente atacou-o com o  Earth Power\n");
                            pontosPlayer1 = pontosPlayer1 - 9;
                            printf("O oponente fez um dano de 9 e o %s e voce ficou com %d Pontos", player1, pontosPlayer1);
                            break;
                    case '4':
                            printf("O seu oponente atacou-o com o Air Slash\n");
                            pontosPlayer1 = pontosPlayer1 - 4;
                            printf("O oponente fez um dano de 4 e o %s e voce ficou com %d Pontos", player1, pontosPlayer1);
                            break;
                }
            printf("\n0 - para sair ou 1 - para continuar:  ");
            scanf("%s", &sair);
        }
        printf("Ganhou!");
    return 0;
}
