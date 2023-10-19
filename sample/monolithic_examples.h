
#pragma once

#if defined(BUILD_MONOLITHIC)

#define pcg_main_func(a)					a

#ifdef __cplusplus
extern "C" {
#endif

//int mujs_example_main(int argc, const char** argv);


#ifdef __cplusplus
}
#endif

#else

#define pcg_main_func(a)		main   

#endif
