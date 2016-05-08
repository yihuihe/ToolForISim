#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Function.h"

int Create_test_bench_prj_function()
{
    FILE  *p;
    p = fopen("project_test_bench.prj","w");

    HANDLE hFile;
	LPCTSTR lpFileName = "E:\\isim_project\\*.v";	//ָ������Ŀ¼���ļ����ͣ�������d�̵���Ƶ�ļ�������"D:\\*.mp3"
	WIN32_FIND_DATA pNextInfo;	//�����õ����ļ���Ϣ��������pNextInfo��;

	hFile = FindFirstFile(lpFileName,&pNextInfo);//��ע���� &pNextInfo , ���� pNextInfo;
	fprintf(p,"verilog work \"%s\" \n",pNextInfo.cFileName); //���ǵ�һ��.v�ļ�

	if(hFile == INVALID_HANDLE_VALUE)
	{
		//����ʧ��
		exit(-1);
	}

	while(FindNextFile(hFile,&pNextInfo))
	{
		if(pNextInfo.cFileName[0] == '.')//����.��..
		   continue;

        fprintf(p,"verilog work \"%s\" \n",pNextInfo.cFileName);
	}

    fprintf(p,"verilog work \"$XILINX/verilog/src/glbl.v\"\n");


    fclose(p);
    return 0;
}

