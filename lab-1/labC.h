#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include <conio.h>
#include <stdarg.h>
typedef struct tagLIST LIST; 
struct tagLIST
{
//    TOK T;
    int A;
    LIST* Next;
};

typedef struct
{
    LIST
        * Top, * Tail;
} QUEUE;
