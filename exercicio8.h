int main(void);

void exercicio_8()
{
  int numero = 0;

  printf("\n  Desenvolva um programa em C que receba um inteiro qualquer e mostre o resto da sua divisão por três .\n");

  printf("\n  Informe um número inteiro: ");
  scanf("%d", &numero);

  printf("\n  O resto da divisão de %d por 3 é: %d\n\n",numero, numero % 3);

	printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('8' , exercicio_8);
  }
  
}