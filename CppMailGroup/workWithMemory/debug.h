#pragma once
#ifndef DEBUG_H
#define DEBUG_H
#include <cstdio>
#define PREDUG(level,fmt,args,...)
#ifdef DEBUG
#undef PDEBUG
#define PREDUG(level,fmt,args,...)\
if(level<=DEBUG)
	 printf("%s:%d: "fmt "\n",__FUNCTION__,__LINE__,##args)
#endif
#endif // !DEBUG_H
