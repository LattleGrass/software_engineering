#include <stdio.h>
#include <stdlib.h>

int main()
{
    char len[100];
    while(1)
    {
        scanf("%s", len);
        if(!strcmp(len, "help"))
        {
            printf("This is wrong\n");
        }
        else if(!strcmp(len, "a"))
        {
            exit(0);
        }
        else
        {
            printf("Wrong cmd!\n");
        }
    }
    return 0;
}
