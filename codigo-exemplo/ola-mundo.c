#include <stdio.h>

void classificarImc(float imc){

    printf("IMC: %.2f\n",imc);

    if(imc < 18.5)
        printf("Magreza");
    else if(imc < 24.9)
        printf("Saudavel");
    else if(imc < 29.9)
        printf("Sobrepeso");
    else if(imc < 34.9)
        printf("Obesidade 1");
    else if(imc < 39.9)
        printf("Obesidade 2");
    else
        printf("Obesidade 3");
}

int main(){
   
   float imc=20;

   classificarImc(imc);
}