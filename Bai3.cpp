#include <winbgim.h>
#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int getmaxx();
	int getmaxy();
	initwindow(600,400);
	printf("\n gia tri x cua man hinh : %d",getmaxx);
	printf("\n gia tri y cua man hinh : %d",getmaxy);
	return 0;
}
