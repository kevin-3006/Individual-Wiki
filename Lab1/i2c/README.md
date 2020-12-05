# _I2C Example_

* This example will show you how to use I2C module:
 
    * read external i2c sensor, here we use a ADS1115 sensor for instance.
    
## Pin assignment

* master:
    * GP2 is assigned as the data signal (SDA) of i2c master port
    * GP0 is assigned as the clock signal (SCL) of i2c master port
    
## How to use example

### Hardware Required

* Connection:
    * connect sda/scl of sensor with GP2/GP0
    * no need to add external pull-up resistors, driver will enable internal pull-up resistors.

### Configure the project

1. Configure the #defines associated with the SCL and SDA lines.
2. Determine the I2C address of the ADS1115 and the ADS1115 registers to be configured/read/written.
3. Read and report the analog signal connected to channel 0 of the ADC at appropriate intervals.

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.

## Example Output  

```
hi

```
