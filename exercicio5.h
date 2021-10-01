int main(void);

void exercicio_5()
{
  float base = 0.0;
  float altura = 0.0;
  

  printf("\n  Desenvolva um programa em C que calcule a área de um triângulo dados sua altura e base.\n");

  printf("\n  Informe a base do triângulo: ");
  scanf("%f", &base);
  printf("\n  Informe a altura do triângulo: ");
  scanf("%f", &altura);

  if(altura < 0.0) altura = altura * (-1.0);
  if(base < 0.0) base = base * (-1.0);

  printf("\n  A área deste triângulo é: (%.2f * %.2f)/ 2.0 = %.2f\n\n",base, altura, (base*altura)/2.0);

	printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('5' , exercicio_5);
  }
  
  main();
  
}