void exercicio_2()
{
  int numero1 = 0;
  int numero2 = 0;
  int numero3 = 0;
  

  printf("\n  Desenvolva um programa em C que calcule a média aritmética de três números inteiros.\n");
  printf("\n  Informe o primeiro número: ");
  scanf("%d",&numero1);
  printf("\n  Informe o segundo número: ");
  scanf("%d",&numero2);
  printf("\n  Informe o terceiro número: ");
  scanf("%d",&numero3);

  printf("\n  O resultado da soma é: %d", numero1 + numero2 + numero3);
  printf("\n  O resultado do exercício é: (%d + %d + %d) / 3 = %.2f\n", numero1, numero2, numero3, (numero1+numero2+numero3)/3.0);

  printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base(2 , exercicio_2);
  }
  
  main();
  
}