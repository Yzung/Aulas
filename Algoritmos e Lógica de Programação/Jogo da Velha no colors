#include<stdio.h>
#include <locale.h>

void tabuleiro(char m[3][3]); // Imprime o tabuleiro do jogo.
char ganhador(char jogo[3][3]); // Faz a verificação do ganhador.
void jogadas(char jogo[3][3]); // Calcula as jogadas e insere os valores

int main(){
     //setlocale(LC_ALL, ""); Não utilizar biblioteca locale.h, caso contrario a "interface grafica" não funcionará.
     char ng, jogo[3][3]= { {'1','2','3'},
                           {'4','5','6'},
                           {'7','8','9'} };
     jogadas(jogo);
}
void tabuleiro(char m[3][3]){
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°²²²°°°°°²²²°°²²²²²²²²²°°²²°°°°°°°°°²²°°°°°°²²°°°°°²²²²²°°°°°°\n");
    printf("\t°°°²²²°°°°°²²²°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°°°²²°°°²²°°°°°\n");
    printf("\t°°°²²²°°°°°²²²°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°°²²°°°°°²²°°°°\n");
    printf("\t°°°°²²°°°°°²²°°°²²²²²²²²²°°²²°°°°°°°°°²²²²²²²²²²°°²²²²²²²²²²²°°°\n");
    printf("\t°°°°°²²°°°²²°°°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°²²°°°°°°°²²°°°\n");
    printf("\t°°°°°°²²²²²°°°°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°²²°°°°°°°²²°°°\n");
    printf("\t°°°°°°°²²²°°°°°°²²²²²²²²²°°²²²²²²²²²°°²²°°°°°°²²°°²²°°°°°°°²²°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°° %c \xBA %c \xBA %c °°°°°°°°°°°°°°°°°°°°°°°°°°\n", m[0][0],m[0][1],m[0][2]);
	printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°ÍÍÍÎÍÍÍ\xCEÍÍÍ°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("\t°°°°°°° PLAYER 1 = X °°°°°° %c \xBA %c \xBA %c °°°°°°° PLAYER 2 = O °°°°°\n", m[1][0],m[1][1],m[1][2]);
	printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°ÍÍÍÎÍÍÍ\xCEÍÍÍ°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°° %c \xBA %c \xBA %c °°°°°°°°°°°°°°°°°°°°°°°°°°\n", m[2][0],m[2][1],m[2][2]);
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
     //caracteres usados como referencia.
    //("\t\t ð Ð Ê Ë È  Í Î Ï Ì Ó ß Ô Ò Õ Õ µ Þ Þ Ú Û Ù ý Ý ¯ ´ ± _ ¾ ¶ § ÷ ¸ ° ¨ · ¹ ³ ² _\n\n");
    //("Ç É Ö Ø × Ñ ª º ¿ ½ ¼ » Á Â À © \n");
}
char ganhador(char jogo[3][3]){
     if( (jogo[0][0]=='X'&&jogo[0][1]=='X'&&jogo[0][2]=='X')||
        (jogo[1][0]=='X'&&jogo[1][1]=='X'&&jogo[1][2]=='X')||
        (jogo[2][0]=='X'&&jogo[2][1]=='X'&&jogo[2][2]=='X')||
        (jogo[0][0]=='X'&&jogo[1][0]=='X'&&jogo[2][0]=='X')||
        (jogo[0][1]=='X'&&jogo[1][1]=='X'&&jogo[2][1]=='X')||
        (jogo[0][2]=='X'&&jogo[1][2]=='X'&&jogo[2][2]=='X')||
        (jogo[0][0]=='X'&&jogo[1][1]=='X'&&jogo[2][2]=='X')||
        (jogo[0][2]=='X'&&jogo[1][1]=='X'&&jogo[2][0]=='X') ){
        system("cls");
        tabuleiro(jogo);
        printf("\t°°°°°°°°°°°°°°°°°°°°°°°° PLAYER 1 VENCEU °°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        return '1';
    }
     if( (jogo[0][0]=='O'&& jogo[0][1]=='O'&&jogo[0][2]=='O')||
        (jogo[1][0]=='O'&& jogo[1][1]=='O'&&jogo[1][2]=='O')||
        (jogo[2][0]=='O'&& jogo[2][1]=='O'&&jogo[2][2]=='O')||
        (jogo[0][0]=='O'&& jogo[1][0]=='O'&&jogo[2][0]=='O')||
        (jogo[0][1]=='O'&& jogo[1][1]=='O'&&jogo[2][1]=='O')||
        (jogo[0][2]=='O'&& jogo[1][2]=='O'&&jogo[2][2]=='O')||
        (jogo[0][0]=='O'&& jogo[1][1]=='O'&&jogo[2][2]=='O')||
        (jogo[0][2]=='O'&& jogo[1][1]=='O'&&jogo[2][0]=='O') ){
        system("cls");
        tabuleiro(jogo);
        printf("\t°°°°°°°°°°°°°°°°°°°°°°°° PLAYER 2 VENCEU °°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        return '2';
    }
    return 0;
}
void jogadas(char jogo[3][3]){
     int l=0;
    char result,jogada;
     do{
        tabuleiro(jogo);
        if(l%2==0){
            printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°° PLAYER 1 °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t\t");
        }else{
            printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°° PLAYER 2 °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t\t");
        }
         scanf("%s", &jogada);

         if(l%2==0){
            if(jogada=='1'&&jogo[0][0]=='1'){
                jogo[0][0] = 'X';
                l++;
            }else if(jogada=='2'&&jogo[0][1]=='2'){
                jogo[0][1] = 'X';
                l++;
            }else if(jogada=='3'&&jogo[0][2]=='3'){
                jogo[0][2] = 'X';
                l++;
            }else if(jogada=='4'&&jogo[1][0]=='4'){
                jogo[1][0] = 'X';
                l++;
            }else if(jogada=='5'&&jogo[1][1]=='5'){
                jogo[1][1] = 'X';
                l++;
            }else if(jogada=='6'&&jogo[1][2]=='6'){
                jogo[1][2] = 'X';
                l++;
            }else if(jogada=='7'&&jogo[2][0]=='7'){
                jogo[2][0] = 'X';
                l++;
            }else if(jogada=='8'&&jogo[2][1]=='8'){
                jogo[2][1] = 'X';
                l++;
            }else if(jogada=='9'&&jogo[2][2]=='9'){
                jogo[2][2] = 'X';
                l++;
            }
        }else if(l%2!=0){
            if(jogada=='1'&&jogo[0][0]=='1'){
                jogo[0][0] = 'O';
                l++;
            }else if(jogada=='2'&&jogo[0][1]=='2'){
                jogo[0][1] = 'O';
                l++;
            }else if(jogada=='3'&&jogo[0][2]=='3'){
                jogo[0][2] = 'O';
                l++;
            }else if(jogada=='4'&&jogo[1][0]=='4'){
                jogo[1][0] = 'O';
                l++;
            }else if(jogada=='5'&&jogo[1][1]=='5'){
                jogo[1][1] = 'O';
                l++;
            }else if(jogada=='6'&&jogo[1][2]=='6'){
                jogo[1][2] = 'O';
                l++;
            }else if(jogada=='7'&&jogo[2][0]=='7'){
                jogo[2][0] = 'O';
                l++;
            }else if(jogada=='8'&&jogo[2][1]=='8'){
                jogo[2][1] = 'O';
                l++;
            }else if(jogada=='9'&&jogo[2][2]=='9'){
                jogo[2][2] = 'O';
                l++;
            }
        }

         result = ganhador(jogo);
         if(result=='1'){
            break;
        }else if(result=='2'){
            break;
        }else if(l==9){
            system("cls");
            tabuleiro(jogo);
            printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°° DEU VELHA °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            break;
        }
        system("cls");
    }while(l<=9);
}
