#include "autenticador.h"
 
int ValidaSenha(char senha[tam]){
 
    char a = ' ', b = ' ', c = ' ';
    int result = 0, i;
    for(int i=0; i<strlen(senha); i++)
    {
        //verifica se tem uma letra maiuscula, minuscula ou um numero na senha
        if(senha[i]>='a' && senha[i]<='z')
        {
            a=senha[i];
        }
        if(senha[i]>='A' && senha[i]<='Z')
        {
            b=senha[i];
        }
        if(senha[i]>='0' && senha[i]<='9')
        {
            c=senha[i];
        }
    }
 
    if(a != ' ')
    {
        if(b != ' ')
        {
            if(c != ' ')
            {
                //retorna 1 caso a senha tenha ao menos 1 numero, uma letra maiuscula e uma minuscula
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}
