#include <stdio.h>
#include <stdlib.h>
main () {
    int pid;
    
    pid = fork (); /* Duplicate */
    
    /* Branch based on return value from fork () */
    if (pid != 0)  {
        /* Never terminate, never execute a wait () */
        while (1)
            sleep (1000);
    }else {
        exit (42); /* Exit with a silly number */
    }
}

