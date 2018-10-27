#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <locale.h>

void SetColor(int ForgC); // Função pronta pega da internet para colorir textos
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
    SetColor(11);
    printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t\t°°°²²²°°°°°²²²°°²²²²²²²²²°°²²°°°°°°°°°²²°°°°°°²²°°°°°²²²²²°°°°°°\n");
    printf("\t\t\t°°°²²²°°°°°²²²°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°°°²²°°°²²°°°°°\n");
    printf("\t\t\t°°°²²²°°°°°²²²°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°°²²°°°°°²²°°°°\n");
    printf("\t\t\t°°°°²²°°°°°²²°°°²²²²²²²²²°°²²°°°°°°°°°²²²²²²²²²²°°²²²²²²²²²²²°°°\n");
    printf("\t\t\t°°°°°²²°°°²²°°°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°²²°°°°°°°²²°°°\n");
    printf("\t\t\t°°°°°°²²²²²°°°°°²²°°°°°°°°°²²°°°°°°°°°²²°°°°°°²²°°²²°°°°°°°²²°°°\n");
    printf("\t\t\t°°°°°°°²²²°°°°°°²²²²²²²²²°°²²²²²²²²²°°²²°°°°°°²²°°²²°°°°°°°²²°°°\n");
    printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°");
    SetColor(15);
    printf(" %c ", m[0][0]);
    SetColor(11);
    printf("\xBA");
    SetColor(15);
    printf(" %c ", m[0][1]);
    SetColor(11);
    printf("\xBA");
    SetColor(15);
    printf(" %c", m[0][2]);
    SetColor(11);
    printf(" °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°ÍÍÍÎÍÍÍ\xCEÍÍÍ°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("\t\t\t°°°°°°°");
	SetColor(9);
    printf(" PLAYER 1 = X ");
    SetColor(11);
    printf("°°°°°°");
	SetColor(15);
    printf(" %c ", m[1][0]);
    SetColor(11);
    printf("\xBA");
    SetColor(15);
    printf(" %c ", m[1][1]);
    SetColor(11);
    printf("\xBA");
    SetColor(15);
    printf(" %c ", m[1][2]);
    SetColor(11);
    printf("°°°°°°°");
	SetColor(10);
    printf(" PLAYER 2 = O ");
    SetColor(11);
    printf("°°°°°\n");
	printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°ÍÍÍÎÍÍÍ\xCEÍÍÍ°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	SetColor(15);
    printf(" %c ", m[2][0]);
    SetColor(11);
    printf("\xBA");
    SetColor(15);
    printf(" %c ", m[2][1]);
    SetColor(11);
    printf("\xBA");
    SetColor(15);
    printf(" %c", m[2][2]);
    SetColor(11);
    printf(" °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

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
        printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°");
        SetColor(9);
        printf(" PLAYER 1 VENCEU ");
        SetColor(11);
        printf("°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
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
        printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°");
        SetColor(10);
        printf(" PLAYER 2 VENCEU ");
        SetColor(11);
        printf("°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
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
            printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            SetColor(9);
            printf(" PLAYER 1 ");
            SetColor(11);
            printf("°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t\t\t\t");
        }else{
            printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            SetColor(10);
            printf(" PLAYER 2 ");
            SetColor(11);
            printf("°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t\t\t\t");
        }

        scanf("%c", &jogada);

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
        SetColor(4);
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
            printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°");
            SetColor(13);
            printf(" DEU VELHA ");
            SetColor(11);
            printf("°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            break;
        }
        system("cls");
    }while(l<=9);
}
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
