#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	// Elabore um programa em C/C++ que entre com 5 n�meros inteiros em um vetor A, e imprima o �ndice do 
    // primeiro n�mero negativo, se houver. Caso n�o existam n�meros negativos, imprimir a seguinte mensagem 
    // �Negativo n�o encontrado�.
	
	int A[5], i, cont=0;
    
    for(i=0; i<=4; i++)
    {
        printf("N�mero: ");
        scanf("%d", &A[i]);
    }
    
    for(i=0; i<=4; i++)
    {
        if(A[i]<0)
        {    
    		printf("O N�mero negativo �: %d e o �ndice �: %d\n", A[i], i);
            i=4;
        }
    } 
	   
    for(i=0; i<=4; i++)
    {
        if(A[i]>0)
        {
            cont++;
        }
    }
    
    if(cont==5)
    {
        printf("Negativo n�o encontrado");
    }
	
}

