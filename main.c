
#include <stdio.h>


int main(){

   char operator;
   double num1;
   double num2;
   double result;



   printf("\nEnter an operator : \n ");
   scanf("%c", &operator);


   printf("Enter number 1:\n");
   scanf("%lf", &num1);

   printf("Enter number 2: \n ");
   scanf("%lf", &num2);



   switch(operator){
      case '+':
         result = num1 + num2;
         printf("\nresult: %.2lf", result);
         break;
      case '-':
         result = num1 - num2;
         printf("\nresult: %.2lf", result);
         break;
      case '*':
         result = num1 * num2;
         printf("\nresult: %.2lf", result);
         break;
      case '/':
          if(num2==0){
            printf("erreur");
          }
            else{
         result = num1 / num2;
         printf("\nresult: %.2lf", result);
          }
         break;
      default:
         printf(" not valid");
   }

   return 0;
}
