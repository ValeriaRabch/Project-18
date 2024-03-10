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

void FullFile(FILE* file1, FILE* file2, int c, char line[]) {
	int count = 0;
	while (c != 0) {
		fgets(line, 200, file1);
		for (int i = 0; line[i] != '\0'; i++) {
			count++;
		}
		if (count - 1 >= 7) {
			fprintf(file2, line);
		}
		count = 0;
		c--;
	}
}

void  FullMasive(FILE* file1, char file[][100], int c) {
	for (int i = 0; c != -1; i++) {
		fgets(file[i], 100, file1);
		c--;
	}
}

void FullFile2(FILE* file2, char file[][100], int c) {
	for (int i = c - 1; i != -1; i--) {
		fprintf(file2, file[i]);
	}
}

int main() {
	//завдання1

//FILE* file1, * file2;
//
//file1 = fopen("D:\\Valeria\\file.txt", "r");
//file2 = fopen("D:\\Valeria\\file2.txt", "w");
//
//char line[100];
//int c;
//
//
//c = Count(file1);
//
//FullFile(file1, file2, c, line);
//
//fclose(file1);
//fclose(file2); 


	//завдання2

////FILE* file1, * file2;
////file1 = fopen("D:\\Valeria\\file.txt", "r");
////file2 = fopen("D:\\Valeria\\file2.txt", "w");
////
////char file[100][100];
////int c = Count(file1);
////
////FullMasive(file1, file, c);
////FullFile2(file2, file, c);
////
////fclose(file1);
////fclose(file2); 

}