#include"Function.h"
#include<stdio.h>

int StartMenu ()
{
    int FunctionSel=-1; // Number record the selection to function

    //printf("Welcome to a Management Console!\n");
    printf("You should choose which function to realzie\n");
    printf("*********************************************************\n");
    printf("******  A startmenu for creating ISim TCL command  ******\n\t ");
    printf("1.function for creating project_test_bench.prj\n\t ");
    printf("2.function for creating project_test_bench.bat\n\t");
    printf("3.function for running ISim\n\t");
    printf("4.Exit\n");
    printf("*********************************************************\n");
    printf("\n");
    printf("Please input the function you want to do:\n\t");
    scanf("%d",&FunctionSel);
    // printf("%d\n",FunctionSel);
    printf("\n");
    return FunctionSel;

}
