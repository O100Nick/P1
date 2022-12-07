
int fun_inicio(char j1[100], char j2[100]){
    int j1e=1,j1d=1,j2e=1,j2d=1;
    printf("Jogo dos dedos - %s vs %s\n", j1, j2);
    printf("%s 1:\t %d, %d\n", j1, j1e, j1d);
    printf("%s 2:\t %d, %d\n", j2, j2e, j2d);
}

/*int chico_esperto(){

    printf("\ndeu aqui\n");
    return 0;
}

int humano(){
    printf("\nou aqui\n");
    return 0;
}


int ao_calhas(){
    printf("\ntalvez aqui\n");
    return 0;
}
*/



MAIN(){
    char* j1 = argv[1];
    char* j2 = argv[2];
    fun_inicio(j1, j2);
    
    if (!strcmp(argv[1], "humano"))
    {
        humano();

    }
    else if (!strcmp(argv[1], "chico-esperto"))

    {
        chico_esperto();                                                     // verifica o valor de j1 para determinar a jogada ou estratégia
    }

    else if (!strcmp(argv[1], "ao-calhas"))
    {
        ao_calhas();
    }

    if (!strcmp(argv[2], "humano"))
    {
        humano();

    }
    else if (!strcmp(argv[2], "chico-esperto"))

    {
        chico_esperto();                                                     // verifica o valor de j2 para determinar a jogada ou estratégia
    }

    else if (!strcmp(argv[2], "ao-calhas"))
    {
        ao_calhas();
    }
}
