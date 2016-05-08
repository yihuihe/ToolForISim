#include <stdio.h>
#include <stdlib.h>
#include "Function.h"


int main()
{
    int     FunctionSel_temp=-1;
    int     FunctionSel_flag=0;
//////////////////////////////////////////////////////////////////////
// function: show the menu
//////////////////////////////////////////////////////////////////////
    FunctionSel_temp=StartMenu();

///////////////////////////////////////////////////////////////////////
// 1.function for creating project_test_bench.prj
// 2.function for creating project_test_bench.bat
///////////////////////////////////////////////////////////////////////
    while(1)
    {
       FunctionSel_flag=ActionToMenu(FunctionSel_temp);
       if (FunctionSel_flag==-2) // input error
        {
            StartMenu();
        }
        else if(FunctionSel_flag==-1) // exit
        {
            printf("EXIT\n");
            return 0;
        }
        else if (FunctionSel_flag==1)//function for creating project_test_bench.prj
        {
            printf("You can select next function\n\n");
            FunctionSel_temp=StartMenu();
        }

        else if(FunctionSel_flag==2)//function for creating project_test_bench.bat
        {
            printf("You can select next function\n\n");
            FunctionSel_temp=StartMenu();
        }
        else if(FunctionSel_flag==3)//function for creating run.tcl
        {
            printf("You can select next function\n\n");
            FunctionSel_temp=StartMenu();
        }

    }




    return 0;
}
