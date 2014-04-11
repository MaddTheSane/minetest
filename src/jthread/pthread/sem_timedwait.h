//
//  sem_timedwait.h
//  Minetest
//
//  Created by C.W. Betts on 4/10/14.
//
//

#ifndef Minetest_sem_timedwait_h
#define Minetest_sem_timedwait_h

#include <semaphore.h>
#include <time.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif

__private_extern__ int sem_timedwait (sem_t *sem,
				   const struct timespec *abs_timeout) __attribute((visibility("hidden")));
#ifdef __cplusplus
}
#endif

#endif
