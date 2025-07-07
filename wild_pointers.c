//      WILD POINTERS
// Wild pointers are also known as uninitialized pointers
// these pointers usually point to some arbituary memory location and may cause the program to crash or misbehave
//
// Ex:-
// int *ptr;
// ptr=10;
//
//  HOW TO AVOID
//  1. initialise with address of a known variable
//  2. explicitly allocate the memory and put the values int he allocated memory 
//      ex :-
//      int *p = (int *)malloc(sizeof(int));
//      *p=10;
//      free(p)
//
