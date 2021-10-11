int main(void);

void exercicio_1()
{
	//Declaração de variáveis
  int numero1 = 0;
  int numero2 = 0;
  
	//Inputs das variáveis
  printf("\n  Desenvolva um programa em C que some dois números inteiros e os multiplique por 3.\n");
  printf("\n  Informe o primeiro número: ");
  scanf("%d",&numero1);
  printf("\n  Informe o segundo número: ");
  scanf("%d",&numero2);

	//Cálculos
  printf("\n  O resultado da soma é: %d", numero1 + numero2);
  printf("\n  O resultado do exercício é: (%d + %d) * 3 = %d\n", numero1, numero2, (numero1+numero2)*3);

  printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('1' , exercicio_1);
  }
  
}