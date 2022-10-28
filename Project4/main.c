#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	char sym;
	int qty = 1;
	for (int i = 0; i < 7; i++)
	{
	scanf("%c", &sym);
		switch (sym)
		{
		case '1':
			qty = 1;
			printf("JEDAN");
			break;
		case '2':
			printf("DVA");
			break;
		case '3':
			printf("TRI");
			break;
		case '4':
			printf("CETIRI");
			break;
		case '5':
			printf("PET");
			break;
		case '6':
			printf("SEST");
			break;
		case '7':
			printf("SEDAM");
			break;
		case '8':
			printf("OSAM");
			break;
		case '9':
			printf("DEVET");
			break;
		case '0':
			printf(" ");
			break;
		default:
			if (ispunct(sym)) {
				printf("ODMAH!");
			}
			else {
				if (sym == toupper(sym)) {
					printf("MOLIM");
				}
				else {
					if (qty = 1) {
						printf("BUREK");
					}
					else {
						printf("BUREKA");
					}
				}
			}
			break;
		}}
	return 0;
}