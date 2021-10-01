int main(void);

void exercicio_3()
{
  float prova1 = 0.0;
  float prova2 = 0.0;
  float prova3 = 0.0;
  

  printf("\n  Desenvolva um programa em C que calcule a média de três provas com peso 2, 3 e 5 respectivamente.\n");
  printf("\n  Informe a nota da primeira prova: ");
  scanf("%f",&prova1);
  printf("\n  Informe a nota da segunda prova: ");
  scanf("%f",&prova2);
  printf("\n  Informe a nota da terceira prova: ");
  scanf("%f",&prova3);

  if(prova1 > 10) prova1 = 10;
  if(prova2 > 10) prova2 = 10;
  if(prova3 > 10) prova3 = 10;

  if(prova1 < 0) prova1 = 0;
  if(prova2 < 0) prova2 = 0;
  if(prova3 < 0) prova3 = 0;

  printf("\n                              O resultado da média é:\n                  ((%.1f * 2) + (%.1f * 3) + (%.1f * 5)) / 10 = %.1f\n",prova1, prova2, prova3, ((prova1*2)+(prova2*3)+(prova3*5))/10 );

  printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('3' , exercicio_3);
  }
  
  main();
  
}