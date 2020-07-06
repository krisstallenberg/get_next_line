#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int     main(int argc, char **argv)
{
    int fd;
    char *line;
    if (argc == 1)
        fd = 0;
    if (argc == 2)
        fd = open(argv[1], O_RDONLY);
    else
        exit (EXIT_FAILURE);
    while (get_next_line(fd, &line) == 1)
    {
        printf("%s\n", line);
        free(line);
    }
    if (line)
    {
        printf("%s\n", line);
        free(line);
    }
    if (argc == 2)
        if (-1 == close(fd))
            printf("error upon closing fd\n");
    exit (EXIT_SUCCESS);
}