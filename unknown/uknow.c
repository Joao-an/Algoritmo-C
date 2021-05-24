#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main ()
{
    FILE *pont_arq;
    FILE *senha_arq;
    int tamanho,i,resultado=0;
    int size_senha,size_diario,size_pass,size_passworld;
    char Diario[500];
    char senha[10];
    char pass[10]; 
    char passworld[10];
    
    
    
    if  (senha_arq = fopen("senha.txt", "r"))
    {
        senha_arq = fopen("senha.txt", "r");
        fgets(senha,8,senha_arq);
        fclose(senha_arq);
        printf("--------------------\n");
        printf("---Diario do Dark---\n");
        printf("--------------------\n");
        printf("Favor digitar a senha: \n"); 
        scanf("%s",pass);

        tamanho=strlen(senha);
        for (i=0; i<=tamanho;i++)
        {
            if (pass[i]==senha[i])
            {
                resultado++;
            }
        }
        resultado--;
        if (tamanho==resultado)
        {
            printf("Prazer Jhony, Seja bem vindo Novamente\n");
            pont_arq = fopen("Diario.txt", "a");
            if (pont_arq==NULL)
            {
                printf("Erro ao abrir arquivo\n");
                return 1;
            }
            
            printf("Descreva seu dia\n");
            scanf("%s",Diario);
            gets(Diario);
            tamanho=strlen(Diario);

            for(i=0; i < tamanho; i++)
            {  
                fputc(Diario[i], pont_arq);
            }
            fclose(pont_arq);
            printf("Dados gravados com sucesso\n\a");
            system("pause");
            return 0;    
        }
        else 
        {
            printf("Nao deveria estar aki, o Dark vai saber disso\n");
            system("pause");
        }
    }
    else
    {
        pont_arq = fopen("senha.txt", "w");
        printf("Favor declarar uma senha de 4 digitos\n");
        gets(passworld);
        tamanho=strlen(passworld);

        for(i=0; i < tamanho; i++)
        {  
            fputc(passworld[i], pont_arq);
        }
        fclose(pont_arq);
        return printf("Reabra o Aplicativo"); 
        system("pause");
    }
}