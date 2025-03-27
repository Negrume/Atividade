/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
  7) Crie um programa que receba três números inteiros representando os lados de um triângulo e determine se o triângulo é válido. 
  Um triângulo é válido se a soma de dois lados é sempre maior que o terceiro lado. O programa deve informar se o triângulo é válido ou não.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int primeiro;
    int segundo;
    int terceiro;
    int valor;
    
    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &primeiro);
    
    printf("Digite o valor do segundo lado: ");
    scanf("%d", &segundo);
    
    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &terceiro);
    
    valor = segundo + primeiro;
    
    if(valor > terceiro)
    {
        printf("esse é um triângulo valido");
    }
    
    
    return 0;
}