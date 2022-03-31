/**
 * @file add_integers.h
 * @author your name (you@domain.com)
 * @brief INterface for adding two integer numbers with underflow and overflow checks
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef _ADD_INTEGERS_H_
#define _ADD_INTEGERS_H_

typedef enum function_status_t
{ 
    success,
    OVERFLOW,
    UNDERFLOW

}function_status_t;
/**
 * @brief function to add two integer numbers
 * 
 * @param param1[in] operand 1 to be added
 * @param param2[in] operand 2 to be added
 * @param result[out] REsult of add operation if success
 * @return function_status_t REsult of the function execution
 */

function_status_t int add_integers(int param1, int param2, int result);

#endif  /* _ADD_INTEGERS_H_ */