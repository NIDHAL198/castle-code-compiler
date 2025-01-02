%{
   #include "../../include/scanner.h"
   int nbr_voil = 0;
   int nbr_cons = 0;
%}

voile [aeiouy]
costant [^aeiouy]

%%

:                           return COLON;
"db_name"                   return NAME;
"db_type"                   return TYPE;
"db_table_prefix"           return TABLE;
"db_port"                   return PORT;

{voile}                     { nbr_voil++; printf("Voile detected: \n");}
{costant}                   {nbr_cons++; printf("Constant detected: \n");}

[a-zA-Z][_a-zA-Z0-9]*       return IDENTIFER;
[+-]?[1-9][0-9]*           return INTGER;


%%

int yywrap(void) {
   return 1;  
}


