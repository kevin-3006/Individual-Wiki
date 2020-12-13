# _Question 1 Example Application_

_This test code shows how to a mutex to manage a shared resource (gpio pin)._

## GPIO functions

 * GP2: output


## How to use example

### Configure the project

1. Create three tasks in app_main.
2. One task turn the gpio pin on, actively wait 0.5s and task-delay for 1s.
3. One task turn the gpio pin off, actively wait 0.5s and task-delay for 1s.
4. One task outputs a status message of the gpio pin.
5. The gpio pin should be managed using a mutex.

### Build and Flash

Build the project and flash it to the board, then run PuTTY to view serial output.


## Example Output  

 * Toggle the on-board LED on the ESP-01S by turning GP2 pin on and off.

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
chksum 0x32
I (43) boot: ESP-IDF v3.4-dev-363-gdda5062c-dirty 2nd stage bootloader
I (43) boot: compile time 13:38:19
I (45) boot: SPI Speed      : 40MHz
I (51) boot: SPI Mode       : DOUT
I (57) boot: SPI Flash Size : 1MB
I (63) boot: Partition Table:
I (69) boot: ## Label            Usage          Type ST Offset   Length
I (80) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (92) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (103) boot:  2 factory          factory app      00 00 00010000 000f0000
I (115) boot: End of partition table
I (121) esp_image: segment 0: paddr=0x00010010 vaddr=0x40210010 size=0x1460c ( 83468) map
I (171) esp_image: segment 1: paddr=0x00024624 vaddr=0x4022461c size=0x05788 ( 22408) map
I (182) esp_image: segment 2: paddr=0x00029db4 vaddr=0x3ffe8000 size=0x003dc (   988) load
I (182) esp_image: segment 3: paddr=0x0002a198 vaddr=0x40100000 size=0x00080 (   128) load
I (196) esp_image: segment 4: paddr=0x0002a220 vaddr=0x40100080 size=0x044bc ( 17596) load
I (217) boot: Loaded app from partition at offset 0x10000
I (247) gpio: GPIO[2]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 0| Intr:0
I (252) main: GPIO[2], GPIO Level: 0

I (1251) main: GPIO[2], GPIO Level: 1

I (2251) main: GPIO[2], GPIO Level: 0

I (3251) main: GPIO[2], GPIO Level: 0

I (4251) main: GPIO[2], GPIO Level: 1

I (5251) main: GPIO[2], GPIO Level: 0

I (6251) main: GPIO[2], GPIO Level: 0

I (7251) main: GPIO[2], GPIO Level: 1

I (8251) main: GPIO[2], GPIO Level: 0

I (9251) main: GPIO[2], GPIO Level: 0

I (10252) main: GPIO[2], GPIO Level: 1
```
