byacc -d extint.y
flex extint.l
bcc32 -eecalc.exe main.c lex.yy.c y.tab.c

