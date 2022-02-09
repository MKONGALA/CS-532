Readme.txt
File name: Lab_4.c

To implement a C program that takes two filenames as command-line arguments and 
concatenates the contents of the second file to the first file.

This program uses command line arguments to take the inputs from the terminal.

In this program the user needs to give two text files (.txt) in order to take the inputs and make
the code working for that source file.

Run the code with any C compiler installed in your system.

Use the below command to Compile the C program in ubuntu:
gcc -o Lab_4.c Lab_4.c

This command will Compile the C file and creates an executable file.
Later use the below command to execute the program.
Use the below command and give 2 file names as command line arguments.
./ Lab_4.c file1.txt file2.txt
Output as -
“File Not Exist...” : If there is no file exist of 2nd file then this will be the output.
“No data present in the File...” : If there is no data exist in the 2nd file then this will be the output.
“Both file names are same...” : If both file names are same then this will be the output.
“File Copied Successfully...” : If the 2nd file data is appended to the first file then this will be the output and print the data of Two files before appending.
After the program executed successfully, the first file contains original content and the contents of the second file. 
And the second file remains unchanged.
