#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


  int main(){
    char nome[50];
    char sexo, ensino, curso, exp, disp, ele;
    int idade;
    bool vagaEncontrada = false;


    printf("SEJA BEM VINDO A LINKJOBS \n");
    printf("FACA O CADASTRO E VEJA AS VAGAS COMPATIVEIS COM O SEU PERFIL \n");

    printf("\n");

    printf("DIGITE O SEU NOME: ");
    ler_texto(nome, 50);

    printf("\n");

    printf("DIGITE A SUA IDADE: ");
    scanf("%d", &idade);

    printf("\n");

    printf("DIGITE O SEU GENERO: F - FEMININ0, M - MASCULINO \n");
    limpar_entrada();
    scanf("%c",&sexo);

    printf("\n");

    printf("VOCE TEM ENSINO MEDIO COMPLETO?: S - SIM, N - NAO \n");
    limpar_entrada();
    scanf("%c", &ensino);

    printf("\n");

    printf("VOCE FAZ CURSO DE INFORMATICA?: S - SIM, N - NAO \n");
    limpar_entrada();
    scanf("%c", &curso);

    printf("\n");

    printf("VOCE TEM CURSO DE ELETRICISTA?: S - SIM, N - NAO \n");
    limpar_entrada();
    scanf("%c", &ele);

    printf("\n");

    printf("VOCE TEM DISPONIBILIDADE PARA VIAGEM ?: S - SIM, N - NAO \n");
    limpar_entrada();
    scanf("%c", &disp);

    printf("\n");

    printf("VOCE TEM EXPERIENCIA EM SERVICOS GERAIS ?: S - SIM, N - NAO \n");
    limpar_entrada();
    scanf("%c", &exp);


    if ((sexo == 'F' || sexo == 'M') && idade >= 18 && ensino == 'S' && curso == 'S'){
        printf("ENCONTRAMOS UMA VAGA: ");

        printf("\n");

        printf("VAGA 1: EMPRESA: ADM Solutions");

        printf("\n");

        printf("WhatsApp para Contato:(98)8475-28394");

        printf("\n");

        printf("Email para envio de Curriculo: adm@admsolutions.com.br");

        vagaEncontrada = true;
    }

    printf("\n");

    if (sexo == 'M' && idade >= 25 && ele == 'S'){
        printf("ENCONTRAMOS UMA VAGA: ");

        printf("\n");

        printf("VAGA 2: EMPRESA: HS ELETRICA");

        printf("\n");

        printf("WhatsApp para Contato:(97)8374-92455");

        printf("\n");

        printf("Email para envio de Currriculo: hseletronic@gmail.com");

        vagaEncontrada = true;
    }

    printf("\n");

    if (sexo == 'F' && idade >= 18 && disp == 'S'&& exp == 'S') {
        printf("ENCONTRAMOS UMA VAGA: ");

        printf("\n");

        printf("VAGA 4: EMPRESA: HAIRSTYLO");

        printf("\n");

        printf("WhatsApp para Contato:(95)8238-49293");

        printf("\n");

        printf("Email para envio de Curriculo: hairstylo@gmail.com");

        vagaEncontrada = true;
    }
    if (! vagaEncontrada){
        printf("NENHUMA VAGA FOI ENCONTRADA");
    }

  }
