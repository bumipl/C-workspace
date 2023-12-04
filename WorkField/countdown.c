// countdown.c

#include <stdio.h> 
#include <unistd.h>

int main()
{
  int number;
  
  printf("Pass the countdown value: ");
  scanf("%d", &number);

  while (1)
  {
    printf("%d\n", number);
    sleep(1);
    // below is the same as -> number = number - 1;
    //number -= 1;
    
    // below is the same as -> number -=1
    number--; //it will decrease var. number by 1 //possibly number++

    if (number < 1)
    {
      break;
    }
  }

  return 0;
}
