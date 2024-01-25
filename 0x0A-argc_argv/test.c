#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

 	int i, sum = 0;
    char *s;
      for (i = 1; i < argc; i++)
      {
        for (s = argv[i]; *s; s++)
        {
            if ( *s < '0' || *s > '9')
            {
                return (printf("Error\n"), 1);
            }
        }
         sum += atoi(argv[i]);
      }

    printf("sum : %d\n", sum);
	return (0);
}






