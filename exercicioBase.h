
void exercicio_base(char numeroExercicio, void (exerFunc)())
{

  system("clear");

  cabecalho();
  printf("\n                                     EXERCÍCIO %c    \n", numeroExercicio);

  exerFunc();

}