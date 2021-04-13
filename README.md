# RTEMS-C-Challenge

This is a programming challenge meant to assess and improve basic to intermediate C programming skills. Read all instructions carefully.

You must do this challenge by yourself. You may discuss the problem or solutions with others, but you may not share code with anyone. You may not use code downloaded from the Internet. You *must* identify any resources that you used to solve this challenge.

You should first **fork** this repository to your own *private* repo. You are expected to work on your repo by making *git-commit* as you work. In the end, you should submit your entire set of all commits as a single **pull request**. In this way, the entire *history* of your programming efforts will be reflected in the commits you made, while the PR will merge all of these to provide a consolidated changeset that we can review. Your commits should only add the requested files in the challenge. You should not include any binary files in any of your git-commits.

Your code should be consistent with the [RTEMS coding standards](https://docs.rtems.org/branches/master/eng/coding.html).

The Challenge
-------------

The header file *list.h* defines an interface for a linked list data structure that stores C strings. You need to implement the functions and structures declared in *list.h* within a separate implementation file called *list.c* which you will create. You also need to add a *Makefile* and a test file called *list_test.c* that implements testing of your list implementation. Finally, you need to convert the existing comments to Doxygen documentation, and generate the doxygen output for the linked list.

Do not use arrays. Do not declare arrays. There is no need to use [] anywhere. Do not use C++ including C++ Standard Template Library, Boost, cout or new. Your source code must use UNIX style EOL characters \n not DOS style \n\r. You can write code on Windows, but you must convert it to Unix text files before submitting. The dos2unix command may be useful for this.

Some helpful C functions are strlen, strncmp, printf, strncpy, strdup, malloc, free.  (man these if necessary. Pay attention to return values!)

Your test file should try various combinations of your `create_list`, `add_to_list`, `remove_from_list`, `flush_list`, `print_list`, and `free_list` functions. You should check return values on any function that can possibly fail, and you should call functions with invalid inputs to see if they are handled gracefully.

Write a Makefile that compiles *list.c* and *list_test.c* to create a binary executable named *list_test*.  Your program should compile without any warnings or errors when using all standard GCC warnings in -Wall. Do not include any of the binary files (\*.o, \*.exe, etc.).

Document your code. If something doesn’t work, you may get partial credit if your comments show that you were on the right track. Put a comment block at the top of every file using the RTEMS file header template. Document any places where you received outside help (other people, web sites, etc.).

Good luck. If you have any questions about this challenge, feel free to ask me. Submit your solution by opening a PR with all your code changes, comments as requested, and anything else you would like to say.


