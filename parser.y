
%{
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define dbg(x)  printf("%d", x)
int yylex(void);
void yyerror(char *);

%}

%token INCLUDE DEFINE TYPEDEF USING NAMESPACE
%token IDENTIFIER CONSTANT STRING_LITERAL
%token EXTERN STATIC AUTO
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token ACCESS NEW
%token CLASS STRUCT CIN COUT PTR_OP INC_OP LEFT_OP SIZEOF  RIGHT_OP LE_OP GE_OP EQ_OP NE_OP AND_OP OR_OP DEC_OP STD
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN CC ENDL FRIEND VIRTUAL  OPERATOR CONST 
%start strt

%%

strt : external_dec             // {printf("successful parsing\n");}
     | strt external_dec
     
     ;
     

external_dec : function_definition
          | declarations
          
          ;
          
declarations: external
        |  Z';'
        | assignment ';'    
        | function_call ';'
        |function_call2 ';'
        | array_define';'
        | array_declare ';'
        | struct_declare ';'
        | class_define';'
        |class_call';'
        | outside_class_function
        ;              
          
external : '#'INCLUDE '<' IDENTIFIER '>'
      |'#'INCLUDE STRING_LITERAL
      |'#'DEFINE   IDENTIFIER ZZ
      |'#'INCLUDE '<' IDENTIFIER '.' IDENTIFIER '>'
    
      | USING NAMESPACE IDENTIFIER ';'
      | USING NAMESPACE STD ';'       
      |'#' DEFINE cnss '{' COMPOUND_BLOCK '}'
      | TYPEDEF type IDENTIFIER ';'
      | TYPEDEF type '&' IDENTIFIER ';'
      ;
      
 
ZZ :CONSTANT
   | STRING_LITERAL
   ;
   

Z :type assignmentlist
  | Z ','type assignmentlist   
  | type2 assignmentlist2
  | Z ',' type2 assignmentlist2 
  ;
 

type : storage_specifier   sign_specifier type_specifier
     | sign_specifier type_specifier
     |type_specifier
     ;
     
     
     
type2 : storage_specifier   sign_specifier type_specifier '&'
     | sign_specifier type_specifier '&'
     |type_specifier '&'
     ;
          
     
assignmentlist2 : SS
           | SS ',' assignmentlist2
           ;     
     
     
storage_specifier : EXTERN
          | STATIC
          | AUTO
          |CONST
          ;
          
          
type_specifier :  VOID
        | CHAR
        | SHORT
        | INT
        | LONG
        | FLOAT
        | DOUBLE
        |UD;
        ;
        
UD : IDENTIFIER
   | CLASS IDENTIFIER
   | STRUCT IDENTIFIER
   ;        
sign_specifier :SIGNED
        |UNSIGNED
        |
        ;
        
        
assignmentlist : YY
        | assignmentlist ',' YY
        ;
                
    
YY : IY
   | X;
                
IY : IDENTIFIER
   | IDENTIFIER  assignment_operator CONSTANT
   | IDENTIFIER assignment_operator STRING_LITERAL
   | SS
   ;       
   
SS :IDENTIFIER assignment_operator function_call
   | IDENTIFIER assignment_operator function_call2
   | IDENTIFIER assignment_operator IDENTIFIER'.' IDENTIFIER
   |IDENTIFIER assignment_operator array_define
   |IDENTIFIER assignment_operator IDENTIFIER
   
   ;   
assignment_operator
    : '='
    | MUL_ASSIGN
    | DIV_ASSIGN
    | MOD_ASSIGN
    | ADD_ASSIGN
    | SUB_ASSIGN
    | LEFT_ASSIGN
    | RIGHT_ASSIGN
    | AND_ASSIGN
    | XOR_ASSIGN
    | OR_ASSIGN
    ;   
    
assignment : CV
	|type IDENTIFIER assignment_operator X
       | array_define assignment_operator X
       | IDENTIFIER assignment_operator X
       |IDENTIFIER '.' IDENTIFIER assignment_operator X
       | array_declare assignment_operator X
       ;
       CV :type2 IDENTIFIER assignment_operator function_call
       |type2 IDENTIFIER assignment_operator function_call2
       |type2 IDENTIFIER assignment_operator IDENTIFIER'.' IDENTIFIER
       |type2 IDENTIFIER assignment_operator array_define
       ;       
       
X :function_call
  |function_call2
  |array_define
  |IDENTIFIER
  |CONSTANT
  |STRING_LITERAL
  |expression
  | IDENTIFIER '.' IDENTIFIER
  |IY
  ;       
    
function_call :
          | IDENTIFIER '(' assignmentlist T')'
          | IDENTIFIER '(' T ')'
          ;
          
          
function_call2:  IDENTIFIER '.' IDENTIFIER '(' ')'
          | IDENTIFIER '.' IDENTIFIER '(' assignmentlist T')'
          | IDENTIFIER '.' IDENTIFIER '(' T ')'
          ;
      
          
          
          
T : CONSTANT
  | T ',' assignmentlist
  |
  ;
 
E : '[' expression']'
  | E '[' expression ']'
  ;                     
          
array_define : IDENTIFIER E
         ;
         
array_declare : type array_define
          | IDENTIFIER array_define
          | CLASS IDENTIFIER array_define
          |type2 array_define '=' IDENTIFIER
          |type2 array_define '='IDENTIFIER '.' IDENTIFIER
          ;    
          
primary_expression
    : IDENTIFIER
    | CONSTANT
    | STRING_LITERAL
    | '(' expression ')'
    | IDENTIFIER'.' IDENTIFIER
    |array_define
    |function_call
    |function_call2
    ;

postfix_expression
    : primary_expression
    | postfix_expression '[' expression ']'
    | postfix_expression '(' ')'
    | postfix_expression '(' argument_expression_list ')'
    | postfix_expression '.' IDENTIFIER
    | postfix_expression PTR_OP IDENTIFIER
    | postfix_expression INC_OP
    | postfix_expression DEC_OP
    ;



unary_expression
    : postfix_expression
    | INC_OP unary_expression
    | DEC_OP unary_expression
    | unary_operator cast_expression
    | SIZEOF unary_expression
    | SIZEOF '(' type ')'
    ;

unary_operator
    : '&'
    | '*'
    | '+'
    | '-'
    | '~'
    | '!'
    ;

cast_expression
    : unary_expression
    | '(' type ')' cast_expression
    |'(' type2 ')' cast_expression
    ;

multiplicative_expression
    : cast_expression
    | multiplicative_expression '*' cast_expression
    | multiplicative_expression '/' cast_expression
    | multiplicative_expression '%' cast_expression
    ;

additive_expression
    : multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

shift_expression
    : additive_expression
    | shift_expression LEFT_OP additive_expression
    | shift_expression RIGHT_OP additive_expression
    ;

relational_expression
    : shift_expression
    | relational_expression '<' shift_expression
    | relational_expression '>' shift_expression
    | relational_expression LE_OP shift_expression
    | relational_expression GE_OP shift_expression
    ;

equality_expression
    : relational_expression
    | equality_expression EQ_OP relational_expression
    | equality_expression NE_OP relational_expression
    ;

and_expression
    : equality_expression
    | and_expression '&' equality_expression
    ;

exclusive_or_expression
    : and_expression
    | exclusive_or_expression '^' and_expression
    ;

inclusive_or_expression
    : exclusive_or_expression
    | inclusive_or_expression '|' exclusive_or_expression
    ;

logical_and_expression
    : inclusive_or_expression
    | logical_and_expression AND_OP inclusive_or_expression
    ;

logical_or_expression
    : logical_and_expression
    | logical_or_expression OR_OP logical_and_expression
    ;

conditional_expression
    : logical_or_expression
    | logical_or_expression '?' expression ':' conditional_expression
    ;

assignment_expression
    : conditional_expression
    | unary_expression assignment_operator assignment_expression
    ;


expression : assignment_expression
    | expression ',' assignment_expression
    ;              
    
argument_expression_list
    : assignment_expression
    | argument_expression_list ',' assignment_expression
    ;    
         
            
         
struct_declare : STRUCT IDENTIFIER '{' Z'}' ';'
        | STRUCT IDENTIFIER IDENTIFIER ';'   //ERROE
        ;
                   
 
class_define : CLASS IDENTIFIER DS '{'CLASS_BLOCK'}'
              ;
              
DS : ':' YRT
   |
   ;
   
YRT : ACCESS IDENTIFIER ',' YRT
    | ACCESS IDENTIFIER
    ;   
              
 CLASS_BLOCK  : ACCESS ':'  BLCK CLASS_BLOCK
         | BLCK CLASS_BLOCK
         |
         ;
         
BLCK : Z ';' BLCK
      | function_definition BLCK
      | FUNCTION_OUTSIDE ';'BLCK
      | constructor  BLCK
      |FRIEND CLASS IDENTIFIER ';' BLCK
      | FRIEND FUNCTION_OUTSIDE ';' BLCK
      | FRIEND outside_class_function ';' BLCK
      | destructor ';' BLCK
      | VIRTUAL  FUNCTION_OUTSIDE '=' ZERO';' BLCK              
      |VIRTUAL FUNCTION_OUTSIDE '=''{' ZERO'}'';' BLCK
      | VIRTUAL cns '=' ZERO';' BLCK   
      |VIRTUAL cns '=''{' ZERO'}'';' BLCK
      |
      ;
      
      
ZERO : CONSTANT         {$$= (yylval); if($$!=0) yyerror("incorrect function definition");}

;      
cns : IDENTIFIER  '(' YX ')' ASDD            //  {printf("6");}
      | IDENTIFIER '(' YX ')'            //{printf("7");}
     | IDENTIFIER '(' ')'             //    {printf("8");}
     | IDENTIFIER  '(' ')' ASDD    
         | IDENTIFIER '(' VOID ')'             //    {printf("8");}
     | IDENTIFIER  '(' VOID ')' ASDD  
          //{printf("9");}
     |  ITT  '(' YX ')'            //  {printf("6");}
               //{printf("7");}
     | ITT '(' ')'             //    {printf("8");}
       
    ;
   
   
ITT :  OPERATOR '+' 
    | OPERATOR '-'
    | OPERATOR '*'
    | OPERATOR '/'
    | OPERATOR  INC_OP
    |OPERATOR  DEC_OP
    | OPERATOR '<''<'
    |OPERATOR '>''>'
    ;   
ASDD : ':' ASD
        ;    
ASD :  IDENTIFIER '(' CONSTANT ')' ',' ASD      //{printf("5");}
   |IDENTIFIER '(' CONSTANT ')'
   ;    
 
 
cnss : IDENTIFIER '(' YXx ')'
     | IDENTIFIER '(' ')'
    ;    
    
constructor :    cns  '{' COMPOUND_BLOCK '}'
            ;
            
            
            
destructor : '~'   cns '{' COMPOUND_BLOCK '}'
            ;            
function_definition: FUNCTION_OUTSIDE '{' COMPOUND_BLOCK'}'      
      ;
FUNCTION_OUTSIDE :       type cns
			| type2 cns
                 ;
                 
YX : type IDENTIFIER CX
   | type IDENTIFIER  CX',' YX
   | type2 IDENTIFIER CX
   | type2 IDENTIFIER  CX',' YX
   | IDENTIFIER CX
   | IDENTIFIER  CX',' YX
   |
   ;    
   
  CX: '='X
     |
     ; 
   
YXx : IDENTIFIER
   |  IDENTIFIER ',' YXx
   |  CONSTANT  ',' YXx
   |CONSTANT
   |
   ;                  
    
outside_class_function :      type IDENTIFIER ':'':' cns '{' COMPOUND_BLOCK '}'
		|  type2 IDENTIFIER ':'':' cns '{' COMPOUND_BLOCK '}'
            ;                       
          
class_call :      CLASS IDENTIFIER IDENTIFIER
           | IDENTIFIER IDENTIFIER
           | CLASS IDENTIFIER  IDENTIFIER '=' NEW cnss
           |  IDENTIFIER  IDENTIFIER '=' NEW cnss
           ;       
 
COMPOUND_BLOCK : STATEMENT_LIST  // {printf("0");}
               | STATEMENT      //{printf("1");}
               |
               ;

STATEMENT_LIST : STATEMENT STATEMENT_LIST //{printf("2");}
               |
               ;
STATEMENT : declarations
           |'{' COMPOUND_BLOCK '}'
           |EXPRESSION_STATEMENT
            |SELECTION_STATEMENT
            |ITERATION_STATEMENT
            |JUMP_STATEMENT
            |LABELED_STATEMENT
            | PRINT_STATEMENT ';'
            ;
            
            
EXPRESSION_STATEMENT : ';'
    | expression ';'
    ;
    
LABELED_STATEMENT : SWITCH '(' expression ')'    '{' SDF '}'
        ;
        
SDF : CASE CONSTANT ':' STATEMENT SDF
    | CASE CONSTANT ':' '{' COMPOUND_BLOCK '}' SDF
    | DEFAULT ':' STATEMENT SDF
    | DEFAULT ':' '{' COMPOUND_BLOCK '}' SDF
    |
    ;
            
SELECTION_STATEMENT : IF '(' expression ')' STATEMENT
                    | IF '(' expression ')' STATEMENT ELSE STATEMENT
                    ;
         
ITERATION_STATEMENT
    : WHILE '(' expression ')' STATEMENT
    | DO STATEMENT WHILE '(' expression ')' ';'
    | FOR '(' expression_statement expression_statement ')' STATEMENT
    | FOR '(' expression_statement expression_statement expression ')' STATEMENT
    ;                    
    
                                                   
expression_statement: ';'
    | expression ';'
    ;
    
JUMP_STATEMENT : GOTO IDENTIFIER ';'
    | CONTINUE ';'
    | BREAK ';'
    | RETURN ';'
    | RETURN expression ';'
    ;    
    
PRINT_STATEMENT : CIN '>''>' YZV
                | COUT '<''<' YT
                | STD ':'':' CIN'>''>' YZV
                | STD ':'':' COUT '>' '>' YT
                ;
                
YZV : IDENTIFIER
    | IDENTIFIER '>''>' YZV
    | IDENTIFIER '.' IDENTIFIER '>''>' YZV
    | IDENTIFIER '.' IDENTIFIER
    | array_define
    | array_define '>' '>' YZV
    ;
    
YT : X
    | X '<''<' YT
    | ENDL
    |ENDL '<''<' YT
    ;    
                    
%%


void yyerror(char *msg)
{
printf("Invalid Expression %s\n", msg);
}
int main ()
{
yyparse();

return 0;
}
