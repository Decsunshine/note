////首先定义两个辅助宏
#define PRINT_MACRO_HELPER(x) #x
#define PRINT_MACRO(x) #x"="PRINT_MACRO_HELPER(x)

//编译阶段打印宏内容
#pragma message(PRINT_MACRO(_KLN_CLASS_AUTOCOMPLETE(CLASS)))
