#include <stdio.h>

int calcularImc(float peso, float altura){
    return peso /(altura*altura);
}

int main(){
    float peso,altura,imc;

    printf("Digite seu peso : ");
    scanf("%f",&peso);
    printf("Digite sua altura : ");
    scanf("%f",&altura);

    imc = calcularImc(peso,altura);

    printf("IMC : %.2f",imc);


}