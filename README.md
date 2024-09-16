# ATmega32 Drivers and External Devices

## Overview

This repository contains a collection of drivers for the ATmega32 microcontroller, as well as interfacing modules for external devices and sensors. The goal is to provide a reusable set of drivers to facilitate development with ATmega32 and various peripherals, making it easier to integrate sensors and external devices into embedded systems projects.

## Features

- **Modular Driver Architecture**: Organized drivers for ATmega32 microcontroller peripherals like GPIO, UART, SPI, I2C, ADC, PWM, Timers, External Interrupts, EEPROM, and Watchdog Timer.
- **Sensor Modules**: Easy-to-use drivers for common sensors such as temperature, humidity, and distance sensors.
- **External Devices**: Drivers for integrating external devices such as LCD displays, keypads, and more.
- **Well-Documented Code**: Each driver is accompanied by a detailed description of usage and configuration.

## Supported Drivers

### ATmega32 Peripherals

- **GPIO (General Purpose Input/Output)**
  - Configurable pin modes (Input, Output, Pull-up, etc.)
  - Pin read/write operations
- **UART (Universal Asynchronous Receiver/Transmitter)**
  - Full-duplex serial communication
  - Configurable baud rate, parity, and data frame format
- **SPI (Serial Peripheral Interface)**
  - Master/slave mode
  - Data transmission and reception
- **I2C (Inter-Integrated Circuit)**
  - Master and slave configuration
  - Supports multi-device communication
- **ADC (Analog-to-Digital Converter)**
  - 10-bit resolution
  - Multiple channel selection
- **PWM (Pulse Width Modulation)**
  - Fast PWM and Phase Correct PWM modes
  - Adjustable duty cycle for servo motors, DC motors, and LEDs
- **Timers/Counters**
  - Timer0, Timer1, and Timer2 with configurable modes (Normal, CTC, PWM)
  - Interrupt and non-interrupt modes
- **External Interrupts**
  - INT0, INT1, INT2 configuration
  - Rising, falling edge, and level-triggered interrupts
- **EEPROM (Electrically Erasable Programmable Read-Only Memory)**
  - Read/write operations for non-volatile data storage
  - Byte-level access
- **Watchdog Timer (WDT)**
  - System reset functionality on time-out
  - Configurable time intervals

### External Devices

- **LCD (16x2) Display**
  - Character display driver with custom character support
  - 4-bit and 8-bit mode configuration
- **4x4 Keypad**
  - Debouncing logic and key press detection
  - Configurable rows and columns
- **Servo Motor Control**
  - PWM generation for angle control
- **DC Motor Control**
  - H-bridge integration for direction and speed control
- **Buzzer**
  - Simple tone generation using PWM or timer
- **7-Segment Display**
  - Single and multiplexed mode support
  - Supports both common cathode and common anode configurations

### Sensor Modules

- **DHT11 (Temperature and Humidity Sensor)**
  - Reads temperature and humidity values
  - Configurable delay for sensor read intervals
- **Ultrasonic Sensor (HC-SR04)**
  - Measures distance using sound waves
  - Driver to calculate distance in centimeters or inches
- **IR Sensor**
  - Obstacle detection using infrared light
  - Configurable threshold values
- **LDR (Light Dependent Resistor)**
  - Light intensity measurement
  - ADC-based analog value conversion

## Getting Started

### Prerequisites

To get started with the drivers, ensure you have:
- ATmega32 microcontroller
- AVR-GCC compiler or any other compatible development environment
- Hardware for the corresponding sensors or devices
- USB ASP programmer or other programming tools to upload code

### Installation

 Clone the repository:
   ```bash
   git clone https://github.com/your-username/atmega32-drivers.git
