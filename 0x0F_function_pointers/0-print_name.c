#include "functions.h"
#include <stdio.h>
/**
 *print_name - this function calls the print name function
 *Retunrs: void
 *@name: this is the  name to be printed out
 *@f:this function is called passing the parameter name to it 
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
