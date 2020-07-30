#include <stdio.h>
int main(){
   float result, nums;
   int v,i,x,ctrl=1;
   int cont=0;
  
   do{
   printf("\n\nCuantos numeros va a utilizar? \n");
   scanf("%d", &v);
   
   float valores[v];
   int longitud = sizeof(valores) / sizeof(valores[0]);
   
   printf("\n\nQue operacion desea realizar?\n 0-Salir \n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division \n 5-Promedio \n");
   scanf("%d", &i);
   
   switch(i){
   	    case 0:
   	    printf("Vas a salir del programa, que tengas un buen dia :)");
   	    ctrl = 0;
   	    break;
   	  	
      case 1: //funciona
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      result += valores[x];
      }
      break;
      
      case 2://funciona
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      if (cont < 1){
        result = valores[0];
	  }
      result -= valores[x];
      }
      cont++;
      break;   
	  
	  case 3://funciona
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      if (cont < 1){
        result = valores[0];
	  }
      result *= valores[x];
      }
      cont++;
      break;    
     
      case 4:// no funciona
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      if (cont < 1){
        result = valores[0];
	  }
      result /= valores[x];
      }
      cont++;
      break;   
      
      default:
      printf("Ingrese un opcion valida!");
      break;
   }
   printf("El resultado es igual a %f", result);
   }while(ctrl != 0);

   return 0;
}

