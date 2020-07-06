# get_next_line

Reads from filedescriptor and returns one line at a time, excluding \n chars.
Always free the returned line.

This get_next_line implementation handles alternating file descriptors using a static array of char pointers to save references to multiple malloced buffers.

## Compiling
During compilation, macro BUFFER_SIZE can be defined using " -D name=definition ".

## Testing
Compile source code with test.c .
run ./a.out with one argument: the name of the file to read from.
test.c will open the file and feed get_next_line the corresponding file descriptor.
In case no arguments are given, get_next_line will read from file descriptor 0 (standard input).
