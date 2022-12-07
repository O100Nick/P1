
int fun_inicio(char j1[100], char j2[100]){
    int j1e=1,j1d=1,j2e=1,j2d=1;
    printf("Jogo dos dedos - %s vs %s\n", j1, j2);
    printf("%s 1: %d, %d\n", j1, j1e, j1d);
    printf("\t\b%s 2: %d, %d\n", j2, j2e, j2d);
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
    
    
}
