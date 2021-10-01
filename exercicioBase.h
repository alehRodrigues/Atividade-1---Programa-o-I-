
void exercicio_base(char numeroExercicio, void (exerFunc)())
{

  system("clear");

  cabecalho();

	if((int)numeroExercicio == 10)
	{
		printf("\n                                     EXERCÍCIO %d    \n",(int)numeroExercicio);
	}
	else
	{
		printf("\n                                     EXERCÍCIO %c    \n", numeroExercicio);
	}

  

  exerFunc();

}