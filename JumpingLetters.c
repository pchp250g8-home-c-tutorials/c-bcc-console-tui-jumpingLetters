#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <threads.h>
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    char szLine[] = "Hello World!!! Jumping Letters!!! Press Any Key To Exit!!!";
    int nLen = strlen(szLine);
    timespec sDuration;
    sDuration.nsec = 50000000;
    clrscr();
    _setcursortype(0);
    for (int i = 0; i < nLen; i++)
    {
        for (int j = 80; j > 10 + i; j--)
        {
            gotoxy(10 + j, 10);
            cprintf("%c ", szLine[i]);
            thrd_sleep(&sDuration, NULL);
        }
    }
    getch();
}
