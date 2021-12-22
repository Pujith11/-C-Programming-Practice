#include <stdio.h>
#include <string.h>

int main()
{
  char text[100];
  int begin, middle, end, length = 0;

  gets(text);
  while (text[length] != '\0')   // Counting the length of string
  {
    length++;
  }
  
  end = length - 1;
  middle = length/2;

  for (begin = 0; begin < middle; begin++)
  {
    if (text[begin] != text[end])
    {
       printf("Not a palindrome.\n");
       break;
    }
    end--;
  }
  if (begin == middle)            // Begin is just less than middle if the program has arrived here
  { 
     printf("The given Input is Palindrome.\n");
  }
  return 0;
}



