#include <stdio.h>
#include <string.h>
#include <cs50.h>


typedef struct
{
    string contador;
    string datar;
    string croqui;
    string nome;
    string setor;
    string datad;
    string ass;
}
re;

int main (void)
{
    re emp [500];
    emp [0].contador = "1";
    emp [0].datar = "21 set 2023";
    emp [0].croqui = "100201";
    emp [0].nome = "Glaucy";
    emp [0].setor = "sic";
    emp [0].datad = "22 set 2023";
    emp [0].ass = "Glaucy";
    
    
    FILE *file = fopen("Controle de empréstimo.csv", "a");
    
    if (file == NULL)
    return 1;
    
    fprintf(file, "%s, %s, %s, %s, %s, %s, %s\n", contador, datr, croqui, nome, setor, datad, ass);
    fclose(file);
    
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(emp[i].nome, "Glaucy") == 0)
        {
            printf("Encontrados: %s \n", emp[i].setor);
            return 0;
        }
    }
        printf("Não localizado \n");
        return 1;
}