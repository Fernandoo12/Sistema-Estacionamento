#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int entrada, minuto_entrada, saida, minuto_saida, tempo, minutos_restantes, horas;
    int incrementos, intervalos;
    int valor_15_minutos = 5; // Valor por cada 15 minutos completos no estacionamento.
    double troco, valor_recebido, valor;
    int opcao, opcaotolerancia;
    int tolerancia;
    
printf("Digite a hora de entrada:\n");
scanf("%d:%d", &entrada, &minuto_entrada);

printf("Digite a hora de saida:\n");
scanf("%d:%d", &saida, &minuto_saida);
printf("\n");
tempo = (saida - entrada) * 60 + (minuto_saida - minuto_entrada);
system("cls");

        printf("1 - Tolerancia\n");
        printf("2 - Sem tolerancia\n\n");
         scanf("%d", &opcaotolerancia);
        if(opcaotolerancia == 1){
            system("cls");
        printf("Digite o tempo de tolerancia: ");
        scanf("%d", &tolerancia);
        tempo = (tempo - tolerancia);
}

    horas = (tempo / 60);
    minutos_restantes = tempo % 60;
    printf("[-----------------------------------------------------]\n");
    printf("     Tempo estacionado e de %d hora(s) e %d minutos.\n", horas, minutos_restantes);
    printf("[-----------------------------------------------------]\n\n\n");
    intervalos = (tempo / 15); 
    valor = (intervalos * valor_15_minutos);
do{
printf("Selecione o metodo de pagamento:\n\n");
printf("1 - Dinheiro\n");
printf("2 - Cartao\n");
printf("3 - Pix\n");
printf("4 - Voltar\n");

if(scanf("%d", &opcao) != 1){
    printf("Opcao invalida! Por favor, digite um numero.\n");
        while(getchar() != '\n'); // Limpar o buffer de repetição.
        continue;    
}

    switch(opcao){
        case 1:
        system("cls");
        printf("\n          Forma de pagamento: DINHEIRO\n\n");
        printf("----------------------------------------------------\n");
        printf("       O valor a ser pago sera de: R$%.2lf.\n", valor);
        printf("----------------------------------------------------\n\n");
    printf("Digite o valor que o cliente pagou.\n"); // É necessario utilizar o ponto ao invés da virgula.

    scanf("%lf",&valor_recebido);
    troco = (valor_recebido - valor);
printf("\n");
    printf("O troco sera de R$%.2lf.\n", troco);
       system("pause");
   break;
   case 2:
        system("cls");
        printf("\n          Forma de pagamento: CARTAO\n\n");
        printf("----------------------------------------------------\n");
        printf("       O valor a ser pago sera de: R$%.2lf.\n", valor);
        printf("----------------------------------------------------\n\n");
        system("pause");
           break;
           case 3:
                system("cls");
                printf("\n          Forma de pagamento: PIX\n\n");
                printf("----------------------------------------------------\n");
                printf("       O valor a ser pago sera de: R$%.2lf.\n", valor);
                printf("----------------------------------------------------\n\n");

                system("pause");
                break;
                case 4:
                    system("cls");
                    printf("Em desenvolvimento...\n");
                    system("pause");
        
   default:
   printf("Opcao invalida! Por favor, digite um numero.\n");
    }
} while(opcao < 1 || opcao > 4);
return 0;
}
    