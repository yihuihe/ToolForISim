********************************************************************************
****************  Tool for Creating Tcl Command to Run  ISim  ****************** 
********************************************************************************
Use Guide:
1.由于本程序指定了文件路径，所以你需要在E盘下新建一个名为isim_project的文件夹，
  并且将你的所有源文件放在这个文件夹中。由于本程序默认源文件是用Verilog写的，因
  此源文件的拓展名应该为 ".v"
2.双击"TclForISim.exe"开始运行。首先会弹出一个菜单选项：
   1）function for creating project_test_bench.prj
   2）function for creating project_test_bench.bat
   3）function for running ISim
   4）Exit
   这里默认的选择方式是顺序选择，即用户根据界面提示依次选择。
3.这里对菜单选项进行一个说明：
	a.选项1）的功能主要是生成一个名为"project_test_bench"的prj文件，其功能是添加
	  所有*.v文件到ISim中，进行语法分析。
	b.选项2）的功能主要是生成一个名为"project_test_bench"的bat文件，其功能是批处
	  理fuse命令，添加lib文件，并生成"isim_test.exe"执行文件。需要注意的是，在此
	  选项时，需要指定仿真用到的test bench文件。
	c.选项3）的功能主要是生成一个名为"run"的tcl脚本，其功能是指定ISim运行的时间
	d.选项4）用于退出本程序。
4.当执行完"TclForISim.exe"后，本文件夹中会生成三个文件，分别是
	project_test_bench.prj、  project_test_bench.bat、  run.tcl 
  将这三个文件复制到E盘下的isim_project文件夹中。

  
Tcl Command Method to run ISim
注意：开发过程中，编者使用的版本是Xilinx ISE 14.2版本，以此为例，叙述使用流程。

1.因为在Win7 64位操作系统下，无法使用ISim自带的isimtcl.exe。这里我们使用Console
  方法。首先用户需要在本机Xilinx的安装文件中找到"isimgui.exe".例如，编者的路径为
  D:\Xilinx\14.2\ISE_DS\ISE\bin\nt64。找到后运行"isimgui.exe"。 
2.观察最下面的窗口中是否有Console窗口，如果没有，请点击View->Panels->Console 
3.在ISim的Console窗口中依次输入以下命令：
   a. 查看当前路径：pwd
   b. 如果当前路径不是E:/isim_project，请输入命令：cd E:/isim_project 
      否则跳到步骤c
   c. 添加所有*.v文件到ISim中，进行语法分析，请输入命令：
       vlogcomp -prj project_test_bench.prj
   d. 批处理fuse命令，添加lib文件，并生成"isim_test.exe"执行文件,请输入命令：
       project_test_bench.bat
   e. 运行ISim,请输入命令：
	   isim_test.exe -gui -tclbatch run.tcl
	   
	   