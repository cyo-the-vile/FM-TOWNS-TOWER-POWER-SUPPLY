# FM-TOWNS-TOWER-POWER-SUPPLY
Replacement Power supply for FMT Tower units

This is a replacement for the aging FM Towns power supply.  It's a very well known fact in the niche FM Towns community that the power supply in the Tower models has chronic failure issues. This power supply revolves around using an ACDC converter with an ITX Pico PSU controlled by an Arduino Pro Micro.

This power supply can be used for the following FM Towns computers:

-MODEL 1
-MODEL 2
-SF
-SH
-1F
-2F
-1H
-2H
-10F
-20F
-40H
-80H
-CX10
-CX20
-CX40
-CX100
-SF2
-SH2


To assemble you need to program an Arduino Pro Micro in the Arduino IDE.  Once the Arduino is programmed solder the pin headers and Arduino to the PCB.

After that simply solder everything else.

The Arduino runs on the 5V Standby of the Pico PSU and controls the power on via original power button and also the TownsOS power off feature.
