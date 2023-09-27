#include <stdio.h>
#include <string.h>
#include <cs50.h>


typedef struct
{
    char* cont;
    char* datar;
    char* croqui;
    char* nome;
    char* setor;
    char* datad;
    char* ass;
}
re;

int main (void)
{
    re emp [3];
    emp [0].cont = "1";
    emp [0].datar = "21 set 2024";
    emp [0].croqui = "300381";
    emp [0].nome = "Glaucy";
    emp [0].setor = "sic";
    emp [0].datad = "22 set 2023";
    emp [0].ass = "Glaucy";

    emp [1].cont = "2";
    emp [1].datar = "21 set 2024";
    emp [1].croqui = "100201";
    emp [1].nome = "Fabio";
    emp [1].setor = "si";
    emp [1].datad = "22 set 2023";
    emp [1].ass = "Glaucy";
    
    emp [0].cont = "3";
    emp [0].datar = "12 set 2024";
    emp [0].croqui = "300387";
    emp [0].nome = "Glaucy";
    emp [0].setor = "sic";
    emp [0].datad = "22 set 2023";
    emp [0].ass = "Glaucy";


    FILE *file = fopen("Controle de empréstimo.csv", "w");

    if (file == NULL)
    return 1;

    int j;

    for(j = 0; j < 2; j++)
    {
        fprintf(file,"%s %s %s %s %s %s %s\n", emp[j].cont, emp[j].datar, emp[j].croqui, emp[j].nome, emp[j].setor, emp[j].datad, emp[j].ass);
    }
    fclose(file);
}

