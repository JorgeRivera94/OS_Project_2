#include "imu_driver.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float time = 0;
double p_x = 20;
double p_y = 10;
double v_x = 0;
double v_y = 0;
double acc_x = 0.15;
double acc_y = 0.06;

void CreateFile() {
  FILE* file_ptr;

  // check if the file exists
  file_ptr = open("imu_data.txt", "r");
  if (file_ptr) {
    // file already exists
    char line[1024];
    char last_line[1024];  // to not lose the last line

    // if line has value, assign it to last_line
    while (fgets(line, sizeof(line), file_ptr)) {
      strcpy(last_line, line);
    }

    // close file in read mode
    fclose(file_ptr);

    // update the time position, velocity and acceleration values to those
    // previously stored in "imu_data.txt".
    scanf(last_line, "%f,%lf,%lf,%lf,%lf,%lf,%lf", &time, &p_x, &p_y, &v_x,
          &v_y, &acc_x, &acc_y);

    // add time required for supervisor to create a new imu_driver
    time += 1.5;

    return;
  } else {
    // file did not exist
    fclose(file_ptr);
    file_ptr = open("imu_data.txt", "w");

    // write initial values TODO
  }
}