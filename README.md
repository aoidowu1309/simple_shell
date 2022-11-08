This project is going to focus on creating a Simple Shell

What do we understand by Shell in C-programming?

The shell is a program that receive commands from user, from keybord to send them to the explotation system in charge of executing them.

Write a UNIX command line interpreter

What is expected of this simple-shell program: *Display a prompt and wait for the user to type a command. A command line always ends with a new line. *The prompt is displayed again each time a command has been executed. *The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features. The command lines are made only of one word. No arguments will be passed to programs. *If an executable cannot be found, print an error message and display the prompt again. *Handle errors. *You have to handle the EOF "end of file" condition (Ctrl+D).

- Everything you need to know to start coding your own shell (Low-level programming & Algorithm)



Our Files

pid.c:

Write a programme that prints the PID of the parent process. Run your programme several times within the same shell. It should be the same. Does echo $$ print the same value? Why?



max_value_processID: 

Write a shell script that prints the maximum value a process ID can be.



2.1-argument.c:

Write a programme that prints all the arguments, without using ac.



2.0.read_line.c:(getline)

Write a programme that prints "$ ", wait for the user to enter a command, prints it on the next line.



2.0.cmd_line_to_av.c:(strtok) 

Write a function that splits a string and returns an array of each word of the string.



3.0.execve.c:

Executing a programme. The system call execve allows a process to execute another programme (man 2 execve). Note that this system call does load the new programme into the current process memory in place of the previous programme: on success execve does not return to continue the rest of the previous programme.



4-fork.c:

The system call fork (man 2 fork) creates a new child process, almost identical to the parent (the process that calls fork). Once fork successfully returns, two processes continue to run the same programme, but with different stacks, datas and heaps.



4.1-fork.c:

Using the return value of fork, it is possible to know if the current process is the father or the child: fork will return 0 to the child, and the PID of the child to the father.



5.0-wait.c:

The wait system call (man 2 wait) suspends execution of the calling process until one of its children terminates.



5.0.1-fork+wait+execve.c:

Exercise: fork + wait + execve Write a programme that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.


