#if defined(linux) || defined(__linux)

#include <pthread.h>
#include "Thread.hpp"

int Thread::create(void *thread, void *(*start_routine) (void *), void *arg)
{
  return (pthread_create((pthread_t *)thread, NULL, start_routine, arg));
}

void Thread::exit(void *retval)
{
  return (pthread_exit(retval));
}

#endif
