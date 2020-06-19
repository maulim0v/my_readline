# my_readline

## Name
`char *myReadline(int fd);`

## Description
The function `myReadline` reads a line from the stream represented by fd and returns it into an allocated string (heap). It stops when either the newline character is read (`\n`) or when the end-of-file (`\0`) is reached, whichever comes first. The newline character is not copied to the string.

On success, a pointer to the string is returned. On error, a null pointer is returned. If the end-of-file occurs before any characters have been read, the string remains unchanged.

Number of characters read is set by the define READLINE_READ_SIZE.
Used one global static variable. Feel free to change READLINE_READ_SIZE.

## Functions used
```
malloc
free
read
open
close
```
