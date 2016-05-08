********************************************************************************
****************  Tool for Creating Tcl Command to Run  ISim  ****************** 
********************************************************************************
Use Guide:
1.���ڱ�����ָ�����ļ�·������������Ҫ��E�����½�һ����Ϊisim_project���ļ��У�
  ���ҽ��������Դ�ļ���������ļ����С����ڱ�����Ĭ��Դ�ļ�����Verilogд�ģ���
  ��Դ�ļ�����չ��Ӧ��Ϊ ".v"
2.˫��"TclForISim.exe"��ʼ���С����Ȼᵯ��һ���˵�ѡ�
   1��function for creating project_test_bench.prj
   2��function for creating project_test_bench.bat
   3��function for running ISim
   4��Exit
   ����Ĭ�ϵ�ѡ��ʽ��˳��ѡ�񣬼��û����ݽ�����ʾ����ѡ��
3.����Բ˵�ѡ�����һ��˵����
	a.ѡ��1���Ĺ�����Ҫ������һ����Ϊ"project_test_bench"��prj�ļ����书�������
	  ����*.v�ļ���ISim�У������﷨������
	b.ѡ��2���Ĺ�����Ҫ������һ����Ϊ"project_test_bench"��bat�ļ����书��������
	  ��fuse������lib�ļ���������"isim_test.exe"ִ���ļ�����Ҫע����ǣ��ڴ�
	  ѡ��ʱ����Ҫָ�������õ���test bench�ļ���
	c.ѡ��3���Ĺ�����Ҫ������һ����Ϊ"run"��tcl�ű����书����ָ��ISim���е�ʱ��
	d.ѡ��4�������˳�������
4.��ִ����"TclForISim.exe"�󣬱��ļ����л����������ļ����ֱ���
	project_test_bench.prj��  project_test_bench.bat��  run.tcl 
  ���������ļ����Ƶ�E���µ�isim_project�ļ����С�

  
Tcl Command Method to run ISim
ע�⣺���������У�����ʹ�õİ汾��Xilinx ISE 14.2�汾���Դ�Ϊ��������ʹ�����̡�

1.��Ϊ��Win7 64λ����ϵͳ�£��޷�ʹ��ISim�Դ���isimtcl.exe����������ʹ��Console
  �����������û���Ҫ�ڱ���Xilinx�İ�װ�ļ����ҵ�"isimgui.exe".���磬���ߵ�·��Ϊ
  D:\Xilinx\14.2\ISE_DS\ISE\bin\nt64���ҵ�������"isimgui.exe"�� 
2.�۲�������Ĵ������Ƿ���Console���ڣ����û�У�����View->Panels->Console 
3.��ISim��Console���������������������
   a. �鿴��ǰ·����pwd
   b. �����ǰ·������E:/isim_project�����������cd E:/isim_project 
      ������������c
   c. �������*.v�ļ���ISim�У������﷨���������������
       vlogcomp -prj project_test_bench.prj
   d. ������fuse������lib�ļ���������"isim_test.exe"ִ���ļ�,���������
       project_test_bench.bat
   e. ����ISim,���������
	   isim_test.exe -gui -tclbatch run.tcl
	   
	   