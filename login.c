#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){

char nome[20];
char senha[30];
char login[30];
printf("Digite um nome de usuario:\n");
gets(nome);
fflush(stdin);

printf("Crie uma senha:\n");
gets(senha);
fflush(stdin);
system("cls");

printf("\nOla %s, seja bem-vindo(a)!\n\n\n", nome);

do{
    printf("Digite sua senha:\n");
    gets(login);

if (strcmp(senha,login)){
    printf("Senha incorreta!\n\n");
}
}while(strcmp(senha,login));
{
    printf("Logado com sucesso!\n");
}
system("pause");
system("cls");

printf("Sistema (em andamento)\n");
system("pause");
return 0;
}
