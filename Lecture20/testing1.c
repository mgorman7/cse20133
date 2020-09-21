#include <stdio.h>

int main()
{
    int i;
    
    for (i = 0; i < 5; ++i) {
        
        switch (i % 5)
        {
            case 2:
            case 3:
              fprintf(stdout, "*       *\n");
              break;
            case 1:
            case 4:
              fprintf(stdout, " *******\n ");
              break;
            default:
              fprintf(stdout, " Beginning:\n ");
        }
    }

    return 0;
}