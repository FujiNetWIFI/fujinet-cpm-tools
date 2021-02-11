/**
 * #FujiNet LISTEN.COM
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
  unsigned short port = atoi(argv[1]);

  if (argc<2)
    {
      printf("\nPort # 1-65535 required.\n");
      return 1;
    }

  // Request to listen for connections.
  bdos(179,port);

  printf("\nNow listening for TCP connections on port %u\n",port);

  return 0;
}
