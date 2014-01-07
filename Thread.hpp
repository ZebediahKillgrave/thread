#ifndef THREAD_HPP_
# define THREAD_HPP_

class Thread
{
public:
  static int create(void *thread, void *(*start_routine) (void *), void *arg);
  static void exit(void *reval);
};

#endif /* THREAD_HPP_ */
