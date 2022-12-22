#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int len_string(char** string);
int maximal_len_word(char* string, int len_of_string, int* second_len_of_string);
void output(char* string, int max_word_start, int second_len_of_string);
void input(char** string);
int select_function(int choice);
int find_first_word(char** string, int len_of_string);
void back_to_menu();
void delete_word(char** string1, char** string2, int len_of_string1, int len_of_string2);
void change_to_area(char** string, int len_of_string);
int exercise_1();
int exercise_2();
int end();