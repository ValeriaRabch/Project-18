#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int Count(FILE* f) {
	char s = getc(f);
	int count = 0;
	for (; s != EOF; s = getc(f)) {
		if (s == '\n') {
			count++;
		}
	}
	fseek(f, 0, SEEK_SET);
	return count;
}

int main() {
	//завдання1

FILE* file1, * file2;

file1 = fopen("D:\\Valeria\\file.txt", "r");
file2 = fopen("D:\\Valeria\\file2.txt", "w");

char line[100];
int c;


c = Count(file1);

fclose(file1);
fclose(file2); 

}