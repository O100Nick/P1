
int fun_inicio(char j1[100], char j2[100]){
    printf("Jogo dos dedos - %s vs %s\n", j1, j2);
    printf("%s 1:\t 1, 1\n", j1);
    printf("%s 2:\t 1, 1\n", j2);
}

MAIN(){
    char* j1 = argv[1];
    char* j2 = argv[2];
    fun_inicio(j1, j2);
}
