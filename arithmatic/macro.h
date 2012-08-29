#include <time.h>
#include <stdio.h>

#ifndef TIME_TEST
#define TIME_TEST(codes,n)                                                \                       		   		   
{                                                                         \
		clock_t _TIME_BEGIN_ = clock();                           \      	   
                for(int _TIME_I_=0; _TIME_I_<n; ++_TIME_I_)               \    
        	{	codes;	}                                         \    
		clock_t _TIME_END_   = clock();                           \
		printf("\nexec "#codes" "#n"-times used %ld ms\n",        \
			_TIME_END_ - _TIME_BEGIN_ );                      \
}         
#endif

#ifndef CATCH_ERROR
#define CATCH_ERROR(function)                                             \
{                                                                         \
	int ret = function;                                               \
	if( ret != 0 )                                                    \
		printf("\nthere is an error when calling "#function"\n"); \
}
#endif
