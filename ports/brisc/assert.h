#ifndef __ASSERT_H__
#define __ASSERT_H__

#if defined(NDEBUG)
#define assert( cond )				\
	do								\
	{								\
		if( !( cond ) )				\
		{							\
			__asm volatile(			\
				"ldc r0, 99		\n"	\
				"halt r0		\n"	\
			);						\
		}							\
	}								\
	while ( 0 )
#else
#define assert( cond )
#endif /* NDEBUG */

#endif /* __ASSERT_H__ */
