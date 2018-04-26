
%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

void single_line_comment();
void comment();


%}


D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%%


"//"   			{single_line_comment();}
"/*"			{ comment(); }
"\""			{return ('"');}
"include"		{return (INCLUDE);}
"define"		{return (DEFINE);}
"typedef"		{return (TYPEDEF);}
"using"			{return (USING);}
"namespace"		{return (NAMESPACE);}


"auto"			{  return(AUTO); }
"extern"		{  return(EXTERN); }
"static"		{  return(STATIC); }


"unsigned"		{ return(UNSIGNED); }
"void"			{ return(VOID); }
"short"			{ return(SHORT); }
"signed"		{  return(SIGNED); }
"int"			{  return(INT); }
"long"			{  return(LONG); }
"float"			{  return(FLOAT); }
"double"		{  return(DOUBLE); }
"char"			{  return(CHAR); }



{L}({L}|{D})*		{return (IDENTIFIER);}	
{D}+{E}{FS}?		{ return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{  return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{  return(CONSTANT); }
{H}({H}|\"|\\.|\")+ 	{  return(STRING_LITERAL); }



";"			{return (';');}
"<"			{return ('<');}
">"			{return ('>');}
"#"                     {return ('#');}
"="			{return ('=');}
		





[ \t\v\n\f]		{ ; }
.			{ ; }

%%


void single_line_comment()
{
char ch,ch1;
	ch=input();
	while(ch!='\n')
	ch=input();

}
void comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		{//putchar(c);
		
		}

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	
}


int yywrap(){ return 1; }
