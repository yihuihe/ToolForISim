#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

int Create_test_bench_bat_function()
{
    char  test_bench_File_Name[100];

    printf("Please input the name of test bench file:\n");
    scanf("%s",test_bench_File_Name);


    FILE  *p;
    p = fopen("project_test_bench.bat","w");
    fprintf(p,"fuse work.%s  work.glbl -prj project_test_bench.prj -L unisims_ver   -L unimacro_ver  -L xilinxcorelib_ver  -o isim_test.exe\n",test_bench_File_Name);
    fclose (p);

    return 0;


}
