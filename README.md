# 7-Segment-Clock

## Abstract
This project was inspired by my 3DE3 digital electronics course as well as the digital clocks we have in classrooms at McMaster University. The bottom layer shows the control system, namely ESP32 wroom module and CD4056BM96 BCD to 7 segment driver (decoder).

![7seg boards](https://user-images.githubusercontent.com/78376139/207985339-6dba03bb-c26b-4836-a15a-96e45c67e9c9.png)
![7segtop](https://user-images.githubusercontent.com/78376139/207985349-215cbd8a-2cc8-4b1e-9181-63be78ce538a.png)
![7segbottom](https://user-images.githubusercontent.com/78376139/207985354-fe20d606-debe-4ffd-baa6-408211aae561.png)


## Working principle 
Overall, the project is fairly simple, the aim is to have the ESP32 module connect to the internet or to a device via Bluetooth and request the current time and display the time on the 7 segment LEDs in a 24hr clock format.

For example, if the time is 12:34pm, the ESP32 is to send the value '1' to the first 7 segment display via the BCD driver. The same thing is done for the other three digits, '2', '3', and '4'

The ESP32 communicates the number to display to the driver  using BCD or binary coded decimal. The BCD driver has 4 BCD inputs (2<sup>0</sup>, 2<sup>1</sup>, 2<sup>2</sup>, 2<sup>3</sup>) also noted as (A,B,C,D). 

BCD is a method of representing numbers or digits by a set of bits. In our case, 4 bits hence the 4 BCD inputs on our driver. 
Example, the number (decimal) 0 corresponds to '0000' in BCD. In a similar way, the number (decimal) 
