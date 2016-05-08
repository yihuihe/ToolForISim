#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Function.h"

int Create_test_bench_prj_function()
{
    FILE  *p;
    p = fopen("project_test_bench.prj","w");

    HANDLE hFile;
	LPCTSTR lpFileName = "E:\\isim_project\\*.v";	//指定搜索目录和文件类型，如搜索d盘的音频文件可以是"D:\\*.mp3"
	WIN32_FIND_DATA pNextInfo;	//搜索得到的文件信息将储存在pNextInfo中;

	hFile = FindFirstFile(lpFileName,&pNextInfo);//请注意是 &pNextInfo , 不是 pNextInfo;
	fprintf(p,"verilog work \"%s\" \n",pNextInfo.cFileName); //这是第一个.v文件

	if(hFile == INVALID_HANDLE_VALUE)
	{
		//搜索失败
		exit(-1);
	}

	while(FindNextFile(hFile,&pNextInfo))
	{
		if(pNextInfo.cFileName[0] == '.')//过滤.和..
		   continue;

        fprintf(p,"verilog work \"%s\" \n",pNextInfo.cFileName);
	}

    fprintf(p,"verilog work \"$XILINX/verilog/src/glbl.v\"\n");


    fclose(p);
    return 0;
}

