#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAIN() int main (int argc, char *argv[])

#define ARG(n) (((n)<=argc)? argv[n]: "inexistente")

#define ARG1 ARG(1)
#define ARG2 ARG(2)
#define ARG3 ARG(3)
#define ARG4 ARG(4)

/*-------------------------------------------------------------------------------------------------------------------*/

int frase_inicio(char j1[100], char j2[100]);
int verificar(char jd[100], int *j1e, int *j1d, int *j2e, int *j2d);
int frasej1(int *j1e, int *j1d, int *j2e, int *j2d, char *jd);
int frasej2(int *j1e, int *j1d, int *j2e, int *j2d, char *jd);
int jogada_chico1(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2);
int jogada_chico2(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2);
int jogada_ao_calhas1(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2);
int jogada_ao_calhas2(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2);
int jogada_humano1(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2);
int jogada_humano2(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2);
