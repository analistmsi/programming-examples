#include <stdio.h>
#include <stdlib.h>
typedef struct n{
	int x;
	n *next; // n s�n�f�nda bir nesne  i�inde next ve x bulunur 
	// recursive fonksiyona benziyor 
	
}node;

int main()
{
	node * root;
	root = (node *)malloc(sizeof(node));
	root -> next = (node *)malloc(sizeof(node *));
	printf("yer acilmadan : %d\n", root -> next);
	printf("yer acilmadan : %d\n", root -> next + 1);
	root -> next -> x = 20;
	printf("yer acilmadan : %d\n", root -> next-> x);
	root -> next -> x = 30;
	printf("yer acilmadan : %d\n", root -> next -> x);
/*	root -> next = (node *)malloc(sizeof(node *));
	printf("yer verilince : %d\n", root -> next);
	printf("%d\n", root -> next + 1);
	printf("%d\n", root -> next + 2);
	*/
//	printf("%d\n", *root->next);  // tek bir de�er varsa basar ama birden
								// fazla de�i�ken varsa basmaz 
	
	
	return 0;
}
