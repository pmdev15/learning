//      DANGLING POINTER
// A dagling pointer is a pointer which points to some non-existing memory location
//
//  free(ptr);      // free deallocates the memory 
//                  // but the pointer is still pointing to the deallocated memory
//  So whats the solution :-
//  1. after free, ptr = NULL
