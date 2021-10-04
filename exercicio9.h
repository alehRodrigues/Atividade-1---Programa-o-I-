int main(void);

void exercicio_9()
{
  float distancia = 0.0;
  float consumo = 0.0;
  float preco = 0.0;
  int txPetrobas = random_number(3,13);

  printf("\n  Desenvolva um programa em C que calcule os gastos de combustível numa viagem dadas a distância (km), o consumo do veículo em (km/L) e o valor do combustível (R$/L). \n");

  printf("\n  Informe a distância da viagem em km: ");
  scanf("%f", &distancia);
  printf("\n  Informe o consumo do veículo em km/L: ");
  scanf("%f", &consumo);
  printf("\n  Informe o preço do combustível em R$/L que tá muito caro inclusive: ");
  scanf("%f", &preco);

  if(distancia < 0.0) distancia = distancia * (-1.0);
  if(consumo < 0.0) consumo = consumo * (-1.0);
  if(preco < 0.0) preco = preco * (-1.0);


  printf("\n                        RELATÓRIO - CUSTOS DE VIAGEM\n");
  printf("\n                        Distância: %.2f kilomêtros", distancia);
  printf("\n                        Consumo do Veículo: %.2f kilômetros por litro", consumo);
  printf("\n                        Preço do Combustível: R$%.2f\n", preco);
  printf("\nA Petrobras acabou de aumentar o preço do seu combustível em %.1f porcento, portanto agora ele vale: R$%.2f\n",(float)txPetrobas, preco + (preco * ((float)txPetrobas/100.00)));
  printf("\n                O CUSTO DA SUA VIAGEM COM COMBSUTÍVEL SERÁ DE: R$%.2f\n", (distancia/consumo) * (preco + (preco * (txPetrobas/100))));

  printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('9', exercicio_9);
  }
  
}