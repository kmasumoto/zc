%{
	
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
extern long yylval;

#define		SIZE_HEX_STR	32			/* max col = 32 */

%}

D	[0-9]
N	[1-9]
O	[0-7]
H	[0-9a-fA-F]
%%
"|"		return OROP;
"^"		return EXOROP;
"&"		return ANDOP;
"<<"	return SHLOP;
">>"	return SHROP;
"+"		return ADDOP;
"-"		return SUBOP;
"*"		return MULOP;
"/"		return DIVOP;
"%"		return MODOP;
"**"	return POWOP;
"!"		return FACTOP;
"("		return LP;
")"		return RP;
end		return END;
(q|Q)	return END;
{N}{D}*	|
0{O}*	|
0(x|X){H}+	{
			yylval = strtol((char *)yytext, (char **)NULL, 0);
			return NUMBER;
			}
{H}+(h|H)	{
				char sz_hex[SIZE_HEX_STR];
				strcpy(sz_hex, "0x");
				yytext[strlen(yytext)-1] = '\0';
				strcat(sz_hex, yytext);
				yylval = strtol(sz_hex, (char **)NULL, 0);
				return NUMBER;
			}
[ \t]		;
\n			return NL;
.			return yytext[0];

%%



