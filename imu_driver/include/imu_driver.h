/**
 * @brief Create a file named "imu_data.txt" to store the data.
 *
 * Create a file named "imu_data.txt" to store the data and writes the initial
 * position, velocity and acceleration values if it does not already exist. If
 * the file exists, the function updates the position, velocity and acceleration
 * values to those previously stored in "imu_data.txt".
 */
void CreateFile();

/**
 * TODO make sure it is formated to two decimals like 4.56
 * The current time since the program started.
 */
extern float time;

/**
 * Current position of the robot in the x axis.
 */
extern double p_x;

/**
 * Current position of the robot in the y axis.
 */
extern double p_y;

/**
 * Current speed of the robot in the x axis.
 */
extern double v_x;

/**
 * Current speed of the robot in the y axis.
 */
extern double v_y;

/**
 * Current acceleration of the robot in the x axis.
 */
extern double acc_x;

/**
 * Current acceleration of the robot in the y axis.
 */
extern double acc_y;