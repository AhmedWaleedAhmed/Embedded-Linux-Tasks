#ifndef __BACK_TRACE__
#define __BACK_TRACE__
#include <string>
#include <iostream>
#include <vector>


void EnterFn(std::string fn_name = __builtin_FUNCTION());
void ExitFn(std::string fn_name = __builtin_FUNCTION());
void PRINT_BT(void);

#endif // !__BACK_TRACE__
