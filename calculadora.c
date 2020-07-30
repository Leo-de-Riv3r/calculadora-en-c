#include <stdio.h>

int main(){
int ctrl = 1;
do{
float result=0,nums,acum=0;
int v,i,x;
int cont=0;

   printf("\n\nCuantos numeros va a utilizar? \n");
   scanf("%d", &v);
   if (v > 0){
   float valores[v];
   int longitud = sizeof(valores) / sizeof(valores[0]);
   
   printf("\n\nQue operacion desea realizar?\n 0-Salir \n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division \n 5-Factorial \n 6-Promedio \n 7-El tanto porciento de \n 8-N cantidad de X es igual a Y porciento\n");
   scanf("%d", &i);
   
   switch(i){
   	    case 0:
   	    printf("Vas a salir del programa, que tengas un buen dia :)");
   	    ctrl = 0;
   	    break;
   	  	
      case 1: //funciona
      for (x; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      result += valores[x];
      }
      printf("El resultado es %f", result);
      break;
      
      case 2://funciona
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      if (cont < 1){
        result = valores[0];
	  }else{
      result = result - valores[x];
      }
      cont++;
      }
      printf("El resultado es %f", result);
	  break;   
	  
	  case 3://funciona
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      if (cont < 1){
        result = valores[0];
	  }else{
      result = result * valores[x];
      }
      cont++;
	  }
	  printf("El resultado es %f", result);
	  break;    
     
      case 4://funciona
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%f", &nums);
      valores[x] = nums;
      if (cont < 1){
        result = valores[0];
	  }else{
      result /= valores[x];
      }
	  cont++;
	  }
	  printf("El resultado es %f", result);
	  break;   
      
      case 5://funciona
      printf("Ingrese el numero");
      scanf("%f", &nums);
      result = 1;
      while (nums > 1){
        result *= nums;
      	nums--;
	  }
	  printf("El resultado es %f", result);
	  break;  
      
      case 6:
      for (x = 0; x < longitud; x++){
        printf("Ingrese el numero %i\n", x);
        scanf("%f", &nums);
        acum = acum + nums;
        cont++;
      }
      result = acum / cont;
      printf("El resultado es %f", result);
      break;
      
      case 7:
      printf("Ingrese la cantidad que representa al 100 porciento:");
      scanf("%f", &nums);
      printf("Ingrese el porcentaje del total que desea averiguar:");
      scanf("%f", &acum);
      result = (acum * nums) / 100;
      printf("El %f porciento de %f es igual a %f", acum, nums, result);
      break;
      
      case 8:
      printf("Ingrese la cantidad que representa al 100 porciento:");
      scanf("%f", &nums);
      printf("Ingrese la cantidad del total de la cual quiere hallar su equivalencia en porcentaje:");
      scanf("%f", &acum);
      result = (acum * 100) / nums;
	  printf("%f es igual al %f porciento de %f", acum,result,nums);
	  break;
	   
      default:
      printf("Ingrese un opcion valida!");
      break;
   }
}else{
	printf("Gracias por utilizar este programa ;)");
	ctrl = 0;
	
}
}while (ctrl != 0);

   return 0;
}

