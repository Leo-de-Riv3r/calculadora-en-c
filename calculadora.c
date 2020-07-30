//en desarrollo
#include <stdio.h>
int main(){
  float result;
  int cont=0;
  int v,i,x,ctrl;
  int nums, acum;
  do{
  printf("Cuantos numeros va a utilizar?");
  scanf("%d", &v);
  int valores[v];
  int longitud = sizeof(valores) / sizeof(valores[0]);
  printf("Que operacion desea realizar?\n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division \n 5- Promedio \n 6-Salir\n");
  scanf("%d", &i);

    switch(i){
      
      case 1:
<<<<<<< HEAD
        for (x = 0; x < longitud; x++){
        printf("Ingrese el numero %i\n", x);
        scanf("%d", &nums);
        valores[x] = nums;
        result +=valores[x];
=======
      for (x = 0; x < longitud; x++){
      printf("Ingrese el numero %i\n", x);
      scanf("%d", &nums);
      valores[x] = nums;
      result = valores[0];
      result +=valores[x];
>>>>>>> 934b0ff3a00324e3be7be78f11a10d6711f1e555
      }
      break;

      case 2:
        for (x = 0; x < longitud; x++)
        {
          printf("Ingrese el numero %i\n", x);
          scanf("%d", &nums);
          valores[x] = nums;
          if (cont < 1){
            result = valores[0];
		      }
		      else{
            result -= valores[x];
          }
          cont++;
        }
        break;

      case 3:
        for (x = 0; x < longitud; x++)
        {
          printf("Ingrese el numero %i\n", x);
          scanf("%d", &nums);
          valores[x] = nums;
            if (cont < 1){
            	result = valores[0];
		        }
		        else{
              result *= valores[x];
            }
          cont++;
        }
        break;

        case 4:
          for (x = 0; x < longitud; x++)
          {
            printf("Ingrese el numero %i\n", x);
            scanf("%d", &nums);
            valores[x] = nums;
              if (cont < 1){
          	    result = valores[0];
		          }
		          else{
                result /= valores[x];
              }
            cont++;
        }
        break;
        
        case 5:

        for (x = 0; x < longitud; x++)
        {
          printf("Ingrese el numero %i\n", x);
          scanf("%d", &nums);
          valores[x] = nums;
          acum += nums; 
        }
        result = acum / cont;
        break;
        
        case 6:
          printf("Chau, hasta la proxima, que tengas un buen dia!");
          ctrl = 0;

        default:
        printf("Ingrese un opcion valida!");
        break;
   }

   printf("El resultado es igual a %f", result);
  }
  while(ctrl != 0);

  return 0;
}



