#include <stdio.h>
//#include "syntree.h"
extern struct TreeNode* root ;

int main(int argc, char** argv) 
{ 
  	if (argc < 1){
		printf("Usage:./parser + source file name!!\n");
		return 1;
	}
	FILE* f = fopen(argv[1], "r"); 
  	if (!f) 
  	{ 
    		perror(argv[1]); 
    		return 1; 
  	}
  	yyrestart(f); 
  	yyparse();
	printf("=======================================================================\n");
	printTree(root,0);
	printf("=======================================================================\n");
  	return 0; 
} 
