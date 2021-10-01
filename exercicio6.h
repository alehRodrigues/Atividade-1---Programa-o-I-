int main(void);

void exercicio_6()
{
  float temperaturaCelsius = 0.0;

  printf("\n  Desenvolva um programa em C que calcule a temperatura em graus Fahrenheit dada uma temperatura em graus Celsius.\n");

  printf("\n  Informe a temperatura em graus Celsius: ");
  scanf("%f", &temperaturaCelsius);

  printf("\n  A temperatura em graus Fahrenheit é: (%.2f * 9/5) + 32 = %.2f graus Fahrenheit\n\n",temperaturaCelsius, (temperaturaCelsius * (9.0/5.0)) + 32);

	printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('6' , exercicio_6);
  }
  
  main();
  
}