
int fun_inicio(char j1[100], char j2[100]){
    printf("Jogo dos dedos - %s vs %s\n", j1, j2);
    printf("%s 1: 1, 1\n", j1);
    printf("\t\b%s 2: 1, 1\n", j2);
}

int main (int argc, char *argv[]){
    char j1[100] = atof(argv[1]);
    char j2[100] = atof(argv[2]);
   /* printf("J1?");
    scanf("%s", j1);
    printf("J2?");
    scanf("%s", j2);*/
    fun_inicio(j1, j2);
}
