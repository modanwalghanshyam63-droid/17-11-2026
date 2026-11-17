#include<stdio.h>
int main ()
{
  int a,b;
  printf("Enter value of a and b-");
  scanf("%d",&a);
  scanf("%d",&b);

  char ch;
  printf("Enter the value of ch");
  scanf("%c",&ch);


  switch(ch)
  {
   
     case'+': printf("sum of a and b - %d",a+b);
               break;

     case'*': printf("product of a and b - %d",a*b);
               break;          
     case'-': 
      if(a>b)
         
        printf("Subtraction of a and b - %d",a-b);

     

    else 
        printf("nope");
    break;
  

   default: printf("invalid input");
            
}  
  return 0;

}
