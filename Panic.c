/*
    Realiza a sobreescrita de arquivos para evitar sua recuperação.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char opc;

    system("clear");

    system("echo Atenção: O comando será executado no diretório a seguir:;echo");
    system("pwd");
    printf("\n====================\n");
    printf("Prosseguir:      (P)\n");
    printf("Listar arquivos: (L)\n");
    printf("Cancelar:        (C)\n");
    printf("====================");
    printf("\n\nO que deseja fazer? (P/L/C): ");
    scanf("%s",&opc);

    if (opc == 'p' || opc == 'P'){
        system("shred *.* -f -u -v -n 5");
    }else if (opc == 'c' || opc == 'C'){
        printf("\nOperação cancelada pelo usuário!\n");
    }else if (opc == 'l' || opc == 'L'){
        system("clear; echo Arquivos do Diretório:; ls");
        printf("\nProsseguir com a exclusão? (Y/N): ");
        scanf("%s",&opc);

        if (opc == 'y' || opc == 'Y'){
            system("shred *.* -f -u -v -n 5");
        }else if (opc == 'n' || opc == 'N'){
            printf("\nOperação cancelada pelo usuário!\n");
        }else{
            printf("\nOpção Inválida - Por segurança a operação foi cancelada!\n");
        }
    }
    else{
        printf("\nOpção Inválida - Por segurança a operação foi cancelada!\n");
    }
}