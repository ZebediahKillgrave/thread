#if defined(_WIN32) || defined(__WIN32__)

#include <windows.h>
#include "Thread.hpp"

int create(void *thread, void *(*start_routine) (void *), void *arg)
{
    return ((int)CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)start_routine, arg, 0, (LPDWORD)thread));
}

void exit(void *reval)
{
    ExitThread((DWORD)reval);
}

#endif
