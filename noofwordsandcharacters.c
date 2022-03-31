#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[100];

    char ch;
    int characters, words;


   
    /* Open source files in 'r' mode */
    file = fopen("text.txt", "r");


    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    /*
     * Logic to count characters, words and lines.
     */
    characters = words = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

       

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        
    }

    /* Print file statistics */
   
     printf("Number of words=%d and ", words);
    printf("Number of characters=%d", characters);
    
   

    fclose(file);

    return 0;
}
