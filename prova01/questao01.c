#include <stdio.h>
#include "quertao01.h"


void entrada01(float *r){

    printf("Digite o valor do raio: ");
    scanf("%f", r);

}

void processamento01(float *r, float *saidaPerimetro, float *saidaVolume, float *saidaDiametro, float *saidaArea){


    //perimetro

    *saidaPerimetro = (2 * 3.14) * (*r);

    //volume

    *saidaVolume = ((4/3) * 3.14) * ((*r) * (*r) * (*r));

    // diametro

    *saidaDiametro = 2 * (*r);

    //area

    *saidaArea = ((*r) * (*r) * 3.14);

}

void saida01( float saidaPerimetro, float saidaVolume, float saidaDiametro, float saidaArea){

    printf("Perimetro: %.2f\n", saidaPerimetro);
    printf("Volume: %.2f\n", saidaVolume);
    printf("Diametro: %.2f\n", saidaDiametro);
    printf("Area: %.2f\n", saidaArea);
}

void questao01(void){

    float raio;
    float resPerimetro;
    float resDiametro;
    float resArea;
    float resVolume;

    entrada01(&raio);
    processamento01(&raio, &resPerimetro, &resVolume, &resDiametro, &resArea);
    saida01(resPerimetro, resVolume, resDiametro, resArea);

}


