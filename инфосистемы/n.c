#include <stdio.h>
#include <stdlib.h>

int main() {
	//открыть
	#pragma warning(disable : 4996)
	FILE* byteFile = fopen("byte.dat", "wb");
	FILE* shortFile = fopen("short.dat", "wb");
	FILE* intFile = fopen("int.dat", "wb");
	FILE* longFile = fopen("long.dat", "wb");

	// байтовое
	unsigned char byteVar = 255;
	fwrite(&byteVar, sizeof(unsigned char), 1, byteFile);

	// shortint
	short shortVar = -32768;
	fwrite(&shortVar, sizeof(short), 1, shortFile);

	//  integer
	int intVar = 2147483647;
	fwrite(&intVar, sizeof(int), 1, intFile);

	//  longint
	long longVar = 9223372036854775807;
	fwrite(&longVar, sizeof(long), 1, longFile);

	// закрыть
	fclose(byteFile);
	fclose(shortFile);
	fclose(intFile);
	fclose(longFile);

	return 0;

}