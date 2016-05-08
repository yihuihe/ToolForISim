#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

int Create_run_tcl_function()
{
    FILE *p;
    p = fopen ("run.tcl","w");
    fprintf(p,"wave add /\n");
    fprintf(p,"run 5000 ns\n");
    fprintf(p,"vcd dumpfile result.vcd\n");
    fprintf(p,"run 5000 ns\n");
    fclose(p);
}
