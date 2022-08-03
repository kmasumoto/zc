#include <stdio.h>

void yyerror(char*);
int yywrap(void);

int
main(void)
{
	return yyparse();
}


void
yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
}


int
yywrap(void)
{
	return 1;
}



