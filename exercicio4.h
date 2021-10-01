int main(void);

void exercicio_4()
{
  char nomeFuncionario[10];
  float salarioBruto = 0.0;
  

  printf("\n  Desenvolva um programa em C que calcule o salário liquido de um funcionário a partir de seu nome e salário bruto sabendo-se que é descontado 10 porcento para a previdência.\n");

  printf("\n  Informe o nome do funcionário: ");
  scanf("%s", nomeFuncionario);
  printf("\n  Informe o salário bruto deste funcionário: ");
  scanf("%f", &salarioBruto);

  if(salarioBruto < 0.0) salarioBruto = salarioBruto * (-1.0);


  printf("\n                        FICHA DO FUNCIONÁRIO");
  printf("\n                        Nome: %s", nomeFuncionario);
  printf("\n                        Salário Bruto: %.2f", salarioBruto);
  printf("\n                        Contribuição com a previdência: %.2f", salarioBruto * 0.1);
  printf("\n                        Salário Liquido: %.2f\n", salarioBruto * 0.9);

  printf("\n               Pressione ESC para voltar ou qualquer tecla para repetir\n");

  if((int)getch() != 27)
  {
    exercicio_base('4', exercicio_4);
  }
  
  main();
  
}