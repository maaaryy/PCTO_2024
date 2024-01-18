#include <stdio.h>

char funzioneVocaleConsonante(char c){
    if((c>=97 && c<=122)||(c>=65 && c<=122)){
        if((c == 'a' || c=='A' ) || (c == 'e'|| c=='E') || (c == 'i' || c== 'I') || (c == 'o'|| c=='O') || (c == 'u'|| c=='U')){
            printf("è una vocale\n");
        }else{
            printf(" è una consonante\n");
        }
    }else{
        printf("non è una lettera\n");
    }
}

int main(){
    char c;

    printf("inserisci un carattere:\n");
    scanf("%c", &c);
    funzioneVocaleConsonante(c);
    return(0);
}