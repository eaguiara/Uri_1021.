
//Eduarda Aguiar
//Dia 22/09/2020
//uri 1021
#include <stdio.h>

int main(void) {
  int i;
  double moeda[6], notas [6], valor;
  notas[0]= 100.00;
  notas[1]= 50.00;
  notas[2]= 20.00;
  notas[3]= 10.00;
  notas[4]= 5.00;
  notas[5]= 2.00;
  moeda[0]= 1.00;
  moeda[1]= 0.50;
  moeda[2]= 0.25;
  moeda[3]= 0.10;
  moeda[4]= 0.05;
  moeda[5]= 0.01;
  int quantnotas[6], quantmoedas[6];
  
  printf("Digite um valor:\n");
  scanf("%lf", &valor);
  for (i = 0; i < 6; i++){
    quantnotas[i] = valor / notas[i];
    valor = valor - quantnotas[i] * notas[i];
    printf("NOTAS:\n %d nota(s) de R$%.2lf\n", quantnotas[i], notas[i]);
    }  
    for (i = 0; i < 6; i++){
    quantmoedas[i] = valor / moeda[i];
    valor = valor - quantmoedas[i] *moeda[i];
    printf("MOEDA:\n %d moeda(s) de R$%.2lf\n", quantmoedas[i], moeda[i]);
    }  




  
  return 0;
}