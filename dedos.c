#include "dedos.h"


int frase_inicio(char j1[100], char j2[100]){ // função que dá início ao jogo
    int j1e=1,j1d=1,j2e=1,j2d=1;
    printf("Jogo dos dedos - %s vs %s\n", j1, j2);
    printf("%s 1:\t %d, %d\n", j1, j1e, j1d);
    printf("%s 2:\t %d, %d\n", j2, j2e, j2d);

    return -1;
}
/*char* verificar()
{   
    char *jd[100];
    int flag = 1;
    while(flag == 1){
        scanf("%s", jd);

        if(strcmp(jd,"ee") == 0  || strcmp(jd,"ed") == 0  || strcmp(jd,"de") == 0 || strcmp(jd,"dd") == 0 || strcmp(jd, "=") == 0 || strcmp(jd,".") == 0)
        {
            return jd;
            flag = 0;
        }
        else
        {
            printf("Jogada inválida!\n");
            printf("Tenta outra vez:");

        }

        
    }
}*/
int frasej1(int *j1e, int *j1d, int *j2e, int *j2d, char *jd){ // função que verifica qual a jogada e dá print à frase da jogada do jogador 1
    if(strcmp(jd,"ee") == 0){
        if(*j1e == 1){
         printf("dedo da esquerda ataca dedos da esquerda, ficam %d dedos\n",*j2e); 
        }else
         printf("%d dedos da esquerda ataca dedos da esquerda, ficam %d dedos\n", *j1e, *j2e);
    }
    else if(strcmp(jd,"ed") == 0){
        if(*j1e == 1){
        printf("dedo da esquerda ataca dedos da direita, ficam %d dedos\n", *j2d);
        }else   
        printf("%d dedos da esquerda ataca dedos da direita, ficam %d dedos\n", *j1e, *j2d);
    }
    else if(strcmp(jd,"de") == 0){
        if(*j1d == 1){
        printf("dedo da direita ataca dedo da esquerda, ficam %d dedos\n",*j2e);
        }else
        printf("%d dedos da direita ataca dedo da esquerda, ficam %d dedos\n", *j1d, *j2e);
    }
    else if(strcmp(jd,"dd") == 0){
        if(*j1d == 1){
        printf("dedo da direita ataca dedo da direita, ficam %d dedos\n",*j2d);
        }else
        printf("%d dedos da direita ataca dedo da direita, ficam %d dedos\n", *j1d, *j2d);
    }
}
int frasej2(int *j1e, int *j1d, int *j2e, int *j2d, char *jd){ // função que verifica qual a jogada e dá print à frase da jogada do jogador 2
   if(strcmp(jd,"ee") == 0){
        if(*j2e == 1){
         printf("dedo da esquerda ataca dedos da esquerda, ficam %d dedos\n",*j1e);
        }else
         printf("%d dedos da esquerda ataca dedos da esquerda, ficam %d dedos\n", *j2e, *j1e);
    }
    else if(strcmp(jd,"ed") == 0){
        if(*j2e == 1){
        printf("dedo da esquerda ataca dedos da direita, ficam %d dedos\n", *j1d);
        }else   
        printf("%d dedos da esquerda ataca dedos da direita, ficam %d dedos\n", *j2e, *j1d);
    }
    else if(strcmp(jd,"de") == 0){
        if(*j2d == 1){
        printf("dedo da direita ataca dedo da esquerda, ficam %d dedos\n",*j1e);
        }else
        printf("%d dedos da direita ataca dedo da esquerda, ficam %d dedos\n", *j2d, *j1e);
    }
    else if(strcmp(jd,"dd") == 0){
        if(*j2d == 1){
        printf("dedo da direita ataca dedo da direita, ficam %d dedos\n",*j1d);
        }else
        printf("%d dedos da direita ataca dedo da direita, ficam %d dedos\n", *j2d, *j1d);
    }
}
int jogada_chico1(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){ // jogada do chico esperto 1
    char jd[100];

    printf("vez do chico esperto 1:");
    if(*j2e == *j2d){ // quando o jogador 2 tem os dedos das mãos iguais 
        if(*j1e !=0 && *j1d == 0){
            printf("ee\n");
            char jd[]= "ee";
            *j2e = (*j1e + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e == *j1d){
            printf("ee\n");
            char jd[]= "ee";
            *j2e = (*j1e + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e>*j1d){
            *j2e = (*j1e + *j2e)%5;
            printf("ee\n");
            char jd[]= "ee";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1d !=0 && *j1e == 0){
            printf("de\n");
            char jd[]= "de";
            *j2e = (*j1d + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e<*j1d){
            *j2e = (*j1d + *j2e)%5;
            printf("de\n");
            char jd[]= "de";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e ==0 && *j1d != 0){
            printf("de\n");
            char jd[]= "de";
            *j2e = (*j1d + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j2e !=0 && *j2d == 0){// quando o jogador 2 tem os dedos da mão esquerda diferente de 0 e os dedos da mão direita igual a 0
        if(j1e !=0 && j1d == 0){
            printf("ee\n");
            char jd[]= "ee";
            *j2e = (*j1e + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e == *j1d){
            printf("ee\n");
            char jd[]= "ee";
            *j2e = (*j1e + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e>*j1d){
            *j2e = (*j1e + *j2e)%5;
            printf("ee\n");
            char jd[]= "ee";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1d !=0 && *j1e == 0){
            printf("de\n");
            char jd[]= "de";
            *j2e = (*j1d + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e<*j1d){
            *j2e = (*j1d + *j2e)%5;
            printf("de\n");
            char jd[]= "de";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e ==0 && *j1d != 0){
            printf("de\n");
            char jd[]= "de";
            *j2e = (*j1d + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j2e > *j2d){ // quando o jogador 2 tem mais dedos na mão esquerda
        if(j1e !=0 && j1d == 0){
            printf("ee\n");
            char jd[]= "ee";
            *j2e = (*j1e + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e == *j1d){
            printf("ee\n");
            char jd[]= "ee";
            *j2e = (*j1e + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e>*j1d){
            *j2e = (*j1e + *j2e)%5;
            printf("ee\n");
            char jd[]= "ee";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1d !=0 && *j1e == 0){
            printf("de\n");
            char jd[]= "de";
            *j2e = (*j1d + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e<*j1d){
            *j2e = (*j1d + *j2e)%5;
            printf("de\n");
            char jd[]= "de";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e ==0 && *j1d != 0){
            printf("de\n");
            char jd[]= "de";
            *j2e = (*j1d + *j2e)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j2e ==0 && *j2d != 0){// quando o jogador 2 tem os dedos da mão direita diferente de 0 e os dedos da mão esquerda igual a 0
        if(*j1e !=0 && *j1d == 0){
            printf("ed\n");
            char jd[]= "ed";
            *j2d = (*j1e + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e == *j1d){
            printf("ed\n");
            char jd[]= "ed";
            *j2d = (*j1e + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e>*j1d){
            *j2d = (*j1e + *j2d)%5;
            printf("ed\n");
            char jd[]= "ed";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1d !=0 && *j1e == 0){
            printf("dd\n");
            char jd[]= "dd";
            *j2d = (*j1d + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e<*j1d){
            *j2d = (*j1d + *j2d)%5;
            printf("dd\n");
            char jd[]= "dd";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e ==0 && *j1d != 0){
            printf("dd\n");
            char jd[]= "dd";
            *j2d = (*j1d + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j2e < *j2d ){ // quando o jogador 2 tem mais dedos na mão direita
        if(j1e !=0 && j1d == 0){
            printf("ed\n");
            char jd[]= "ed";
            *j2d = (*j1e + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e == *j1d){
            printf("ed\n");
            char jd[]= "ed";
            *j2d = (*j1e + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e>*j1d){
            *j2d = (*j1e + *j2d)%5;
            printf("ed\n");
            char jd[]= "ed";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1d !=0 && *j1e == 0){
            printf("dd\n");
            char jd[]= "dd";
            *j2d = (*j1d + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e<*j1d){
            *j2d = (*j1d + *j2d)%5;
            printf("dd\n");
            char jd[]= "dd";
            frasej1(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e ==0 && *j1d != 0){
            printf("dd\n");
            char jd[]= "dd";
            *j2d = (*j1d + *j2d)%5;
            frasej1(j1e,j2e,j1d,j2d,jd);
        }
    }
    printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
    printf("%s 2:\t %d, %d\n\n", j2, *j2e, *j2d);

    return -1;
}
int jogada_chico2(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){// jogada do chico esperto 2
    char jd[100];

    printf("vez do chico esperto 2:");
    if(*j1e == *j1d){// quando o jogador 1 tem os dedos das mãos iguais 
        if(*j2e !=0 && *j2d == 0){
            printf("ee\n");
            char jd[]= "ee";
            *j1e = (*j1e + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e == *j2d){
            printf("ee\n");
            char jd[]= "ee";
            *j1e = (*j1e + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e>*j2d){
            *j1e = (*j1e + *j2e)%5;
            printf("ee\n");
            char jd[]= "ee";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2d !=0 && *j2e == 0){
            printf("de\n");
            char jd[]= "de";
            *j1e = (*j1e + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e<*j2d){
            *j1e = (*j1e + *j2d)%5;
            printf("de\n");
            char jd[]= "de";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e ==0 && *j2d != 0){
            printf("de\n");
            char jd[]= "de";
            *j1e = (*j1e + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j1e !=0 && *j1d == 0){// quando o jogador 1 tem os dedos da mão esquerda diferente de 0 e os dedos da mão direita igual a 0
        if(j2e !=0 && j2d == 0){
            printf("ee\n");
            char jd[]= "ee";
            *j1e = (*j1e + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e == *j2d){
            printf("ee\n");
            char jd[]= "ee";
            *j1e = (*j1e + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e>*j2d){
            *j1e = (*j1e + *j2e)%5;
            printf("ee\n");
            char jd[]= "ee";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2d !=0 && *j2e == 0){
            printf("de\n");
            char jd[]= "de";
            *j1e = (*j1e + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e<*j2d){
            *j1e = (*j1e + *j2d)%5;
            printf("de\n");
            char jd[]= "de";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e ==0 && *j2d != 0){
            printf("de\n");
            char jd[]= "de";
            *j1e = (*j1e + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j1e > *j1d){// quando o jogador 1 tem mais dedos na mão esquerda
        if(*j2e !=0 && *j2d == 0){
            printf("ee\n");
            char jd[]= "ee";
            *j1e = (*j1e + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e == *j2d){
            printf("ee\n");
            char jd[]= "ee";
            *j1e = (*j1e + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e>*j2d){
            *j1e = (*j1e + *j2e)%5;
            printf("ee\n");
            char jd[]= "ee";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2d !=0 && *j2e == 0){
            printf("de\n");
            char jd[]= "de";
            *j1e = (*j1e + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e<*j2d){
            *j1e = (*j1e + *j2d)%5;
            printf("de\n");
            char jd[]= "de";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e ==0 && *j2d != 0){
            printf("de\n");
            char jd[]= "de";
            *j1e = (*j1e + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j1e ==0 && *j1d != 0){// quando o jogador 1 tem os dedos da mão direita diferente de 0 e os dedos da mão esquerda igual a 0
        if(*j2e !=0 && *j2d == 0){
            printf("ed\n");
            char jd[]= "ed";
            *j1d = (*j1d + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e == *j2d){
            printf("ed\n");
            char jd[]= "ed";
            *j1d = (*j1d + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e>*j2d){
            *j1d = (*j1d + *j2e)%5;
            printf("ed\n");
            char jd[]= "ed";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2d !=0 && *j2e == 0){
            printf("dd\n");
            char jd[]= "dd";
            *j1d = (*j1d + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e<*j2d){
            *j1d = (*j1d + *j2d)%5;
            printf("dd\n");
            char jd[]= "dd";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e ==0 && *j2d != 0){
            printf("dd\n");
            char jd[]= "dd";
            *j1d = (*j1d + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }
    }else if(*j1e < *j1d ){ // quando o jogador 2 tem mais dedos na mão direita
        if(*j2e !=0 && *j2d == 0){
            printf("ed\n");
            char jd[]= "ed";
            *j1d = (*j1d + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e == *j2d){
            printf("ed\n");
            char jd[]= "ed";
            *j1d = (*j1d + *j2e)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j1e>*j2d){
            *j1d = (*j1d + *j2e)%5;
            printf("ed\n");
            char jd[]= "ed";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2d !=0 && *j2e == 0){
            printf("dd\n");
            char jd[]= "dd";
            *j1d = (*j1d + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e<*j2d){
            *j1d = (*j1d + *j2d)%5;
            printf("dd\n");
            char jd[]= "dd";
            frasej2(j1e,j2e,j1d,j2d,jd);
        }else if(*j2e ==0 && *j2d != 0){
            printf("dd\n");
            char jd[]= "dd";
            *j1d = (*j1d + *j2d)%5;
            frasej2(j1e,j2e,j1d,j2d,jd);
        }
    }
    printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
    printf("%s 2:\t%d, %d\n\n", j2, *j2e, *j2d);

    return -1;
}
int jogada_ao_calhas1(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){//jogada ao calhas 1
    char char1[] = "ed";                                
    srand((unsigned int)(time(NULL)));
    char *jd = calloc(2, sizeof(char));

    for(int i=0; i<2; i++){
        jd[i] = char1[rand() % (sizeof(char1) -1)] ;  //gera aleatoriamente strings com 2 caracteres em q altera a ordem do "e" e do "d"
    }
    printf("vez do ao-calhas 1:%s\n", jd);
    frasej1(j1e,j2e,j1d,j2d,jd);
        if(strcmp(jd,"ee") == 0){
            *j2e = (*j1e + *j2e)%5;
        }
        if(strcmp(jd,"ed") == 0){
            *j2d = (*j1e + *j2d)%5;
        }
        if(strcmp(jd,"de") == 0){
            *j2e = (*j1d + *j2e)%5;
        }
        if(strcmp(jd,"dd") == 0){
            *j2d = (*j1d + *j2d)%5;
        }
        printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
        printf("%s 2:\t %d, %d\n", j2, *j2e, *j2d);

        return -1;
}
int jogada_ao_calhas2(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){//jogada ao calhas 2
    char char1[] = "ed";
    srand((unsigned int)(time(NULL)));
    char *jd = calloc(2, sizeof(char));

    for(int i=0; i<2; i++){
        jd[i] = char1[rand() % (sizeof(char1) -1)] ;  //gera aleatóriamente strings com 2 caracteres em q altera a ordem do "e" e do "d"
    }
        printf("vez do ao-calhas 2:%s\n", jd);
        frasej2(j1e,j2e,j1d,j2d,jd);
        if(strcmp(jd,"ee") == 0){
            *j1e = (*j1e + *j2e)%5;
        }
        if(strcmp(jd,"ed") == 0){
            *j1d = (*j2e + *j1d)%5;
        }
        if(strcmp(jd,"de") == 0){
            *j1e = (*j2d + *j1e)%5;
        }
        if(strcmp(jd,"dd") == 0){
            *j1d = (*j1d + *j2d)%5;
        }
        printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
        printf("%s 2:\t %d, %d\n", j2, *j2e, *j2d);

        return -1;
}
int jogada_humano1(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){//jogada humano 1
    char jd[100];
    int flag = 1;
        volta1:                                 //sempre que a jogada "=" é inválida reenicia a jogada
        printf("vez do humano 1:");
        while(flag == 1){
        scanf("%s", jd);

        if(strcmp(jd,"ee") == 0  || strcmp(jd,"ed") == 0  || strcmp(jd,"de") == 0 || strcmp(jd,"dd") == 0 || strcmp(jd, "=") == 0 || strcmp(jd,".") == 0)
        {
            flag = 0;
        }
        else
        {
            printf("Jogada inválida!\n");
            printf("Tenta outra vez:");

        }

        
    }
        frasej1(j1e,j2e,j1d,j2d,jd);
        if(strcmp(jd,".") == 0){                //caso a pessoa queira desistir escreve "."
            printf("Humano 2 ganhou!!!\n");
            exit(0);
        }
        if(strcmp(jd,"ee") == 0){
            *j2e = (*j1e + *j2e)%5;
        }
        if(strcmp(jd,"ed") == 0){
            *j2d = (*j1e + *j2d)%5;
        }
        if(strcmp(jd,"de") == 0){
            *j2e = (*j1d + *j2e)%5;
        }
        if(strcmp(jd,"dd") == 0){
            *j2d = (*j1d + *j2d)%5;
        }
        if ((strcmp(jd,"=") == 0) && *j2e == 1 && *j2d == 1 )
        {
            printf("Jogada inválida!\n\n");
            goto volta1;
        }
        if ((strcmp(jd,"=") ==0 ) && *j2e == 0 && *j2d ==1 )
        {
            printf("Jogada inválida!\n\n");
            goto volta1;
        }
        if ((strcmp(jd,"=") ==0 ) && *j2e == 0 && *j2d ==1 )
        {
            printf("Jogada inválida!\n\n");
            goto volta1;
        }
        if ((strcmp(jd,"=") == 0) && *j1e == 1 && *j1d ==1 )
        {
            printf("Jogada inválida!\n\n");
                goto volta1;
        }
        
        if (strcmp("=", jd) == 0){
            if (*j1e == 0 && *j1d % 2 == 0){
            *j1e = *j1d / 2;
            *j1d = *j1e;
            }else if (*j1d == 0 && *j1e % 2 == 0){
            *j1d = *j1e / 2;
            *j1e = *j1d;
            }
        }
        printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
        printf("%s 2:\t %d, %d\n\n", j2, *j2e, *j2d);

        return -1;
}
int jogada_humano2(int *j1e, int *j1d, int *j2e, int *j2d, char *j1,  char *j2){//jogada humano 1
    char jd[100];
    int flag = 1;

    volta2:                                 //sempre que a jogada "=" é inválida reenicia a jogada
    printf("vez do humano 2:");
    while(flag == 1)
    {
        scanf("%s", jd);

        if(strcmp(jd,"ee") == 0  || strcmp(jd,"ed") == 0  || strcmp(jd,"de") == 0 || strcmp(jd,"dd") == 0 || strcmp(jd, "=") == 0 || strcmp(jd,".") == 0)
        {
            flag = 0;
        }
        else
        {
            printf("Jogada inválida!\n");
            printf("Tenta outra vez:");

        }

    
    }
        frasej2(j1e,j2e,j1d,j2d,jd);
        if(strcmp(jd,".") == 0){                //caso a pessoa queira desistir escreve "."
            printf("Humano 1 ganhou!!!\n");
            exit(0);
        }
        if(strcmp(jd,"ee") == 0){
            *j1e = (*j1e + *j2e)%5;
        }
        if(strcmp(jd,"ed") == 0){
            *j1d = (*j2e + *j1d)%5;
        }
        if(strcmp(jd,"de") == 0){
            *j1e = (*j2d + *j1e)%5;
        }
        if(strcmp(jd,"dd") == 0){
            *j1d = (*j1d + *j2d)%5;
        }
        if ((strcmp(jd,"=") == 0) && *j2e == 1 && *j2d == 1 )
        {
            printf("Jogada inválida!\n\n");
            goto volta2;
        }
        if ((strcmp(jd,"=") ==0 ) && *j2e == 0 && *j2d ==1 )
        {
            printf("Jogada inválida!\n\n");
            goto volta2;
        }
        if ((strcmp(jd,"=") ==0 ) && *j2e == 0 && *j2d ==1 )
        {
            printf("Jogada inválida!\n\n");
            goto volta2;
        }
        if ((strcmp(jd,"=") == 0) && *j1e == 1 && *j1d ==1 )
        {
            printf("Jogada inválida!\n\n");
                goto volta2;
        }
        
        if (strcmp("=", jd) == 0){
            if (*j2e == 0 && *j2d % 2 == 0){
            *j2e = *j2d / 2;
            *j2d = *j2e;
            }else if (*j2d == 0 && *j2e % 2 == 0){
            *j2d = *j2e / 2;
            *j2e = *j2d;
            }
        }
        printf("%s 1:\t %d, %d\n", j1, *j1e, *j1d);
        printf("%s 2:\t %d, %d\n\n", j2, *j2e, *j2d);

        return -1;
}


MAIN(){
    char* j1 = argv[1];
    char* j2 = argv[2];
    char jd[2];
    frase_inicio(j1, j2);
    int j1e = 1;
    int j1d = 1;
    int j2e = 1;
    int j2d = 1;
    int controla = 1;                                           //variável usada para controlar o loop
    char veri[10];

    if (!strcmp(argv[1], "humano") && !strcmp(argv[2], "humano")){
        do{
            continuahh2:                                        //se o jogo não acabou continua
            jogada_humano1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouhh1;                                     //para verificar se o jogo acabou usamos este goto
            continuahh1:                                        //se o jogo não acabou continua
            jogada_humano2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouhh2;                                     //para verificar se o jogo acabou usamos outro goto
            simcacabouhh:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouhh1:                                          //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouhh;
            }
            else if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouhh;
            }
            else if(strcmp(veri, "muy mal") == 0){
                goto continuahh2;
            }
            else{
            goto continuahh1;
            }
            acabouhh2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouhh;
            }
            else if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouhh;
            }
            else if(strcmp(veri, "muy mal") == 0){
                goto continuahh1;
            }
            else{
            goto continuahh2;
            }

        }while (controla != 0);
        
      if(j2e == 0 && j2d == 0){
            printf("Humano 1 ganhou!!!\n"); 
        }
        else if(j1e == 0 && j1d == 0){
            printf("Humano 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "humano") && !strcmp(argv[2], "ao-calhas")){
        do{
            continuaha2:                                        //se o jogo não acabou continua
            jogada_humano1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouha1;                                     //para verificar se o jogo acabou usamos este goto
            continuaha1:                                        //se o jogo não acabou continua
            jogada_ao_calhas2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouha2;                                     //para verificar se o jogo acabou usamos este goto
            simcacabouha:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouha1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouha;
            }
            else if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouha;
            }
            else if(strcmp(veri, "muy mal") == 0){
                goto continuaha2;
            }
            else{
            goto continuaha1;
            }
            acabouha2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouha;
            }
            else if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouha;
            }
            else if(strcmp(veri, "muy mal") == 0){
                goto continuaha1;
            }
            else{
            goto continuaha2;
            }

        }while (controla != 0);
        
      if(j2e == 0 && j2d == 0){
            printf("Humano 1 ganhou!!!\n"); 
        }
        else if(j1e == 0 && j1d == 0){
            printf("Ao calhas 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "humano") && !strcmp(argv[2], "chico-esperto")){
        do{
            continuahc2:                                        //se o jogo não acabou continua
            jogada_humano1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouhc1;                                     //para verificar se o jogo acabou usamos este goto
            continuahc1:                                        //se o jogo não acabou continua
            jogada_chico2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouhc2;                                     //para verificar se o jogo acabou usamos este goto
            simcacabouhc:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouhc1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouhc;
            }
            else if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouhc;
            }
            else if(strcmp(veri, "muy mal") == 0){
                goto continuahc2;
            }
            else{
            goto continuahc1;
            }
            acabouhc2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouhc;
            }
            else if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouhc;
            }
            else if(strcmp(veri, "muy mal") == 0){
                goto continuahc1;
            }
            else{
            goto continuahc2;
            }

        }while (controla != 0);
        
      if(j2e == 0 && j2d == 0){
            printf("Humano 1 ganhou!!!\n"); 
        }
        else if(j1e == 0 && j1d == 0){
            printf("Chico esperto 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "ao-calhas") && !strcmp(argv[2], "ao-calhas")){
       do{
            continuaaa2:                                        //se o jogo não acabou continua
            jogada_ao_calhas1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouaa1;                                     //para verificar se o jogo acabou usamos este goto
            continuaaa1:                                        //se o jogo não acabou continua
            jogada_ao_calhas2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouaa2;                                     //para verificar se o jogo acabou usamos este goto
            simcacabouaa:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouaa1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouaa;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouaa;
            }
            else{
            goto continuaaa1;
            }
            acabouaa2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouaa;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouaa;
            }
            else{
            goto continuaaa2;
            }

       }while (controla != 0);
        if(j2e == 0 && j2d == 0){
            printf("Ao calhas 1 ganhou!!!\n");
        }
         if(j1e == 0 && j1d == 0){
            printf("Ao calhas 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "ao-calhas") && !strcmp(argv[2], "humano")){
       do{
            continuaah2:                                        //se o jogo não acabou continua
            jogada_ao_calhas1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouah1;                                     //para verificar se o jogo acabou usamos este goto
            continuaah1:                                        //se o jogo não acabou continua
            jogada_humano2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouah2;                                     //para verificar se o jogo acabou usamos este goto
            simcacabouah:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouah1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouah;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouah;
            }
            else{
            goto continuaah1;
            }
            acabouah2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouah;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouah;
            }
            else{
            goto continuaah2;
            }

       }while (controla != 0);
        if(j2e == 0 && j2d == 0){
            printf("Ao calhas 1 ganhou!!!\n");
        }
         if(j1e == 0 && j1d == 0){
            printf("Humano 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "ao-calhas") && !strcmp(argv[2], "chico-esperto")){
       do{
            continuaac2:                                        //se o jogo não acabou continua
            jogada_ao_calhas1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouac1;                                     //para verificar se o jogo acabou usamos este goto
            continuaac1:                                        //se o jogo não acabou continua
            jogada_chico2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouac2;                                     //para verificar se o jogo acabou usamos este goto
            simcacabouac:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouac1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouac;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouac;
            }
            else{
            goto continuaac1;
            }
            acabouac2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouac;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouac;
            }
            else{
            goto continuaac2;
            }

       }while (controla != 0);
        if(j2e == 0 && j2d == 0){
            printf("Ao calhas 1 ganhou!!!\n");
        }
         if(j1e == 0 && j1d == 0){
            printf("Chico esperto 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "chico-esperto") && !strcmp(argv[2], "chico-esperto")){
        do{
            continuacc2:                                        //se o jogo não acabou continua
            jogada_chico1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acaboucc1;                                     //para verificar se o jogo acabou usamos este goto
            continuacc1:                                        //se o jogo não acabou continua
            jogada_chico2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acaboucc2;                                     //para verificar se o jogo acabou usamos este goto
            simcacaboucc:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acaboucc1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacaboucc;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacaboucc;
            }
            if(strcmp(veri, "muy mal") == 0){
                goto continuacc2;
            }
            else{
            goto continuacc1;
            }
            acaboucc2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacaboucc;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacaboucc;
            }
            if(strcmp(veri, "muy mal") == 0){
                goto continuacc1;
            }
            else{
            goto continuacc2;
            }

        }while (controla != 0);
        
        if(j2e == 0 && j2d == 0){
            printf("Chico esperto 1 ganhou!!!\n"); 
        }
        else if(j1e == 0 && j1d == 0){
            printf("Chico esperto 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "chico-esperto") && !strcmp(argv[2], "humano")){
        do{
            continuach2:                                        //se o jogo não acabou continua
            jogada_chico1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouch1;                                     //para verificar se o jogo acabou usamos este goto
            continuach1:                                        //se o jogo não acabou continua
            jogada_humano2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouch2;                                     //para verificar se o jogo acabou usamos este goto
            simcacabouch:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouch1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouch;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouch;
            }
            if(strcmp(veri, "muy mal") == 0){
                goto continuach2;
            }
            else{
            goto continuach1;
            }
            acabouch2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouch;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouch;
            }
            if(strcmp(veri, "muy mal") == 0){
                goto continuach1;
            }
            else{
            goto continuach2;
            }

        }while (controla != 0);
        
        if(j2e == 0 && j2d == 0){
            printf("Chico esperto 1 ganhou!!!\n"); 
        }
        else if(j1e == 0 && j1d == 0){
            printf("Humano 2 ganhou!!!\n");
        }
    }
    else if (!strcmp(argv[1], "chico-esperto") && !strcmp(argv[2], "ao-calhas")){
        do{
            continuaca2:                                        //se o jogo não acabou continua
            jogada_chico1(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouca1;                                     //para verificar se o jogo acabou usamos este goto
            continuaca1:                                        //se o jogo não acabou continua
            jogada_ao_calhas2(&j1e, &j1d, &j2e, &j2d, j1, j2);
            goto acabouca2;                                     //para verificar se o jogo acabou usamos este goto
            simcacabouca:                                       //se o jogo acabou vem para aqui muda a variável q controla o while e sai do loop
            controla = 0;
            break;;
            
            
            acabouca1:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouca;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouca;
            }
            if(strcmp(veri, "muy mal") == 0){
                goto continuaca2;
            }
            else{
            goto continuaca1;
            }
            acabouca2:                                      //verifica se o jogo acabou
            if(j1e==0&&j1d==0){
            controla= 0;
            goto simcacabouca;
            }
            if (j2e==0&&j2d==0){
            controla= 0;
            goto simcacabouca;
            }
            if(strcmp(veri, "muy mal") == 0){
                goto continuaca1;
            }
            else{
            goto continuaca2;
            }

        }while (controla != 0);
        
        if(j2e == 0 && j2d == 0){
            printf("Chico esperto 1 ganhou!!!\n"); 
        }
        else if(j1e == 0 && j1d == 0){
            printf("Ao calhas 2 ganhou!!!\n");
        }
    }
}
