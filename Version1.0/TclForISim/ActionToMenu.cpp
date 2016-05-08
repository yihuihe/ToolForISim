#include<stdio.h>
#include"Function.h"

int ActionToMenu (int Sel_number)
{
    int     FunctionSel_temp = Sel_number;


    switch(FunctionSel_temp)
    {
        case 1://function for creating project_test_bench.prj
        {
            if(!(Create_test_bench_prj_function()))
                printf("Complete creating project_test_bench.prj\n\n\n\n\n");
            else
                printf("Fail to create project_test_bench.prj\n\n\n\n\n");
            return 1;
            break;
        }
        case 2://function for creating project_test_bench.bat
        {
            if(!(Create_test_bench_bat_function()))
                 printf("Complete creating project_test_bench.bat\n\n\n\n\n");
            else
                printf("Fail to create project_test_bench.bat\n\n\n\n\n");
            return 2;
            break;
        }
        case 3:
        {
            if(!(Create_run_tcl_function()))
                 printf("Complete creating run.tcl\n\n\n\n\n");
            else
                printf("Fail to create run.tcl\n\n\n\n\n");
            return 3;
            break;
        }
        case 4://return 0
        {
            return -1;
            break;
        }
        default://input error
        {
            printf("Input error\n");
            printf("You should select again\n\n\n\n\n");
            return -2;
        }

    }
}
