%{


#include <stdio.h>
#define YYSTYPE long
%}
%token END
%token NL
%token NUMBER
%token LP
%token RP
%left OROP
%left EXOROP
%left ANDOP
%left SHLOP SHROP
%left ADDOP SUBOP MODOP
%left MULOP DIVOP
%right UMINUS
%right POWOP
%left FACTOP
%start s
%%
s
	: list
		{ printf("bye-bye\n");	}
	;

list
	: /* empty */
		{	printf("welcome to ecalc!!\n");
			printf("enter expression or 'end':\n");
		}
	| list line
		{	printf("enter expression or 'end':\n");}
	;

line
	: expr NL
		{	printf("%ld, 0x%lx, 0%lo\n", $1, $1, $1);}
	| END NL
		{	printf("bye-bye\n");
			YYACCEPT;
		}
	| error NL
	;

expr
	: expr ADDOP expr
		{	$$ = $1 + $3;}
	| expr SUBOP expr
		{	$$ = $1 - $3;}
	| expr SHLOP expr
		{	$$ = $1 << $3;}
	| expr SHROP expr
		{	$$ = $1 >> $3;}
	| expr MULOP expr
		{	$$ = $1 * $3;}
	| expr DIVOP expr
		{	if ($3 == 0) {
				printf("zero divide\n");
				YYERROR;
			}
			$$ = $1 / $3;
		}
	| expr MODOP expr
		{	$$ = $1 % $3;}
	| expr POWOP expr
		{	if ($3 < 0) {
				printf("negative power\n");
				YYERROR;
			}
			$$ = lpower($1, $3);
		}
	| expr ANDOP expr
		{	$$ = $1 & $3;}
	| expr EXOROP expr
		{	$$ = $1 ^ $3;}
	| expr OROP expr
		{	$$ = $1 | $3;}
	| SUBOP expr %prec UMINUS
		{	$$ = -$2;}
	| expr FACTOP
		{	if ($1 < 0) {
				printf("negative factorial\n");
				YYERROR;
			}
			$$ = lfact($1);
		}
	| LP expr RP
		{	$$ = $2;}
	| NUMBER
		{	$$ = $1;}
	;
%%

long
lpower(long x, long y)
{
	long i, pw;
	if (x == 0)
		return 0;
	else {
		pw = 1;
		for (i=y; i; --i)
			pw *= x;
		return pw;
	}
}

long lfact(long x)
{
	long i,fc;
	for (fc=1, i=x; i; --i)
		fc *= i;
	return fc;
}


