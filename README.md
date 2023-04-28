# Simple Shell

## 📃Description

This repository aims to write a simple UNIX command interpreter in **C** that reads commands from either a file or standard input and executes them as part of the low-level programming track at Holberton School.
 

## 🛠 Usage 
In order to run this program you need to follow the instructions below :

1. Clone this repository :

``` 
git clone https://github.com/Hemo5478/holbertonschool-simple_shell
```

2. Access the project directory :
```
 cd holbertonschool-simple_shell
```

3. Compile all .c files in the direcotory :

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
``` 

4. Run the resulting executable by invoking the program in the interactive mode : 

``` 
$ ./hsh
```
5. Exit the program by typing :
``` 
($) exit
```
6. You can also run the program in the non-interactive mode with the following command : 
``` 
   $ echo "/bin/ls" | ./hsh
 ```  




## Requirements 
### General :

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
Use system calls only when you need to (why?)
### List of allowed functions and system calls :
* all functions from strings.h
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* printf (man 3 printf)
* fprintf (man 3 fprintf)
* vfprintf (man 3 vfprintf)
* sprintf (man 3 sprintf)
* putchar (man 3 putchar)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)



## Manual Page

To get more information about the command run :
```
$ man ./man_1_simple_shell
```


## Authors
* Hamza Ajili [Github Profile Page](https://github.com/Hemo5478)

* Please read the [AUTHORS](AUTHORS) file for more details .
