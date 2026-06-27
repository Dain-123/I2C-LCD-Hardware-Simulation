# I2C-LCD-Hardware-Simulation
Automated hardware testing peripheral simulation using I2C protocol
## 🚀 Technical Highlights
* **Active I2C Bus Management:** Leverages the standard `Wire.h` library to manage synchronous master-slave data packets over a 2-wire serial interface (SDA/SCL) at hex address `0x27`.
* **Dynamic Frame Buffering:** Utilizes the runtime `loop()` architecture to sequentially stream changing parametric telemetry rather than rendering static text at startup.
* **Silicon Parameter Emulation:** Simulates a production Automatic Test Equipment (ATE) routine by processing and displaying vital semiconductor operating constraints:
  1. **Supply Voltage Monitoring:** Tracking core rail parameters (`VDD Volt: 5.01V`).
  2. **Clock Validation:** Verifying oscillator stability constraints (`Clock: 16.00 MHz`).
  3. **Functional Status Binning:** Outputting the final device validation outcome (`TEST STATUS: PASS`).

## 🛠️ Hardware Stack (Simulated)
* **Microcontroller:** Arduino Uno (ATmega328P)
* **Display Interface:** Alphanumeric LCD (16x2 Layout) with integrated PCF8574 I2C I/O Expander

## 🔍 Semiconductor Testing Concepts Demonstrated
1. **Multi-Parameter Diagnostic Cycling:** Showcases display refresh management and character clearing configurations to prevent text fragmentation between distinct telemetry packets.
2. **ATE Telemetry Simulation:** Mirrors real-world wafer-sort and chip packaging test protocols where supply rails and structural clocks are checked before a component is cleared for shipping.
