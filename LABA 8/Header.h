#pragma once
#include<stdio.h>
#include<stdlib.h>

void memory_alloc(char** string1, int argc, char** argv);
void copy(char** string1, int argc, char** argv);
void vary(char** left, char** right);
int entrance(char* string);
int len_string(char* string);
int minimal_len_word(char* string, int len_of_string);
void Hoara_sort(char** string, int first, int last);
void output(char** string, int argc);
void free_memory(char** string, int argc);
void verify(int argc);