# get_next_line

Reads from filedescriptor and returns one line at a time, excluding `\n` chars. This get_next_line implementation handles alternating file descriptors using a static array of char pointers to save references to multiple dynamically allocated buffers.

## Usage
Always free the returned line.

## Compiling
During compilation, the macro BUFFER_SIZE can be redefined using `-D BUFFER_SIZE=<size>`.

## Testing
Compile source code with test.c.  
Run `./a.out <file to read from>`
The main in test.c will open the file and feed get_next_line the corresponding file descriptor.
In case no arguments are given, get_next_line will read from file descriptor 0 (standard input).
