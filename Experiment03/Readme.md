3. Generate YACC specification for a few syntactic categories.
a). Implementation of Calculator using LEX and YACC
PROGRAM 1 USING LEX AND YACC
PROGRAM 2 USING YACC ONLY

b). Program to recognize a valid arithmetic expression that uses operator +, – , * and /.
PROGRAM3

c). Program to recognize a valid variable which starts with a letter followed by any number of letters or digits.
PROGRAM 4



To run a yacc only file, do
yacc pgm2.y -d
cc y.tab.c
./a.out

To run lex and yacc do,
yacc pgm3.y -d
lex pgm3.l
gcc lex.yy.c y.tab.c -ll
./a.out
