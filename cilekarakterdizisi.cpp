#include <stdio.h>

int main()
{
	/*
	int __cdecl printf 
	kod bilgilerine __cdecl den ula�abilirsin.
	*/
	char *commands[] = {
	  "declare",
	  "explain",
	  "cast",
	  "help",
	  "set",
	  "exit",
	  "quit",
	  NULL
	};
	printf("%s", commands[4]);
}
