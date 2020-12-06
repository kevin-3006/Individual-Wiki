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

* Reads the analog signal on pin A0 of the ADS1115 and prints it to the console.

```
 ets Jan  8 2013,rst cause:2, boot mode:(3,7)

load 0x40100000, len 7136, room 16
tail 0
chksum 0x9c
load 0x3ffe8408, len 24, room 8
tail 0
chksum 0x25
load 0x3ffe8420, len 3336, room 8
tail 0
chksum 0x36
I (43) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (43) boot: compile time 17:17:27
I (45) boot: SPI Speed      : 40MHz
I (51) boot: SPI Mode       : DOUT
I (57) boot: SPI Flash Size : 1MB
I (63) boot: Partition Table:
I (69) boot: ## Label            Usage          Type ST Offset   Length
I (80) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (92) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (103) boot:  2 factory          factory app      00 00 00010000 000f0000
I (115) boot: End of partition table
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x15704 ( 87812) map
I (173) esp_image: segment 1: paddr=0x0002571c vaddr=0x40225714 size=0x05a98 ( 23192) map
I (184) esp_image: segment 2: paddr=0x0002b1bc vaddr=0x3ffe8000 size=0x003dc (   988) load
I (185) esp_image: segment 3: paddr=0x0002b5a0 vaddr=0x40100000 size=0x00080 (   128) load
I (198) esp_image: segment 4: paddr=0x0002b628 vaddr=0x40100080 size=0x044bc ( 17596) load
I (219) boot: Loaded app from partition at offset 0x10000
I (344) gpio: GPIO[2]| InputEn: 0| OutputEn: 1| OpenDrain: 1| Pullup: 1| Pulldown: 0| Intr:0
I (346) gpio: GPIO[0]| InputEn: 0| OutputEn: 1| OpenDrain: 1| Pullup: 1| Pulldown: 0| Intr:0
I (358) main: *******************
I (363) main: ADS1115
I (367) main: Slave Address: 0x90

I (374) main: No. of Seconds Elapsed: 0

I (381) main: ADS1115 Conversion Register: 0x0000
I (389) main: Voltage Level: 0.00 V



I (1393) main: *******************
I (1394) main: ADS1115
I (1395) main: Slave Address: 0x90

I (1396) main: No. of Seconds Elapsed: 1

I (1402) main: ADS1115 Conversion Register: 0x677d
I (1410) main: Voltage Level: 3.31 V



I (2413) main: *******************
I (2414) main: ADS1115
I (2415) main: Slave Address: 0x90

I (2416) main: No. of Seconds Elapsed: 2

I (2422) main: ADS1115 Conversion Register: 0x677d
I (2430) main: Voltage Level: 3.31 V



I (3433) main: *******************
I (3434) main: ADS1115
I (3435) main: Slave Address: 0x90

I (3436) main: No. of Seconds Elapsed: 3

I (3442) main: ADS1115 Conversion Register: 0x677d
I (3450) main: Voltage Level: 3.31 V



I (4453) main: *******************
I (4454) main: ADS1115
I (4455) main: Slave Address: 0x90

I (4456) main: No. of Seconds Elapsed: 4

I (4462) main: ADS1115 Conversion Register: 0x677d
I (4470) main: Voltage Level: 3.31 V



I (5473) main: *******************
I (5474) main: ADS1115
I (5475) main: Slave Address: 0x90

I (5476) main: No. of Seconds Elapsed: 5

I (5482) main: ADS1115 Conversion Register: 0x677d
I (5490) main: Voltage Level: 3.31 V



I (6493) main: *******************
I (6494) main: ADS1115
I (6495) main: Slave Address: 0x90

I (6496) main: No. of Seconds Elapsed: 6

I (6502) main: ADS1115 Conversion Register: 0x677f
I (6510) main: Voltage Level: 3.31 V



I (7513) main: *******************
I (7514) main: ADS1115
I (7515) main: Slave Address: 0x90

I (7516) main: No. of Seconds Elapsed: 7

I (7522) main: ADS1115 Conversion Register: 0x677f
I (7530) main: Voltage Level: 3.31 V



I (8533) main: *******************
I (8534) main: ADS1115
I (8535) main: Slave Address: 0x90

I (8536) main: No. of Seconds Elapsed: 8

I (8542) main: ADS1115 Conversion Register: 0x677f
I (8550) main: Voltage Level: 3.31 V



I (9553) main: *******************
I (9554) main: ADS1115
I (9555) main: Slave Address: 0x90

I (9556) main: No. of Seconds Elapsed: 9

I (9562) main: ADS1115 Conversion Register: 0x677f
I (9570) main: Voltage Level: 3.31 V



I (10574) main: *******************
I (10575) main: ADS1115
I (10576) main: Slave Address: 0x90

I (10577) main: No. of Seconds Elapsed: 10

I (10584) main: ADS1115 Conversion Register: 0x677f
I (10592) main: Voltage Level: 3.31 V

```
