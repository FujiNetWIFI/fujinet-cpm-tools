/**
 * #FujiNet BYE.COM
 *
 * Author:
 *  Thom Cherryhomes <thom.cherryhomes@gmail.com>
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  // Hang up!
  printf("Thanks for calling!\n");

  sleep(2);
  
  bdos(182,0);
    
  printf("Waiting for connection...");

  while (bdos(180,0) == 0)
    {
      csleep(1);
    }

  printf("Accepting connection.");

  bdos(181,0);

  execv("A:BBS.COM",NULL);
  
  return 0;
  
}
