#if defined(__STDC__) || defined(__cplusplus)
#define YYCONST const
#define YYPARAMS(x) x
#define YYDEFUN(name, arglist, args) name(args)
#define YYAND ,
#define YYPTR void *
#else
#define YYCONST
#define YYPARAMS(x) ()
#define YYDEFUN(name, arglist, args) name arglist args;
#define YYAND ;
#define YYPTR char *
#endif
#ifndef lint
YYCONST static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley +Cygnus.28) 01/20/91";
#endif
#define YYBYACC 1
#ifndef YYDONT_INCLUDE_STDIO
#include <stdio.h>
#endif
#ifdef __cplusplus
#include <stdlib.h> /* for malloc/realloc/free */
#endif
#line 2 "extint.y"


#include <stdio.h>
#define YYSTYPE long
#line 30 "y.tab.c"
#define END 257
#define NL 258
#define NUMBER 259
#define LP 260
#define RP 261
#define OROP 262
#define EXOROP 263
#define ANDOP 264
#define SHLOP 265
#define SHROP 266
#define ADDOP 267
#define SUBOP 268
#define MODOP 269
#define MULOP 270
#define DIVOP 271
#define UMINUS 272
#define POWOP 273
#define FACTOP 274
#define YYERRCODE 256
static YYCONST short yylhs[] = {                                        -1,
    0,    1,    1,    2,    2,    2,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,
};
static YYCONST short yylen[] = {                                         2,
    1,    0,    2,    2,    2,    2,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    2,    2,    3,
    1,
};
static YYCONST short yydefred[] = {                                      2,
    0,    0,    0,    0,   21,    0,    0,    3,    0,    6,
    5,    0,    0,    4,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   19,   20,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static YYCONST short yydgoto[] = {                                       1,
    2,    8,    9,
};
static YYCONST short yysindex[] = {                                      0,
    0, -152, -237, -236,    0,  -76,  -76,    0, -238,    0,
    0, -224, -270,    0,  -76,  -76,  -76,  -76,  -76,  -76,
  -76,  -76,  -76,  -76,  -76,    0,    0, -146, -102,  -92,
  -58,  -58,  -85,  -85,  -85, -270, -270, -270,
};
static YYCONST short yyrindex[] = {                                      0,
    0,   23,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -210,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -44, -149, -256,
  -68,  -59, -132, -120, -108, -196, -182, -168,
};
static YYCONST short yygindex[] = {                                      0,
    0,    0,   -6,
};
#define YYTABLESIZE 218
static YYCONST short yytable[] = {                                      12,
   13,   15,   25,   26,   15,   15,   15,   15,   28,   29,
   30,   31,   32,   33,   34,   35,   36,   37,   38,   14,
   10,   11,    1,   15,   16,   17,   18,   19,   20,   21,
   22,   23,   24,    0,   25,   26,   27,   15,   16,   17,
   18,   19,   20,   21,   22,   23,   24,   18,   25,   26,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   11,    0,    0,   11,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   12,    0,    0,   12,   12,
   12,   12,   12,   12,   12,   12,   12,   12,   12,   14,
    0,    0,   14,   14,   14,   14,   14,   14,   14,   14,
   14,   14,   14,    3,    4,    0,    5,    6,   16,    0,
    0,   16,   16,   16,    0,    7,   16,   17,   18,   19,
   20,   21,   22,   23,   24,    7,   25,   26,    7,    7,
    7,    7,    7,    7,    7,    7,    7,    8,    0,    0,
    8,    8,    8,    8,    8,    8,    8,    8,    8,   13,
    0,    0,   13,   13,   13,   13,   13,   13,   13,   13,
   13,   17,   18,   19,   20,   21,   22,   23,   24,    0,
   25,   26,   18,   19,   20,   21,   22,   23,   24,    0,
   25,   26,    5,    6,   23,   24,    0,   25,   26,    9,
    0,    7,    9,    9,    9,    9,    9,    9,   10,    0,
    0,   10,   10,   10,   10,   10,   10,    0,   20,   21,
   22,   23,   24,   17,   25,   26,   17,   17,
};
static YYCONST short yycheck[] = {                                       6,
    7,  258,  273,  274,  261,  262,  263,  264,   15,   16,
   17,   18,   19,   20,   21,   22,   23,   24,   25,  258,
  258,  258,    0,  262,  263,  264,  265,  266,  267,  268,
  269,  270,  271,   -1,  273,  274,  261,  262,  263,  264,
  265,  266,  267,  268,  269,  270,  271,  258,  273,  274,
  261,  262,  263,  264,  265,  266,  267,  268,  269,  270,
  271,  258,   -1,   -1,  261,  262,  263,  264,  265,  266,
  267,  268,  269,  270,  271,  258,   -1,   -1,  261,  262,
  263,  264,  265,  266,  267,  268,  269,  270,  271,  258,
   -1,   -1,  261,  262,  263,  264,  265,  266,  267,  268,
  269,  270,  271,  256,  257,   -1,  259,  260,  258,   -1,
   -1,  261,  262,  263,   -1,  268,  263,  264,  265,  266,
  267,  268,  269,  270,  271,  258,  273,  274,  261,  262,
  263,  264,  265,  266,  267,  268,  269,  258,   -1,   -1,
  261,  262,  263,  264,  265,  266,  267,  268,  269,  258,
   -1,   -1,  261,  262,  263,  264,  265,  266,  267,  268,
  269,  264,  265,  266,  267,  268,  269,  270,  271,   -1,
  273,  274,  265,  266,  267,  268,  269,  270,  271,   -1,
  273,  274,  259,  260,  270,  271,   -1,  273,  274,  258,
   -1,  268,  261,  262,  263,  264,  265,  266,  258,   -1,
   -1,  261,  262,  263,  264,  265,  266,   -1,  267,  268,
  269,  270,  271,  258,  273,  274,  261,  262,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 274
#if YYDEBUG
static YYCONST char *YYCONST yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"END","NL","NUMBER","LP","RP",
"OROP","EXOROP","ANDOP","SHLOP","SHROP","ADDOP","SUBOP","MODOP","MULOP","DIVOP",
"UMINUS","POWOP","FACTOP",
};
static YYCONST char *YYCONST yyrule[] = {
"$accept : s",
"s : list",
"list :",
"list : list line",
"line : expr NL",
"line : END NL",
"line : error NL",
"expr : expr ADDOP expr",
"expr : expr SUBOP expr",
"expr : expr SHLOP expr",
"expr : expr SHROP expr",
"expr : expr MULOP expr",
"expr : expr DIVOP expr",
"expr : expr MODOP expr",
"expr : expr POWOP expr",
"expr : expr ANDOP expr",
"expr : expr EXOROP expr",
"expr : expr OROP expr",
"expr : SUBOP expr",
"expr : expr FACTOP",
"expr : LP expr RP",
"expr : NUMBER",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#define YYLEX yylex()
#define YYEMPTY -1
#define yyclearin (yychar=(YYEMPTY))
#define yyerrok (yyerrflag=0)
#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif
#ifdef YYSTACKSIZE
#ifndef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#endif
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
#ifndef YYMAXSTACKSIZE
#define YYMAXSTACKSIZE 10000
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
YYSTYPE yyval;
YYSTYPE yylval;
static short *yyss;
static YYSTYPE *yyvs;
static int yystacksize;
#define yyfree(x) free(x)
extern int yylex();

static YYPTR
YYDEFUN (yymalloc, (bytes), unsigned bytes)
{
    YYPTR ptr = (YYPTR) malloc (bytes);
    if (ptr != 0) return (ptr);
    yyerror ("yyparse: memory exhausted");
    return (0);
}

static YYPTR
YYDEFUN (yyrealloc, (old, bytes), YYPTR old YYAND unsigned bytes)
{
    YYPTR ptr = (YYPTR) realloc (old, bytes);
    if (ptr != 0) return (ptr);
    yyerror ("yyparse: memory exhausted");
    return (0);
}

static int
#ifdef __GNUC__
__inline__
#endif
yygrow ()
{
    int old_stacksize = yystacksize;
    short *new_yyss;
    YYSTYPE *new_yyvs;

    if (yystacksize == YYMAXSTACKSIZE)
        return (1);
    yystacksize += (yystacksize + 1 ) / 2;
    if (yystacksize > YYMAXSTACKSIZE)
        yystacksize = YYMAXSTACKSIZE;
#if YYDEBUG
    if (yydebug)
        printf("yydebug: growing stack size from %d to %d\n",
               old_stacksize, yystacksize);
#endif
    new_yyss = (short *) yyrealloc ((char *)yyss, yystacksize * sizeof (short));
    if (new_yyss == 0)
        return (1);
    new_yyvs = (YYSTYPE *) yyrealloc ((char *)yyvs, yystacksize * sizeof (YYSTYPE));
    if (new_yyvs == 0)
    {
        yyfree (new_yyss);
        return (1);
    }
    yyss = new_yyss;
    yyvs = new_yyvs;
    return (0);
}
#line 95 "extint.y"

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


#line 288 "y.tab.c"
#define YYABORT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab

#if YYDEBUG
#ifdef __cplusplus
extern "C" char *getenv();
#else
extern char *getenv();
#endif
#endif

int
yyparse()
{
    register int yym, yyn, yystate;
    register YYSTYPE *yyvsp;
    register short *yyssp;
    short *yysse;
#if YYDEBUG
    register YYCONST char *yys;

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    if (yyss == 0)
    {
        yyss = (short *) yymalloc (YYSTACKSIZE * sizeof (short));
        if (yyss == 0)
          goto yyabort;
        yyvs = (YYSTYPE *) yymalloc (YYSTACKSIZE * sizeof (YYSTYPE));
        if (yyvs == 0)
        {
            yyfree (yyss);
            goto yyabort;
        }
        yystacksize = YYSTACKSIZE;
    }
    yysse = yyss + yystacksize - 1;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;
    goto yyloop;

yypush_lex:
    yyval = yylval;
    yystate = yytable[yyn];
yypush:
    if (yyssp >= yysse)
    {
        int depth = yyssp - yyss;
        if (yygrow() != 0)
             goto yyoverflow;
        yysse = yyss + yystacksize -1;
        yyssp = depth + yyss;
        yyvsp = depth + yyvs;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    yyn = yysindex[yystate];
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, reading %d (%s)\n", yystate,
                    yychar, yys);
        }
#endif
    }
    if (yyn != 0
        && ((yyn += yychar), ((unsigned)yyn <= (unsigned)YYTABLESIZE))
        && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: state %d, shifting to state %d\n",
                    yystate, yytable[yyn]);
#endif
        if (yyerrflag > 0)  --yyerrflag;
        yychar = (-1);
        goto yypush_lex;
    }
    yyn = yyrindex[yystate];
    if (yyn != 0
        && ((yyn += yychar), ((unsigned)yyn <= (unsigned)YYTABLESIZE))
        && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            yyn = yysindex[*yyssp];
            if (yyn != 0
                && ((yyn += YYERRCODE), ((unsigned)yyn <= (unsigned)YYTABLESIZE))
                && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: state %d, error recovery shifting\
 to state %d\n", *yyssp, yytable[yyn]);
#endif
                goto yypush_lex;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: error recovery discarding state %d\n",
                            *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, error recovery discards token %d (%s)\n",
                    yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("yydebug: state %d, reducing by rule %d (%s)\n",
                yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 25 "extint.y"
{ printf("bye-bye\n");	}
break;
case 2:
#line 30 "extint.y"
{	printf("welcome to ecalc!!\n");
			printf("enter expression or 'end':\n");
		}
break;
case 3:
#line 34 "extint.y"
{	printf("enter expression or 'end':\n");}
break;
case 4:
#line 39 "extint.y"
{	printf("%ld, 0x%lx, 0%lo\n", yyvsp[-1], yyvsp[-1], yyvsp[-1]);}
break;
case 5:
#line 41 "extint.y"
{	printf("bye-bye\n");
			YYACCEPT;
		}
break;
case 7:
#line 49 "extint.y"
{	yyval = yyvsp[-2] + yyvsp[0];}
break;
case 8:
#line 51 "extint.y"
{	yyval = yyvsp[-2] - yyvsp[0];}
break;
case 9:
#line 53 "extint.y"
{	yyval = yyvsp[-2] << yyvsp[0];}
break;
case 10:
#line 55 "extint.y"
{	yyval = yyvsp[-2] >> yyvsp[0];}
break;
case 11:
#line 57 "extint.y"
{	yyval = yyvsp[-2] * yyvsp[0];}
break;
case 12:
#line 59 "extint.y"
{	if (yyvsp[0] == 0) {
				printf("zero divide\n");
				YYERROR;
			}
			yyval = yyvsp[-2] / yyvsp[0];
		}
break;
case 13:
#line 66 "extint.y"
{	yyval = yyvsp[-2] % yyvsp[0];}
break;
case 14:
#line 68 "extint.y"
{	if (yyvsp[0] < 0) {
				printf("negative power\n");
				YYERROR;
			}
			yyval = lpower(yyvsp[-2], yyvsp[0]);
		}
break;
case 15:
#line 75 "extint.y"
{	yyval = yyvsp[-2] & yyvsp[0];}
break;
case 16:
#line 77 "extint.y"
{	yyval = yyvsp[-2] ^ yyvsp[0];}
break;
case 17:
#line 79 "extint.y"
{	yyval = yyvsp[-2] | yyvsp[0];}
break;
case 18:
#line 81 "extint.y"
{	yyval = -yyvsp[0];}
break;
case 19:
#line 83 "extint.y"
{	if (yyvsp[-1] < 0) {
				printf("negative factorial\n");
				YYERROR;
			}
			yyval = lfact(yyvsp[-1]);
		}
break;
case 20:
#line 90 "extint.y"
{	yyval = yyvsp[-1];}
break;
case 21:
#line 92 "extint.y"
{	yyval = yyvsp[0];}
break;
#line 563 "y.tab.c"
    }
    yyssp -= yym;
    yyvsp -= yym;
    yym = yylhs[yyn];
    yystate = *yyssp;
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: after reduction, shifting from state 0 to\
 state %d\n", YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("yydebug: state %d, reading %d (%s)\n",
                        YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    yyn = yygindex[yym];
	 if (yyn != 0
        && ((yyn += yystate), ((unsigned)yyn <= (unsigned)YYTABLESIZE))
        && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("yydebug: after reduction, shifting from state %d \
to state %d\n", *yyssp, yystate);
#endif
    goto yypush;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
