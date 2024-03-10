#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



int main() {
	//завдання1

FILE* file1, * file2;

file1 = fopen("D:\\Valeria\\file.txt", "r");
file2 = fopen("D:\\Valeria\\file2.txt", "w");


fclose(file1);
fclose(file2); 

}