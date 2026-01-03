#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *poem = fopen("draft1.txt", "r");
    char *buffer = malloc(sizeof(char));
    while (fread(buffer, sizeof(char), 1, poem))
    {
        printf("%c", *buffer);
    }
    printf("\n");
}