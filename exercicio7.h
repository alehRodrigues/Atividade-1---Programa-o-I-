int main(void);

void exercicio_7()
{
  int numero = 0;

  printf("\n  Desenvolva um programa em C que receba um inteiro qualquer e mostre o seu quociente da divisão por três .\n");

  printf("\n  Informe um número inteiro: ");
  scanf("%d", &numero);

  printf("\n  O quociente da divisão de %d por 3 é: %d\n\n",numero, numero / 3);

	printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('7' , exercicio_7);
  }
  
}