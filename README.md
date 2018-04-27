A simple program that detects syntax errors in cpp files

To run the code issue the following commands:
1.yacc -d parser.y
2.lex parser.l
3.gcc lex.yy.c y.tab.c -ll -ly
4. ./a.out
