#include <stdio.h>

int main(){

    int x, y;
    int matriz [10][10];

for (int x = 0; x < 10; x++)
{
    for (int y = 0; y < 10; y++)
    {
        matriz[x][y] = 0;
    }
    
}

//NAVIO VERTICAL

for (int x = 3; x <= 5; x++)
{
    matriz[x][0] = 3;
}

//NAVIO HORIZONTAL

for (int y = 6; y <= 8; y++)
{
    matriz[8][y] = 3;
}

printf(" | A | B | C | D | E | F | G | H | I | J \n");
printf("-----------------------------------------\n");
for (int x = 0; x < 10; x++)
{
    printf("%d", x);
    for (int y = 0; y < 10; y++)
    {
      
        printf("| %d ", matriz[x][y]);
        
    }
    printf("\n");
}

    return 0;
}