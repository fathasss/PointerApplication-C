#include "pch.h"
#include <stdio.h>
void main()
{
	char *a;
	char str[11] = "kara kalem";
	a = str;
	for (int i = 0; i < 10; i++) //dizi elemanlarını yazdır
	{
		printf("%c", str[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) //dizi elemanlarını pointer ile yazdır
	{
		printf("%c  ", *(str+i));
		printf("Adresleri: %p\n", str+i);
	}
	getchar();
}
