#include <stdio.h>
#include "questao02.h"


void entrada02(float *salBruto){

    printf("Digite o salario: ");
    scanf("%f", salBruto);

}

void processamento02(float *salBruto, float *saida){

    if (salBruto < 2000){

        *saida = ((*salBruto)* 0.9);
    }
    else{
        *saida =  ((*salBruto) * 0.8);
    }
}

void saida02(float saida){

    printf("O salario liquido e: %.2f", saida);
}

void questao02(void){

    float salarioBruto;
    float res;

    entrada02(&salarioBruto);
    processamento02(&salarioBruto, &res);
    saida02(res);

}
