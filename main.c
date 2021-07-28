/*3) Crie um programa 3.c que utiliza o seguinte módulo:
○ Autenticador (.c e .h)
■ Fornece a função validaSenha que recebe uma string de
tamanho máximo 20.
(1) Caso a string possua pelo menos 8 caracteres, onde
contém ao menos uma letra maiúscula, ao menos uma
letra minúscula e ao menos um número, deve-se retornar
o número 1
(2) Caso contrário, deve retornar o valor zero.
No programa principal 3.c, deve-se receber uma string de tamanho máximo
20 e verificar, a partir da função fornecida pelo módulo, se a string é válida ou não.
Caso esteja válida, deve-se exibir a mensagem “Senha cadastrada com
sucesso!” e finalizar a execução do programa. Caso contrário, deve-se exibir
“Senha mal formada! Digite a senha novamente: ” recebendo uma nova string
para validação.*/
 
#include "autenticador.h"
extern int ValidaSenha();
 
int main()
{
    char senha[tam];
    int resultado=0;
    puts("_____informe uma senha de no minimo 8 caracteres_____\n");
    puts("a senha deve contar ao menos uma letra maiuscula, minuscula e um numero");
    while(resultado!=1)
    {
        scanf("%[^\n]s",&senha);//le a string ate que seja dado \n
        getchar();//pega o buffer do teclado
        if(strlen(senha)>=8)
        {
            resultado = ValidaSenha(senha);
            if(resultado == 1)
            {
                printf("\n______Senha cadastrada com sucesso______\n");
            }
            else
            {
                printf("\n______Senha mal formada! Digite a senha novamente______\n");
            }
        }
        else{
            printf("______senha muito curta! Digite a senha novamente______\n");
        }
    }
}
