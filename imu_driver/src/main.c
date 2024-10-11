#define _POSIX_C_SOURCE 199309L

#include <math.h>
#include <sched.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <time.h>
#include <unistd.h>

#include "imu_driver.h"

int main() {
  timer_t timer_id;
  timer_create(CLOCK_REALTIME, NULL, &timer_id);

  struct sigaction action;
  action.sa_handler = TimerHandler;  // TODO
  action.sa_flags = 0;
  sigaction(SIGALRM, &action, NULL);

  // create a file named imu_data.txt to store the data must be in a mode so
  // that other instances of imu_data do not delete the file data
  CreateFile();
  return 0;
}