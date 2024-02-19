#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int board[8][8] = {0};

int get_random(int range)
{
return (int)(rand() %range + 1);
}

void generate(){for(int i=0;i<=8;i++){board[get_random(8)][get_random(8)] = 1;}}
void print_generated(){for(int i=0;i<=8;i++){for(int j=0;j<=8;j++){if(board[i][j]==1){printf("Fila: %d - Columna:%d \n",i,j);};}}}

bool check(int fila, int columna)
{

if( board[fila][columna] == 1 ){return true;}
return false;
}



int game(){
int i;
float j;
int score=0;
int fila, columna;
//convertir en cordenadas, la orientacion de los numeros se leen de izquierda a derecha.

printf("INGRESE POSICION [1 - 64], LAS MINAS ESTAN COLOCADAS DE IZQUIERDA A DERECHA:");
scanf("%d",&i);

do{
j = ((float)i / 8 );
i = (i/8);
fila = i;
columna =(int)((j-(float)i)*8);
printf("Fila: %d\n",fila);
printf("Columna: %d\n",columna);
printf("SCORE:%d\n",score+=50);

printf("INGRESE POSICION [1 - 64], LAS MINAS ESTAN COLOCADAS DE IZQUIERDA A DERECHA:");
scanf("%d",&i);
}
while(check(fila,columna) != true);
printf("BOOM!\n");
print_generated();
return 0;
}

int main()
{
char answer;

printf("QUIERE JUGAR? (s/n):");
scanf(" %c",&answer);

while(answer == 's')
{
generate();	
game();	
printf("GAME OVER, QUIERE JUGAR DE NUEVO (s/n):");
scanf(" %c",&answer);
}

printf("2024, Creado por @Nerdemma www.emmanuelbreyaue.com /n");
return 0;
}
