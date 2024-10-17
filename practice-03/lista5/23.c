/*7. Peça ao usuário que crie uma senha. Utilize vetores para armazenar a senha. Valide se a senha
atende aos critérios de segurança, como ter pelo menos 8 caracteres, conter pelo menos uma
letra maiúscula, uma letra minúscula, um número e um caractere especial. Imprima se a senha
é válida ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>



int main(){
    setlocale(LC_ALL,"Portuguese");
    char *senha = (char *)malloc(51 * sizeof(char));
    int sizeSenha = 0, minuscula=0,maiuscula=0,caractere=0,numero=0;

    if(senha == NULL){
        printf("Erro ao alocar memória");
        return 1;
    }

    printf("Crie sua senha: \n");
    printf("Min 8 caracteres\nMin 1 letra maiúscula\nMin 1 letra minúscula\nMin 1 número\nMin 1 caractere especial\n");
    fgets(senha,51,stdin);
    int tamanho = strlen(senha);
    if (senha[tamanho-1] == '\n')
    {
        senha[tamanho-1] = '\0';
        tamanho--;
    }

    if (tamanho > 8)
        {
            sizeSenha=1;
        }
    
    for (int i = 0; i < tamanho; i++)
    {
        if(isdigit(senha[i])){
            numero=1;
        }else if(isupper(senha[i])){
            maiuscula=1;
        }else if(islower(senha[i])){
            minuscula=1;
        }else if(ispunct(senha[i])){
            caractere=1;
        }
    }
    if (sizeSenha && minuscula && maiuscula && caractere && numero)
    {
        printf("Senha válida.");
    }else{
        printf("Senha inválida.");
    }
    
    

    free(senha);
    return 0;
}