#include <stdio.h>
int main(){
   int result;
   int v;
   int i;
   int x;
   int nums;
   printf("Cuantos numeros va a utilizar?");//aun no funciona
   scanf("%d", &v);
   int valores[v];
   int longitud = sizeof(valores) / sizeof(valores[0]);

   printf("Que operacion desea realizar?\n 1-Suma \n 2-Resta \n");
   scanf("%d", &i);

   switch(i){
      case 1:
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%d", &nums);
      valores[x] = nums;
      result +=valores[x];
      }
      break;
      case 2:
        for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%d", &nums);
      valores[x] = nums;
      inicio = valores[0];
      result -= valores[x];
      }
        break;
      default:
        printf("Ingrese un opcion valida!");
        break;
   }

   printf("El resultado es igual a %i", result);
   return 0;
}
