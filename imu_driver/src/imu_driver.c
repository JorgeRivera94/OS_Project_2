#include <stdio.h>
#include <stdlb.h>

void CreateFile() {
  FILE* file_ptr;

  // check if the file exists
  file_ptr = open("imu_data.txt", "r");
  if (file_ptr) {
    // file already exists
    fclose(file_ptr);
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