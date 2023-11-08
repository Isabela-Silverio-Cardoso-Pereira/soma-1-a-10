/******************************************************************************
Escreva um programa em C++ que use um loop while para calcular a soma dos números de 1 a 10.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int numeros = 10;
   int i = 1;
  int soma = 0;


   
   
   
   while(i<=numeros){
       
       soma = soma+i;
       i++;
      
   }
   cout << "a soma é" << soma << ": ";

    return 0;
}
