#include <termios.h>  //_getch
#include <unistd.h>   //_getch
#include <time.h>

char getch()
{
    char buf=0;
    struct termios old={0};
    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    //printf("%c\n",buf);
    return buf;
}

int random_number(int min_num, int max_num)
{
    int result = 0, low_num = 0, hi_num = 0;
    if (min_num < max_num)
    {
        low_num = min_num;
        hi_num = max_num + 1; // include max_num in output
    } else {
        low_num = max_num + 1; // include max_num in output
        hi_num = min_num;
		}
    srand(time(NULL));
    result = (rand() % (hi_num - low_num)) + low_num;
    return result;
}

void cabecalho()
{
  printf("               #######################################################\n");
  printf("               #                   IFPR - Colombo                    #\n");
  printf("               #                    TADS - 2021                      #\n");
  printf("               #                Alexandre Rodrigues                  #\n");
  printf("               #             Atividade 1 - Programação I             #\n");
  printf("               #######################################################\n");
}