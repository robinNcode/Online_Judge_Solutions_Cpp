#include <string.h>
#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv)
{

    char words[1100];

    bool body = false;
    while (~scanf("%[^\n]%*c", words))
    {
        for(int ptr=0; ptr<sizeof(words); ptr++){
            printf("lol = ", words[ptr]);
        }
    }

    return 0;
}
