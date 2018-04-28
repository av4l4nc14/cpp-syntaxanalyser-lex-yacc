

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

void single_line_comment();
void comment();


%}


D            [0-9]
L            [a-zA-Z_]
H            [a-fA-F0-9]
E            [Ee][+-]?{D}+
FS            (f|F|l|L)
IS            (u|U|l|L)*

%%


"//"               {single_line_comment();}
"/*"            { comment(); }
'\"'            {return (CC);}
"include"        {return (INCLUDE);}
"define"        {return (DEFINE);}
"typedef"        {return (TYPEDEF);}
"using"            {return (USING);}
"namespace"        {return (NAMESPACE);}
"new"                    {return (NEW);}
"operator"           {return (OPERATOR);}
"const"              {return (CONST);}

"float"            { return(FLOAT); }
"char"            { return(CHAR); }
"int"            { return(INT); }
"long"            { return(LONG); }
"short"            { return(SHORT); }
"signed"        { return(SIGNED); }
"unsigned"        { return(UNSIGNED); }
"void"            { return(VOID); }
"endl"                  {return (ENDL);}
"friend"                {return (FRIEND);}


"auto"            {  return(AUTO); }
"break"            {  return(BREAK); }
"case"            {  return(CASE); }

"continue"        {  return(CONTINUE); }
"default"        {  return(DEFAULT); }
"do"            {  return(DO); }
"else"            {  return(ELSE); }
"extern"        {  return(EXTERN); }

"for"            {  return(FOR); }
"if"            {  return(IF); }
"return"        {  return(RETURN); }
"sizeof"        {  return(SIZEOF); }
"static"        {  return(STATIC); }
"struct"        { return(STRUCT); }
"switch"        {  return(SWITCH); }
"while"            {  return(WHILE); }
"cout"             { return (COUT);}
"cin"                   {  return (CIN);}
"public"        {return (ACCESS);}
"private"        {return (ACCESS);}
"protected"        {return (ACCESS);}
"class"            {return (CLASS);}
"std"                   {return (STD);}
"virtual"        {return (VIRTUAL);}

{L}({L}|{D})*        {return (IDENTIFIER);}    
{D}+{E}?{FS}?        { return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?    {  return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?    {  return(CONSTANT); }
L?\"(\\.|[^\\"])*\"    {          return(STRING_LITERAL); }



";"            {return (';');}
"<"            {return ('<');}
">"            {return ('>');}

        
"#"                     {return ('#');}
"+="            {return(ADD_ASSIGN); }
"-="            {return(SUB_ASSIGN); }
"*="            {return(MUL_ASSIGN); }
"/="            {return(DIV_ASSIGN); }
"%="            {return(MOD_ASSIGN); }
"&="            {return(AND_ASSIGN); }
"^="            {return(XOR_ASSIGN); }

"|="            {return(OR_ASSIGN); }


"++"            { return(INC_OP); }
"--"            { return(DEC_OP); }
"->"            {  return(PTR_OP); }
"&&"            {  return(AND_OP); }
"||"            {  return(OR_OP); }
"<="            {  return(LE_OP); }
">="            {  return(GE_OP); }
"=="            {  return(EQ_OP); }
"!="            {  return(NE_OP); }

"{"            {  return('{'); }
"}"            { return('}'); }
","            {  return(','); }
":"            {  return(':'); }
"="            {  return('='); }
"("            {  return('('); }
")"            {  return(')'); }
"["            { return('['); }
"]"            { return(']'); }
"."            {  return('.'); }
"&"            {  return('&'); }
"!"            {  return('!'); }
"~"            {  return('~'); }
"-"            {  return('-'); }
"+"            { return('+'); }
"*"            {  return('*'); }
"/"            {  return('/'); }
"%"            {  return('%'); }

"^"            {  return('^'); }
"|"            {  return('|'); }
"?"            {  return('?'); }

[ \t\v\n\f]        { ; }
.            { ; }
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
