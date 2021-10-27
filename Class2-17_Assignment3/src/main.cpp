#include <iostream>

int main()
{
    //Try to modify x1 & x2 and see the compilation output
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;

    ref_x1 = 15;
    //ref_x2 = 10;  ref_x2 is a constant so it cannot be modified
    
    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int * const ptr3 = &x ;

    ptr1 = &MAX;    // The address of ptr1 is not constant so it can be modified
    //*ptr1 = MAX;  The value of *ptr1 is constant so it cannot be modified

    //ptr2 = &MAX;  The address of ptr2 is constant so it cannot be modified
    *ptr2 = MAX;    // The value of *ptr2 is not constant so it can be modified
    
    //Find which declarations are valid. If invalid, correct the declaration
    const int *ptr3 = &MAX ;
    //int *ptr4 = &MAX ;    Incorrect declaration, cannot assign as a variable the address previously declared as a constant
    const int *ptr4 = &MAX;
    
    const int &r1 = ref_x1 ;
    //int &r2 = ref_x2 ;    Incorrect declaration, cannot assign a variable reference to a constant value
    const int &r2 = ref_x2;
    
    //int *&p_ref1 = ptr1 ; Incorrect declaration, *ptr1 is a constant so it can't be referenced by a variable
    const int *&p_ref1 = ptr1;
    //const int *&p_ref2 = ptr2 ; Incorrect declaration, *ptr2 is a constant so it can't be referenced by a variable
    int * const &p_ref2 = ptr2;
 
    return 0;
}