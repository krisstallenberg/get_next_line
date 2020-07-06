# get_next_line

Reads from filedescriptor and returns one line at a time, excluding \n chars.
Always free the returned line.

## Compiling
During compilation, macro BUFFER_SIZE can be defined using " -D name=definition ".

## Testing
Compile source code with test.c and give a.out 1 argument: the text file to read from. 
test.c will open the file and feed get_next_line the corresponding file descriptor. 
