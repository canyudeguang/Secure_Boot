#Secure_Boot
=====================================================================
This project is based on Qualcomm QCA4020 development kit whose name is Secure Boot. The main objective of this demo is to enable secure boot function based on Home Automation demo. The secure boot is to establishes a trusted platform for running authenticated applications, and only authorized software can executes.


Instruction:
----------------------

Hardware requirements
--------------
QCA4020 development Kit, Sengled blub, Adaptor, Mobile Phone(Android O), Lamp holder, Trandformer(120V->110V), Servo motor

Software requirements
--------  
1)toolchain
--
The toochain can be downloaded from the ARM website at:  
https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads   
Add the path to toolchain binaries to 'PATH' environment variable.  
	  
2)Python
--
Some of the support scripts are Python-based, Python 2.7.2, or higher. You can download the Python official website.  
After installation, add the path to python to 'PATH' environment variable.  

Assembly Instructions
-----------------------------------------------------------------------------
Install the jumper of QCA4020 development kit and connect the servo motor to QCA4020 as described in the section  
"Build/Assembly Instructions" of "CDB20_Project_Content_SecureBoot.docx".

Usage Instructions
--------------------------
(1)Download the code from github according to this repositary.  

(2)Compile the code and flash the image as described in the file CDB20_Project_Content_SecureBoot.docx. 

(3)If your opeartion is done successfully, you can test the demo the same as Home Automation demo.  
