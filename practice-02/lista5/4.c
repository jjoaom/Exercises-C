/*
4. Peça ao usuário que crie uma senha. Utilize um para armazenar a senha. Valide se a senha
atende aos critérios de segurança, como ter pelo menos 8 caracteres, conter pelo menos uma
letra maiúscula, uma letra minúscula, um número e um caractere especial. Imprima se a senha é
válida ou não

Descrição: a função tem por objetivo criar uma senha e verificar se ela é válida
Entrada: senha[]
Saída: printf
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//biblioteca com as funções que verificam o numero
#include <ctype.h> 

void validarSenha(char senha[]){
    //validações de itens para senha segura
    int senhaValida=0;
    int numero =0,caractere=0,maiuscula=0,minuscula=0;
    for(int i = 0; i < strlen(senha); i++) {
        if(isdigit(senha[i])) {
            //verifica se tem numero
            numero = 1;
        } else if(isupper(senha[i])) {
            //verifica se tem maiuscula
            maiuscula = 1;
        } else if(islower(senha[i])) {
            //verifica se tem minuscula
            minuscula = 1;
        } else if(!isalnum(senha[i])) {
            //verifica se tem caractere
            caractere = 1;
        }
    }
    
    //se tiver tudo a senha é validada
    if(numero == 1 && caractere == 1 && maiuscula == 1 && minuscula == 1 && strlen(senha)>=8){
        printf("\nSenha valida.");
    }else{
        printf("\nSenha invalida.");
    }
}


int main()
{
    char senha[30];
    printf("Crie uma senha de até 8 caracteres *deve conter uma letra maiuscula, uma minuscula, um numero e um caractere especial:");
    fgets(senha, sizeof(senha), stdin);
    printf("A senha digitada = %s",senha);
    
    validarSenha(senha);
    
    return 0;
}