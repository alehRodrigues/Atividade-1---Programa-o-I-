int main(void);

void exercicio_10()
{
  int valorSaque = 0;
	int notas50 = 0;
	int notas20 = 0;
	int notas10 = 0;
	int valorSaqueRestante = 0;

  printf("\n  Suponha que um caixa eletrônico disponha apenas de notas de R$50,00, R$20,00 e R$10,00. Considerando que um cliente queira realizar um saque (de um valor inteiro) qualquer desenvolva um programa em C que mostre o número otimzado de notas com os seus respectivos valores bem como o valor do saque.\n");

  printf("\n  Informe o valor que gostaria de sacar: ");
  scanf("%d", &valorSaque);

  if(valorSaque == 0) 
	{
		printf("\n               O valor do saque deve ser maior do que R$0,00\n");
		sleep(3);
		exercicio_base((char)10 , exercicio_10);
	}

	if(valorSaque < 0.0) valorSaque = valorSaque * (-1.0);

	if(valorSaque >= 50)
	{
		notas50 = valorSaque/50;
		valorSaqueRestante = valorSaque - notas50*50;
	}
	else
	{
		valorSaqueRestante = valorSaque;
	}

	if(valorSaqueRestante >= 20)
	{
		notas20 = valorSaqueRestante/20;
		valorSaqueRestante = valorSaqueRestante - notas20*20;
	}

	if(valorSaqueRestante >= 10)
	{
		notas10 = valorSaqueRestante/10;
		valorSaqueRestante = valorSaqueRestante - notas10*10;
	}

	if(valorSaqueRestante > 0) 
	{
		printf("\n      Não é possível sacar este valor, apenas valores multiplos de 50, 20 ou 10.\n");
		sleep(5);
		exercicio_base((char)10 , exercicio_10);
	}

	printf("\n  Número de Notas de R$50,00: %d", notas50);
	printf("\n  Número de Notas de R$20,00: %d", notas20);
	printf("\n  Número de Notas de R$10,00: %d", notas10);
	printf("\n  Valor do saque é de: R$%d,00", (notas10*10)+(notas20*20)+(notas50*50));
  
  printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base((char)10 , exercicio_10);
  }
  
  main();
  
}