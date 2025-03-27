/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float distancia;
    float tempoE;
    float velocidadeMedia;

    
    printf("Digite a distancia: Km ");
    scanf("%f", &distancia);
    
    printf("Digite a velocidade Media: Km/h ");
    scanf("%f", &velocidadeMedia);
    
    tempoE = distancia / velocidadeMedia;
   
    
    printf("o tempo que essa viagem vai durar: %2.f horas", tempoE);
    
    return 0;
}
