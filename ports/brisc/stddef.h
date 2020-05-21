#ifndef __STDDEF_H__
#define __STDDEF_H__

#define NULL ((void *)0)

typedef unsigned int size_t;
typedef signed int ptrdiff_t;

#define offsetof(TYPE, MEMBER) ((unsigned long) &((TYPE *)0)->MEMBER)

#endif /* __STDDEF_H__ */
