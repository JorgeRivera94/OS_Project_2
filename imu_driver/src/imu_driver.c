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
    // TODO read the file
    return;
  } else {
    // file did not exist
    fclose(file_ptr);
    file_ptr = open("imu_data.txt", "w");

    // write initial values TODO
  }

  // close file
  fclose(file_ptr);
}