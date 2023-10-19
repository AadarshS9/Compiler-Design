# QUESTION
Generate YACC specification for a few syntactic categories.
- 1) Implementation of Calculator using LEX and YACC
- 2) Program to recognize a valid arithmetic expression that uses operator +, – , * and /.
- 3) Program to recognize a valid variable which starts with a letter followed by any number of letters or digits. 

# SOLUTION
- 1) pgm1.l and pgm1.y / pgm2.y (yacc only)
- 2) pgm3.l and pgm3.y
  3) pgm4.l and pgm4.y
 
# HOW TO COMPILE AND RUN
- To run a yacc only file, kindly do the following:
  - yacc filename.y -d
  - cc y.tab.c
  - ./a.out

- To run a lex and yacc file, kindly do the following:
  - yacc filename.y -d 
  - lex filename.l
  - gcc lex.yy.c y.tab.c -ll
  - ./a.out
