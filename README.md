
# C++ Project 01 - Allocating | Referencecs | Filestream | Switch

###  General Rules for these projects: 
The purpose of these c++ projects is to get introduced into OOP. We are allowed to use standard c++17. 

- code must be coiled with `c++` and the flags `-Wall -Werror -Wextra`.
- there must be a Makefile for each exercise.
- Class names and corresponding filenames must be written in UpperCamelCase format.
- The `using namespace <ns_name>` and `friend` keywords are forbidden.
- There must be no memory leaks.
- Classes must be designed in the Orthodox Canonical Form.
- There can be no function implementations in headerfiles.
- Headers must be able to be used independently from others.
- Use of STL in the Module 08 and 09 only->no containers / Algorithm header


## 🔶 ex00 BraiiiiiiinnnzzzZ
### Objective: implement a Zombie class and a randomChump class


### Usage:
  ```
  cd ex00
  make
  ./zombie
```


### My thoughts: 
- Easy introduction to the difference between a stack allocated and heap allocated object. Also the `new` and `delete` keyword used for the first time. 


## 🔶 ex01 Moar brainz!
### Ojective: implement a function that allocates N zombies and returns a pointer to the first.
### Usage:
  ```
  cd ex01
  make
  ./horde
```

### My thoughts:
- First Contact with the array operator  `[]` and how to delete an arraray ;

## 🔶 ex02 HI THIS IS BRAIN
### Ojective: Experience the difference between object, pointer and reference in c++
### Usage:
  ```
  cd ex02
  make
  ./ptr
```

### My thoughts:
- It took me a little bit to understand the concept of a reference, coming from c programming. i didnt get it fully why you would need it when you have pointers also. But now, some months later im very happy they exist, and use thm all the time.

## 🔶 ex03 Unnecessary violence
### Ojective: Understanding private and public attributes, making getters and setters. Also deepening the usage of references vs pointers.
### Usage:
  ```
  cd ex03
  make
  ./violence
```
### My thoughts:
- Interesting first trial to test if i actually understood references.



## 🔶 ex04 Sed is for losers
### Ojective: Write a program that will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.
### Usage:
  ```
  cd ex04
  make
  ./sed
```
### My thoughts:
- The first time working with file I/O operations in c++. They are quite different than in C. The fstreamobj is actually convenitent.



## 🔶 ex05 Harl 2.0
### Ojective: The goal of this exercise is to use pointers to member functions. 
### Usage:
  ```
  cd ex05
  make
  ./harl
```
### My thoughts:
- The syntax of function pointers is quite confusing but interesting, also i used a switch statement for the first time, since if/else conditions were forbidden.


## 🔶 ex06 Harl filter
### Ojective: 
### Usage: Understanding the switch statement correctly.
  ```
  cd ex06
  make
  ./harlFilter
```
### My thoughts:
- the leveling property of the switch statement is really cool, you can make some noce logic with this concept.


