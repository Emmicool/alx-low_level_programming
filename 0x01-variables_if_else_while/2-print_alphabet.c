#include <stdio.h>



/*

* main - print the string in the put function

*

*Return: Always 0 (Success)

*/



int main(void)
  
{
  
  char a;
  

  
  a = 'a';
  
  while (a <= 'z')
    
    {
      
      putchar(a);
      
      a++;
      
    }
  
  putchar('\n');
  
  return (0);
  
}
