#ifndef OPENPTY_H
#define OPENPTY_H

int
openpty (int *amaster, int *aslave, char *name, struct termios const *termp, struct winsize const *winp);

#endif
