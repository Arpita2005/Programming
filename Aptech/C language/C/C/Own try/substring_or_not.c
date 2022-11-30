#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<conio.h>

int find_str_in_str(const char *const base, const char *const sub)
{
    int base_len = strlen(base);
    int sub_len = strlen(sub);
    char *tmp_sub = NULL;

    /* allocate enough mem for the max string length */
    if (base_len > sub_len)
    {
        tmp_sub = malloc(base_len + 1);
    }
    else
    {
        tmp_sub = malloc(sub_len + 1);
    }

    if (NULL == tmp_sub)
    {
        fprintf(stderr, "Runtime error (malloc)\n");
        exit(1);
    }

    int i = 0;
    int j = 0;

    for (; i < sub_len; i++)
    {
        for (; j < base_len; j++)
        {
            if (base[j] == sub[i])
            {
                tmp_sub[i] = base[j];
                /* the first occurance was found */
                break;
            }
        }
    }

    tmp_sub[i++] = '\0';

    if (0 == strcmp(sub, tmp_sub))
    {
        free(tmp_sub);
        return 1;
    }
    else
    {
        free(tmp_sub);
        return 0;
    }
}

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s %s %s\n", argv[0], "base", "derived");
        return EXIT_FAILURE;
    }

    if (1 == find_str_in_str(argv[1], argv[2]))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return EXIT_SUCCESS;
}