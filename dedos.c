
int fun_inicio(char j1[100], char j2[100]){
    int j1e=1,j1d=1,j2e=1,j2d=1;
    printf("Jogo dos dedos - %s vs %s\n", j1, j2);
    printf("%s 1:\t %d, %d\n", j1, j1e, j1d);
    printf("%s 2:\t %d, %d\n", j2, j2e, j2d);

    return -1;
}

int humano1(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){
    char jd[100];
    int veri;//,j1e,j1d,j2e,j2d;

        printf("vez do humano 1:");
        scanf("%s", jd);
        if(strcmp(jd,"ee") == 0){
            *j2e = *j1e + *j2e;
            //printf("j1e: %d\n\n", *j1e);
        }
        if(strcmp(jd,"ed") == 0){
            *j2d = *j1e + *j2d;
            //printf("j1d: %d\n\n", *j1e);
        }
        if(strcmp(jd,"de") == 0){
            *j2e = *j1d + *j2e;
            //printf("j1d: %d\n\n", *j1d);
        }
        if(strcmp(jd,"dd") == 0){
            *j2d = *j1d + *j2d;
            //printf("j1d: %d\n\n", *j1d);
        }
        printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
        printf("%s 2:\t %d, %d\n", j2, *j2e, *j2d);

        return -1;
}

int humano2(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){
    char jd[100];
    int veri;//,j1e,j1d,j2e,j2d;

        printf("vez do humano 2:");
        scanf("%s", jd);
        if(strcmp(jd,"ee") == 0){
            *j1e = *j1e + *j2e;
            //printf("j1e: %d\n\n", *j1e);
        }
        if(strcmp(jd,"ed") == 0){
            *j1d = *j2e + *j1d;
            //printf("j1d: %d\n\n", *j1e);
        }
        if(strcmp(jd,"de") == 0){
            *j1e = *j2d + *j1e;
            //printf("j1d: %d\n\n", *j1d);
        }
        if(strcmp(jd,"dd") == 0){
            *j1d = *j1d + *j2d;
            //printf("j1d: %d\n\n", *j1d);
        }
        printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
        printf("%s 2:\t %d, %d\n", j2, *j2e, *j2d);

        return -1;
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
    char *j1 = argv[1];
    char *j2 = argv[2];
    char jd[100];
    int veri;
    fun_inicio(j1, j2);
    int j1e = 1;
    int j1d = 1;
    int j2e = 1;
    int j2d = 1;
    
    if (!strcmp(argv[1], "humano") && !strcmp(argv[2], "humano")){
        jogada_humano1(&j1e, &j1d, &j2e, &j2d, j1, j2);
        jogada_humano2(&j1e, &j1d, &j2e, &j2d, j1, j2);
    }
    if (!strcmp(argv[1], "humano"))
    {
        humano1(&j1e, &j1d, &j2e, &j2d, j1, j2);

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
       humano2(&j1e, &j1d, &j2e, &j2d, j1, j2);

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







/*----------------------------------------------------------------------*/
