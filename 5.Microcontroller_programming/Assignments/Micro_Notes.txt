*****************************************************************************************************************************************************

WATCHDOG -> 1094
**********************************************************************
CONNECTION OF STM32 BOARD TO USBTO SERIAL FDI CONNECTOR (UART)-> 1047
***********************************************************************
DMA SETTINGS -> 1235
**********************************************************************
I2C -> 1390
*********************************************************************
SPI -> 1264 -> WRITE IT FOR STM324 -> 1329
*********************************************************************
Q.18
ACCELLEROMETER -> 1696
*********************************************************************
Q.19
 EXTERNAL INTERRUPT -> 1827
********************************************************************
Q.20
LED BLINK CLOCKWISE-ANTICLOCK -> 1978
********************************************************************
Q.17
I2C -> 1420
*******************************************************************
Q.16
SPI -> 2056 , 1329
********************************************************************
Q.15
DMA (UART) -> 1223
*******************************************************************
Q.14
INTERRUPT DRIVEN (UART) -> 1173
********************************************************************
Q.13
TRANSMIT (UART) -> 1210
******************************************************************
Q.12
INTERNAL WATCHDOG -> 1032
*****************************************************************
Q.11
REAL TIME CLOCK -> 955
****************************************************************
Q.10
(ADC) CONTINUOUS CONVERSION MODE->925
*****************************************************************
Q.9
(ADC) SINGLE SHOT MODE -> 898
****************************************************************
Q.8
TIMER INTERRUPT CAPTURE -> 784
*****************************************************************
Q.7
TIMER OUTPUT COMPARE -> 678
***************************************************************
Q.6
PULSE WIDTH MODULATION -> 626
***************************************************************
Q.3
TOGGLE WHEN SWITCH PRESSED -> 446
*******************************************************************************************************************************************
 



PC[Program Counter]
SP[Stak Pointer] Higher Address---> Lower Address---

0x00008 int main(void)                  
0x0000C     {
    
0x00010         printf("Hello world\n");        // Blinking the LED Turn ON LED_x

0x00014         for(;;);                        // infinte loop while(1)
0x00018     }


label: rjmp label

ps aux | grep -i nameofprogram'

//1811//Code below to Turn On Blue LED [PE8]

// To get the address of a Register first get base address from memory map then get the offset from peripheral register
//Register address= [Base Address] + [Offset]
const volatile uint32_t *pClkCtrlReg =   (uint32_t*)0x40021014;//[0x40021000] + [0x14]
const volatile uint32_t *pPortEModeReg = (uint32_t*)0x48001000;//[0x48001000] + [0x00 offset for mode register]?
const volatile uint32_t *pPortEOutReg =  (uint32_t*)0x48001014;//[0x48001000] + [0x14 offset for ODR register]?

//1. enable the clock for GPOIE peripheral in the AHB1ENR (SET the 21st bit position) //bit position incorrect for LED
*pClkCtrlReg |= ( 1 << 21);

//2. configure the mode of the IO 8 pin as output  
//a. clear the 16th and 17th bit positions (CLEAR) 
*pPortEModeReg &= ~( 3 << 16);
//b. make 16th bit position as 1 (SET)
*pPortEModeReg |= ( 1 << 16);

//3.SET 8th bit of the output data register to make I/O pin-8 as HIGH  // Incorrect IO Pin Out value
*pPortEOutReg |= ( 1 << 8);

while(1);

Bitwise: &, | , ~, >>,<<
Volatile
AVR Registers: DDR, PORT 
Equivalent Resgisters in ARM
uint32_t
uint16_t
uint8_t

UART - 8N1, 9600/115200, Async, Rx/Tx, Start bit & Stop Bits,Serial Communication [8 : 8 data bits, N: No parity, 1: Stop Bit]
SPI- Baud Rate for SPI Dependa on Clock and the Prescalar [Clock=16Mhz, PreScalar=16, Baud= 1000Kbps]1000kbps,Sync, MOSI/MISO/CS/CLK,Master Slave, No Slaves= No of CS Pins,no of wires req= n+3 [n= no of slaves]
I2C- SDA/SCL,Standard Mode=100Kbps/Fast Mode=400kbps/HighSpeed=3.4Mbps,Master-Slave Comm., Sync,Slave Address can be 10bits / 7bit Address, Pull Up Registers are there, SDA is Bidirectional/SCL Master-> Slave.
CAN- Used in Automotive, Most Robust & Reliable Bus, Phy Layer and Logical Layer Prtotection , CAN H/CAN L, Low Speed : upto125Kbps, High Speed : upto 1Mbps, Aysnc, BroadcasT  Communinication/Receiver Selective Addresing
[Phy: Terminating Resistance 120 Ohm, Differential Signalling, Twisted Pairs of wires  ]
[Logical : CRC Check, ACK Check, Bit Monitoring, Stuff Bit Check, Frame Check]
Every Node in CAN BUS is a Master
Principal: CarrierSenseMultipleAccess/Collision Avoidance[CSMA/CA]

0xFFFF
fffe

0x0000
Inst.
ISA [x86(32bit Intel), x64(64bit Arch AMD), ARM]
OTA: Over the Air Updates
1. Incremental Updates
2. Full Updates
3. Bootloader Updates

Flow of PC in case of Jump, Function Call
When writing prog. for MCU we use/declare Local/Global, these variables are saved in SRAM(Stack), as their values are changing in the prog, so they are saved in SRAN not in Flash.
if using RTOS heap memory is used from RAM
Since we use Harvard Architecture saperate buses for Flash and RAM
Use of Stack Pointer
Von-numen Architecture- Harvard Architecture
RISC-CISC
FPGA/ASIC

8N1@115200

SoC 
<10% is for the Micoprocessor

Reset
1. Power On Reset
2. Brownout Reset   Min 3.3v 3.0v
3. Watchdog Reset
4. Thermal Reset


32bit Microcontroller Architecture-
2^32=4GB

4GB of Memory  X
4GB of Address Space Y

FLash: 256KB to 1MB

2^64=

A Application A8,A53,A15
R Real Time R4,R5
M Microcontroller M0,M3,M4,M7

M3 vs M4 (FPU,DSP)

ISA : Thumb2 16bit & 32bit intructions

Architecture-ARMv7M


MMU- Memory Management Unit (Virtual Memory/ Cache) = NA

MPU- Memory Protection Unit (User Access/ Kernal Access) = Avb.

Maskble Int. : Avoided
NonMaskable : Cannot be Avoided RESET

Interrupt: main()-> Prog. is running -> Interrupt Occurs -> (Stacking)Save the current context in stack , including the address of PC -> 
Fetch the Address of ISR -> Execute ISR -> (UNStacking)Restore the context -> Back to main().

Arm State: Contains 32 bit Instructions for More Performance Efficiency
Thumb State: Contains 16 bit Instructions for More Energy Efficiency

AMBA: Advance Microcontroller Bus Architecture
APB: Advance Peripheral Bus
AHB: Advance High Performance Bus
AXI : Advance eXntensible Interface 

Operation States
1. Thumb State (Default)
2. Debug State (Only Availible when Debugger is attached)

Operation Modes
1. Thread Mode : for executing Normal code
2. Handler Mode : for executing exception Handler

Thread Mode
a. Privledge Mode (When System Starts/ at Startup)
b. UnPrivledge Mode 

Programmer Model at Interrupt :
User Switches from Thread Mode to the Handler Mode

Restriction: User Cannot Change Directly from Thread Mode Unprivledge to Thread Mode Privledge

Stack Pointer in Cortex M
1. Main Stack Pointer : Default for Handler Mode
2. Process Stack Pointer : Used when a Free RTOS is Ported in Microcontroller.

Condition 1: without Control Register & Without MPU
  FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 1024K
  RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 128K
  MEMORY_B1 (rx)  : ORIGIN = 0x60000000, LENGTH = 0K
Condition 2: with Control Register in Action and Without MPU
    we have Privledge Mode (When System Starts/ at Startup) & UnPrivledge Thread Mode 
Condition 3: with Control Register in Action and With MPU
    Specific Task are alocated specific memory regions and if any voilation happens then Mem. Fault Occurs

Stack:
When Free RTOS:
User Space: Process Stack Pointer
Kernel Space : Main Stack Pointer

When Only Firmware code without RTOS:
Uses Main Stack Pointer only

Task1: 0x10002000 to 0x20003000 

Task Modelling in RTOS

CONTROL Register:
1. nPriv = Priv. or UnPriv.
2. SPSEL = Stack Pointer Select bit for selecting Main or Process Stack Pointer.

R0-R7 Low Register used by 16bit Operations
R8-R12 High Registers used by 32bit Operations

R13-Stack Pointer
R14-Link Register
R15-Program Counter

PSR- Program Status Register
1. APSR  Application Program Status Register , Contains ALU Flags
2. EPSR Execution Program Status Register, Contains T Bit always set to High
3. IPSR Interrupt Program Status Register, Contains Interrupt Number


Char Data Type 1 Byte, or 8 Bits , Max Val in Decimal=255  (Unsigned Char)
Signed Char -128 to +127

Mask  Registers
1. PriMask Disables all Positive Priority Interrupt
2. FaultMask Disables all Positive Priority Interrupt and Hard Fault 
3. BasePri Disables all Interrupt below a certian level of Priority
MOV R0, #0x01
MSR PriMask,R0


To Disable all interrupts below 6 level
MOV R0, #0x06
MSR BasePri,R0

Interrupts are one type of Exception

Interrupt Service Routine or Handler

Hard Fault handler is a Default handler for System Exception

MSP Value is set by the First Entry of the Vector Table, 
as the Vector Table only contains addresses so the first entry will set the address for MSP.

Reset Flow
Init Main SP at address 0x00 -> Reset Vector(Pointing to an Address of Reset Handler) at address 0x04 -> Reset Handler (Init. Hardware like memory Sections Data and Code)-> main()

With Bootloader
Init Main SP at address 0x00 -> Reset Vector(Pointing to an Address of Reset Handler) at address 0x04 -> Reset Handler (Init. Hardware like memory Sections Data and Code)-> Bootloader (used for Flashing via Uart or OTA Update) --> main()

Peripherals

1. GPIO
2. Timer
3. UART (Serial)
4. SPI
5. I2C
6. CAN Bus

Async. : Uses Start bit , Stop Bit for  sync
Sync   : Uses Common Clock for Sync.

DMA : Direct Memory Access
Peripheral Directly store the Data to Memory Rather than going through CPU

Uart
Baud Rate:Full-duplex asynchronous communications up to 115200 bps
Data word length: 8 bits
Number of stop bits: 1 stop bit
Parity control(Parity check of received data frame): No Parity

8N1@115200

If we want to set the value of 28th bit of the address 0x200000000, given the base address of 
alias Region 0x220000000, Which word will coressrespond to the above 28th bit?

Answer 220000070

Interrupt States

1. Enabled or Disabled
2. Pending(ISR is not started Yet, it can be due to Stacking Operation or 
alredy an high priority interrup will be active ) or Not-Pending
3. Active(ISR is being served)  or Inactive

Interrupt can be Processed if:

1. Pending state is set
2. Its Enabled
3. Its higher Priority than current Level

Assuming we are in RTOS Envt. with Multiple Thread

Thread 1 is running and executing instruction 0x1000
Thread 1 Calls Function Located at 0x2000
At this point LR=0x1004
and PC has moved to some instruction in function having address 0x2008

Now Context Switch occurs and
Thread 2 is running now , at this point you need to store Both
PC =0x2008
LR =0x1004
so that after you switch back to Thread 1 you can jump back to earlier function.

The HAL driver supports three programming models for its data processing functions: 
a. polling
b. interrupt 
c. DMA. 

Blocking Mode
Polling functions operate in blocking mode, meaning these functions will not return until the operation is complete.
To prevent the application from hanging, the user must provide a suitable timeout value. 

Non-Blocking Mode
Interrupt and DMA functions operate in non-blocking mode, which means these functions will return after the operation 
is initiated, allowing the application to continue execution while the operation continues in the background. 
However, a callback function must be configured and enabled to handle the signal raised once the operation completes.

STM32CubeIDE
3 Perspectives are Availible
1. Device Configration Perspective
2. Code Perspective C/C++
3. Debug Perspective

STM32F4
LED's
PD12  Green
PD13  Orange 
PD14  Red 
PD15  Blue

Button
PA0(User) - Blue Button
Reset- Black Button

STM32F3
LED's
PE8  Blue
PE9  Red
PE10 Orange
PE11 Green
PE12 Blue2
PE13 Red2
PE14 Orange2
PE15 Green2

Button
PA0(User) - Blue Button
Reset- Black Button




GPIO API's
HAL_GPIO_TogglePin(GPIOD, LED1_Pin);
HAL_GPIO_TogglePin(Port, Pin);

void HAL_GPIO_TogglePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
  /* Check the parameters */
  assert_param(IS_GPIO_PIN(GPIO_Pin));

  if ((GPIOx->ODR & GPIO_Pin) == GPIO_Pin) //Output Data Register
  {
    GPIOx->BSRR = (uint32_t)GPIO_Pin << GPIO_NUMBER;  // GPIO port bit set/reset register
  }
  else
  {
    GPIOx->BSRR = GPIO_Pin;
  }
}

static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, LED1_Pin|LED2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED1_Pin LED2_Pin */
  GPIO_InitStruct.Pin = LED1_Pin|LED2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

Class 02
Agenda: GPIO, Timer, Uart

GPIO
HAL_GPIO_TogglePin(GPIOD, LED1_Pin);
HAL_GPIO_WritePin(GPIOD, LED1_Pin, GPIO_PIN_SET);

Assignment 1 

************************************************************************************************************************
Q1.

 Write a Program(GPIO_A1) and Configure Pins PD13/PE8 , PD14/PE9 
to LED3, LED4 Respectively & Toggle the LED's connected to them , also configure SWD Feature?

**********************************************************************************************************

Q2. 

Write a Program(GPIO_A2) and Configure Pins PD12/PE8 to LED1 & 
Set the LED's connected to the PIN for 500ms and Reset for 500ms , also configure SWD Feature?

********************************************************************************************************************
Q3.

 Write a Program(GPIO_A3) and Configure Pins 
(Switch)PA0  to GPIO_Input ,
(LED)   PD12/PE8 to GPIO_Output,
Action:Toggle the LED's when Switch is Pressed , also configure SWD Feature?
 Part 1
 /* USER CODE BEGIN WHILE */
  while (1)
  {
      if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)
          {
              
                      HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);

          }
  }
Part 2
/* USER CODE BEGIN WHILE */
  while (1)
  {
      if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)//
          {
              HAL_Delay(100); //Debouncing Delay used to avoid Noise
              if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)//
                  {
                      HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);

                  }
          }


*************************************************************************************************************************************
Q4.

 Write a Interrupt Driven Program(GPIO_A4) and Configure Pins 
(Switch)PA0  to GPIO_EXTI0 ,
(LED)   PE8/PD12 to GPIO_Output,
NVIC GUI --> Enable EXTI line0 Interrupt
Action:Toggle the LED's when Switch is Pressed , also configure SWD Feature?

Part 1

/* USER CODE BEGIN PV */
uint8_t flag=0;

/* USER CODE BEGIN WHILE */
  while (1)
  {
      if(1 == flag)
      {
          HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
          flag=0;
      }


/* USER CODE BEGIN 4 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    flag=1;
}

Part 2
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
}

Flow
                            H/W Specific        HAL Specific
Switch(EXTI0 Source)--> EXTI0_IRQHandler --> HAL_GPIO_EXTI_IRQHandler() --> 
Actual Funcion where we can Code HAL_GPIO_EXTI_Callback() 

void EXTI0_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI0_IRQn 0 */

  /* USER CODE END EXTI0_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
  /* USER CODE BEGIN EXTI0_IRQn 1 */

  /* USER CODE END EXTI0_IRQn 1 */
}

void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin)
{
  /* EXTI line interrupt detected */
  if(__HAL_GPIO_EXTI_GET_IT(GPIO_Pin) != 0x00u)
  {
    __HAL_GPIO_EXTI_CLEAR_IT(GPIO_Pin);
    HAL_GPIO_EXTI_Callback(GPIO_Pin);
  }
}

__weak void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(GPIO_Pin);

  /* NOTE: This function should not be modified, when the callback is needed,
           the HAL_GPIO_EXTI_Callback could be implemented in the user file
   */
}

********************************************************************************************************************************************


Assignment 2 Timer
Theory:
Start 0  -- TOP 65535
250  Lap 1/ Output Compare 1
500  Lap 2/ Output Compare 2
750  Lap 3/ Output Compare 3
1000 Lap 4/ Output Compare 4

*Note:*Timer peripherals are always clocked through APBx timer clocks not APBx peripheral clocks*
Counting Speed of the Counter Depends on Clock Freq. of Timer
Timer is Connected to APBx Timer Bus
16MHZ/8MHZ is the Clock for APB Bus
Agenda is to genrate a delay for 1MS Tick for the Counter (Incrementing Counter by 1 will take 1ms)
Counter counting till 1000 @1MS Tick will genrate a Delay of 1Sec
Running this Delay for 1000 Times(Counting till 1000) for Getting 1Sec

PreScalar=16000
16MHZ/PreScalar = 1KHZ

Freq.= 1/Time
1KHZ = 1MS
1HZ = 1Sec


At a Freq. of 1KHZ if we count till 1000 we get 1Sec of Delay
              1MS          *        1000     =  1Sec

Part 1 For a Delay of 200 MS , if Prescalar is 16000 and APB Bus Freq is 16Mhz, What is the count Required?
16000000/16000=1000=1Khz = 1MS * 200(count) = 200MS
Part 2 For a Delay of 500 MS , if Prescalar is 16000 and APB Bus Freq is 16Mhz, What is the count Required?
16000000/16000=1000=1Khz = 1MS * 500(count) = 500MS
Part 3 For a Delay of 50 MS , if Prescalar is 16000 and APB Bus Freq is 16Mhz, What is the count Required?

Part 4 For a Delay of 750 MS , if Prescalar is 16000 and APB Bus Freq is 16Mhz, What is the count Required?

If Clock Freq for ABP1 Timer Bus is 32Mhz and we want a delay for 1MS (Tick) , what will be the Prescalar?

If Clock Freq for ABP1 Timer Bus is 32Mhz and Prescalar is 8000 , what will be the Delay or Tick?

32Mhz/8000 = 4 Khz  

F= 1/T
T=1/F = 1/4Khz=1/4000 = 0.25MS

*********************************************************************************************************************************
Q5

 Write a Interrupt Driven Program(TIM_INT_A5) and 
Configure Pins 
(LED)   PD12/PE8 to GPIO_Output

Configure Peripherals TIMER2 (TIM2)
Clock Source: Internal Clock
PreScalar : 16000/8000
Conter Mode: UP
Counter Period: 1000
Trigger Event Selection : Update Event 

Configure NVIC
NVIC GUI --> TIMER2 GLOBAL INTERRUPT Enable

Action:Toggle the LED's when Timer time Elapsed or Timer Expire , also configure SWD Feature?

/* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT(&htim2);
  
/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
}

****************************************************************************************************************************************
Q6

 Write a Program(TIM_PWM_A6) to Learn Pulse Width Modulation and 
Configure Peripherals TIMER4 (TIM4)                 for STM32F3     Configure Peripherals TIMER1 (TIM1)
Clock Source: Internal Clock
PreScalar : 15 +1 [Internally Prescaler + 1]        for STM32F3     PreScalar : 7 +1    
Conter Mode: UP
Counter Period: 99+1 [Internally Period + 1]         
Channel 1: PWM Genration CH1                        for STM32F3     //Channel 1 is connected to PE9 
Channel 2: PWM Genration CH2                        for STM32F3     //Channel 2 is connected to PE11    
Channel 3: PWM Genration CH3                        for STM32F3     //Channel 3 is connected to PE13    
Channel 4: PWM Genration CH4                        for STM32F3     //Channel 4 is connected to PE14    

Action:Control the Brightness of LED , also configure SWD Feature?

*Note:*Timer peripherals are always clocked through APBx timer clocks not APBx peripheral clocks.*
PWM Frequency = [Timer Frequency ] / [(Prescaler+1)*(Period+1)] 
If I want 10 kHz, then applying the formula with prescaler one and counter period 99 I have:

PWM Frequency = [2 MHz] / [(1+1)*(99+1)] = 10 kHz


PreScalar=15
16MHZ/PreScalar+1 = 1MHZ
1MHZ=0.001MS=1MicroSec
PWM Frequency = [16 Mhz] / [(15+1)*(99+1)] = 10 kHz
Duty Cycle= Ton/ Ton + Toff
                

/* USER CODE BEGIN 1 */
    int dutycycle=99;
    
 /* USER CODE BEGIN 2 */
  HAL_TIM_PWM_Start(&htim4,TIM_CHANNEL_1);          for STM32F3     HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&htim4,TIM_CHANNEL_2);          for STM32F3     HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_2);
  HAL_TIM_PWM_Start(&htim4,TIM_CHANNEL_3);          for STM32F3     HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_3);
  HAL_TIM_PWM_Start(&htim4,TIM_CHANNEL_4);          for STM32F3     HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_4);
  
/* USER CODE BEGIN WHILE */
  while (1)
  {
      htim4.Instance->CCR1 = dutycycle; // Capture and Compare Register1
      htim4.Instance->CCR2 = dutycycle; // Capture and Compare Register2
      htim4.Instance->CCR3 = dutycycle;
      htim4.Instance->CCR4 = dutycycle;
      dutycycle -=1;
      if(dutycycle<1) 
      dutycycle=99;
      HAL_Delay(25); // for Proper Fading Affect
}

***************************************************************************************************************************************
Q7.1 Write a Program(TIM_OC_A7_1) to Learn Timer Output Compare and 
Configure Peripherals TIMER4 (TIM4)
Clock Source: Internal Clock
PreScalar : 16000
Conter Mode: UP
Counter Period: 1000
Channel 1: Output Compare CH1
Channel 2: Output Compare CH2
Channel 3: Output Compare CH3
Channel 4: Output Compare CH4
CH1 Pulse 250, 
    Mode Toggle
CH2 Pulse 500, 
    Mode Toggle
CH3 Pulse 750, 
    Mode Toggle
CH4 Pulse 1000, 
    Mode Toggle

Action:Control the Motion Sequence of LED , also configure SWD Feature?

 /* USER CODE BEGIN 2 */
  HAL_TIM_OC_Start(&htim4,TIM_CHANNEL_1);
  HAL_TIM_OC_Start(&htim4,TIM_CHANNEL_2);
  HAL_TIM_OC_Start(&htim4,TIM_CHANNEL_3);
  HAL_TIM_OC_Start(&htim4,TIM_CHANNEL_4);
  
  ***************************************************************************************************************************
Q7.2

 Write a Program(TIM_OC_A7_2) to Learn Timer Output Compare in Interrupt Mode and 
Configure Peripherals TIMER4 (TIM4)
Clock Source: Internal Clock
PreScalar : 16000
Conter Mode: UP
Counter Period: 10000
Trigger Event Selection: Compare Pulse (OC1)
Configure NVIC
NVIC GUI --> TIMER4 GLOBAL INTERRUPT Enable

Channel 1: Output Compare CH1
Channel 2: Output Compare CH2
Channel 3: Output Compare CH3
Channel 4: Output Compare CH4
CH1 Pulse 250, 
    Mode Toggle
CH2 Pulse 500, 
    Mode Toggle
CH3 Pulse 750, 
    Mode Toggle
CH4 Pulse 1000, 
    Mode Toggle

Action:Control the Toggoling Fequency of each LED at different rate, also configure SWD Feature?
/* USER CODE BEGIN PV */
 volatile uint32_t pulse1_value = 250; //to produce 4Hz
 volatile uint32_t pulse2_value = 500; //to produce 2HZ
 volatile uint32_t pulse3_value = 750;  //to produce 1.33Hz
 volatile uint32_t pulse4_value = 1000;  //to produce 1Hz
 volatile uint32_t ccr_content;

 /* USER CODE BEGIN 2 */
  HAL_TIM_OC_Start_IT(&htim4,TIM_CHANNEL_1);
  HAL_TIM_OC_Start_IT(&htim4,TIM_CHANNEL_2);
  HAL_TIM_OC_Start_IT(&htim4,TIM_CHANNEL_3);
  HAL_TIM_OC_Start_IT(&htim4,TIM_CHANNEL_4);
  
  /* USER CODE BEGIN 4 */
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)
 {
   /* TIM3_CH1 toggling with frequency = 4 Hz */
   if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1)
   {
       ccr_content = HAL_TIM_ReadCapturedValue(htim,TIM_CHANNEL_1);
       __HAL_TIM_SET_COMPARE(htim,TIM_CHANNEL_1,ccr_content+pulse1_value);
       //to update the compare values at 250,500,750,1000,1250,1500....10000
   }

   /* TIM3_CH2 toggling with frequency = 2 Hz */
   if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_2)
   {
       ccr_content = HAL_TIM_ReadCapturedValue(htim,TIM_CHANNEL_2);
       __HAL_TIM_SET_COMPARE(htim,TIM_CHANNEL_2,ccr_content+pulse2_value);
        //to update the compare values at 500,1000,1500,2000,2500,3000....10000
   }

   /* TIM3_CH3 toggling with frequency = 1.33 Hz */
   if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_3)
   {
       ccr_content = HAL_TIM_ReadCapturedValue(htim,TIM_CHANNEL_3);
       __HAL_TIM_SET_COMPARE(htim,TIM_CHANNEL_3,ccr_content+pulse3_value);
        //to update the compare values at 750,1500,2250,3000....10000
   }

   /* TIM3_CH4 toggling with frequency = 1 Hz */
   if(htim->Channel == HAL_TIM_ACTIVE_CHANNEL_4)
   {
        ccr_content = HAL_TIM_ReadCapturedValue(htim,TIM_CHANNEL_4);
       __HAL_TIM_SET_COMPARE(htim,TIM_CHANNEL_4,ccr_content+pulse4_value);
        //to update the compare values at 1000,2000,3000,4000....10000
   }
 }

************************************************************************************************************************************************
Q8

 Write a Program(TIM_IC_A8) to Learn Timer Input Capture Mode and 
Configure Peripherals TIMER2 (TIM2)
Clock Source: Internal Clock
PreScalar : 16000
Conter Mode: UP
Counter Period: 100000
Channel 1: Input Capture Direct Mode
Parameter Setting -
Input Filter : 15 // To Avoid Debouncing 

Configure NVIC
NVIC GUI --> TIMER2 GLOBAL INTERRUPT Enable

Software Requirement: STM Studio

Action: Capture the Timing of Button Pressed and Display the same in STM STudio, also configure SWD Feature?

/* USER CODE BEGIN PV */
uint32_t counterVal;
uint32_t inputCaptureVal;

/* USER CODE BEGIN 2 */
  HAL_TIM_IC_Start_IT(&htim2,TIM_CHANNEL_1);
  
/* USER CODE BEGIN WHILE */
while (1)
{
  counterVal = __HAL_TIM_GetCounter(&htim2);
}

/* USER CODE BEGIN 4 */
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{
    if(htim->Instance == TIM2)  //Confirming weather Interrupt Genrated from TIM2 as the ISR is common for All Timers
    {
        inputCaptureVal = __HAL_TIM_GetCounter(htim); // Get the Button Press Timing
    }
}

***************************************************************************************************************************************************
Freq:16MHZ
Aim: 100 Sec
Prescalar=16000
16MHZ/PreScalar = 1KHZ

1KHZ= 1MS

1MS * 1000 * 100 = 100Sec

STM Studio 
How to watch a Real Time Value of Variable?
Step1: Go To File Menu
Step2: Click on Import Variables
Step3: File Selection of Executable File (<project_name>.elf)
.elf file will be there in Workspace_xxxx-><Project_NameFolder>->Debug Folder
Step4:Select The variables you want to view (Eg. counterVal,inputCaptureVal) and Press Import Button and Close
Step5:Varibles will be there in Display Variable Tab
Step6: Select the Variable -> Right Click and send to VarViewer1
Step7: Diaplay VarViewer1 as Bar Graph


Assignment 3 ADC
Theory:
Sucessive Approximation ADC
Total Conversion Time 
The elapsed time between the start of a conversion and the end of conversion is the sum of
the configured sampling time plus the successive approximation time depending on data
resolution:

For Calculations  Related to STM32F3 Refer Notes.docx
For Calculations  Related to STM32F4 Refer Pg 420 of MicrocontrollerReference Manual

Total Conversion Time = Sampling Time + 12 Cycles

where Sampling time can range between 3Cycles to 480Cycles

For Example : if Sampling Time =3 Cycles, ADC Freq is 1 Mhz

T conv = 3 + 12 =15 cycles * ADC Freq = 15 * 1 us = 15us

if Sampling Time =480 Cycles, ADC Freq is 2 Mhz

T conv = 480 + 12 =492 cycles * ADC Freq = 492 * 0.5 us = 246us

Calculation for Sampling Time
APB Clk= 16 MHz
ADC Prescalar = /8
ADC CLK = APB Clk/ Prescalar
ADC CLK = 16/8 =2Mhz
1MHz= 1Micro Second
2MHz= 0.5Micro Second

Default Cycles = 3Cycles
1Cycle = 0.5Micro Second
3Cycles = 1.5Micro Second 

480Cycles = 0.5 * 480 = 240 Micro Second
12 Cycles = 0.5 * 12  = 6 Micro Second

Tc = 480 + 12 =492 Cycles
Tt = 240 + 6  =246 micro second = 0.25 MS

Assuming 8Bit ADC
Max 255 Full Volt. 3.3v
mid 127 mid  Volt. 1.65v
Min 0   GND  Vold. 0.0V

Assuming 10Bit ADC
Max 1024 Full Volt. 3.3v
mid 512 mid  Volt. 1.65v
Min 0   GND  Vold. 0.0V

****************************************************************************************************************************************

Q9 Write a Program(ADC_SS_A9) to Learn ADC Single Shot Mode and 
Configure Peripherals ADC1 
MODE : IN0 (Connected to PA0 Switch)
PreScalar : PLCK2 / 8
Alignment : Right Align
Data Size/ Resolution : 8Bit
Continous Conversion : Disabled

Software Requirement: STM Studio

Action : Press the User Switch (PA0) to get Max Value of ADC in Single Shot 
and Display the same in STM STudio, also configure SWD Feature?

/* USER CODE BEGIN PV */
uint32_t adcval=0;

/* USER CODE BEGIN 2 */
HAL_ADC_Start(&hadc1);

  
/* USER CODE BEGIN WHILE */
while (1)
{
  adcval= HAL_ADC_GetValue(&hadc1);
}

******************************************************************************************************************************************
Q10 Write a Program(ADC_CC_A10) to Learn ADC Continous Conversion Mode and 
Configure Peripherals ADC1 
MODE : IN0 (Connected to PA0 Switch)
PreScalar : PLCK2 / 8
Alignment : Right Align
Data Size/ Resolution : 8Bit
Continous Conversion : Enabled
Rank->Sampling Time : 480 Cycles

Software Requirement: STM Studio

Action : Press the User Switch (PA0) to get Max Value of ADC in Continous Conversion Mode 
and Display the same in STM STudio, also configure SWD Feature?

/* USER CODE BEGIN 0 */
uint32_t adcval=0;

/* USER CODE BEGIN 2 */
HAL_ADC_Start(&hadc1);

  
/* USER CODE BEGIN WHILE */
while (1)
{
  adcval= HAL_ADC_GetValue(&hadc1);
}

***********************************************************************************************************************************
Assignment 4 RTC
*********************************************************************************************************************************************
Q11

 Write a Interrupt Driven Program(RTC_INT_A11) to Learn Real Time Clock and 
Configure Pins 
(LED)   PD12 to GPIO_Output // Alarm Indication LED
(LED)   PD13 to GPIO_Output // Second's LED
Configure NVIC
NVIC GUI --> RTC alarms A and B interrupt ENABLE

Configure Peripherals RTC 
Activate Clock Source : Check
Activate Calender : Check
Alarm A : Internal Alarm

Calender Time:-
Hours   : 23
Minute  : 59
Second  : 50

Calender Date:-
Weekday : Thursday
Month   : January
Date    : 28
Year    : 2021

Alarm A:
Time: 00:00:00
Alarm Date : 29


*****************************************************************************************************************************
Part 2
Alarm B:
Time: 00:00:10 
Alarm Date :29      Turn on  LED14 with Alarm B

/* USER CODE BEGIN WHILE */
  while (1)
  {
      HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13); // Just to show that something is running on the board
      HAL_Delay(500);
  }

/* USER CODE BEGIN 4 */
void HAL_RTC_AlarmAEventCallback(RTC_HandleTypeDef *hrtc)
{
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, SET);
}

/* Optional Part to Print Time Stamp on Button Press */
PreRequisite:
Set PA0 to EXTI0

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
      char showtime[50];
      RTC_DateTypeDef sdatestructureget;
      RTC_TimeTypeDef stimestructureget;

      memset(&sdatestructureget,0,sizeof(sdatestructureget));
      memset(&stimestructureget,0,sizeof(stimestructureget));
      /* Get the RTC current Time */
      HAL_RTC_GetTime(&hrtc, &stimestructureget, RTC_FORMAT_BIN);
      /* Get the RTC current Date */
      HAL_RTC_GetDate(&hrtc, &sdatestructureget, RTC_FORMAT_BIN);
      /* Display time Format : hh:mm:ss */
      sprintf((char*)showtime,"%02d:%02d:%02d  ",stimestructureget.Hours, stimestructureget.Minutes, stimestructureget.Seconds);
      printf("Current Time %s",showtime);
      printf("Current Time %d",(uint8_t*)showtime);
      memset(showtime,0,sizeof(showtime));
      sprintf((char*)showtime,"%02d-%2d-%2d\r\n",sdatestructureget.Month, sdatestructureget.Date, 2000 + sdatestructureget.Year);
      printf("Current Date %s",showtime);
      printf("Current Date %d",(uint8_t*)showtime);

}

*/********************************************************************************************************************************************************
Assignment 5 Internal WatchDog

*******************************************************************************************************************************************
Q12 

Write a Interrupt Driven Program(IWDG_A12) to Learn Internal WatchDog Timer and 
Configure Pins 
(LED)   PD12 to GPIO_Output // Counter LED                      //for STM32F3  PE8  Counter LED
(LED)   PD13 to GPIO_Output // Watchdog Refresh                 //for STM32F3  PE9  Watchdog Refresh LED
(LED)   PD14 to GPIO_Output // System Reset                     //for STM32F3  PE10 System ResetLED
(Switch)PA0  to GPIO_Input  // Watchdog Refresh Switch

Configure NVIC
NVIC GUI --> TIMER2 GLOBAL INTERRUPT Enable
50Period * x = 6000ms , x =120

Action: Observe the Counter Variable it will start from 0 to 59 [60 counts], 
60Count * 100 Period = 6000 ms and 500ms HAL Delay,
total 6500ms as the IWDG freq. for STM32F3 is set to 40Khz , 
Pre Scalar is 64, 40/64=0.625 Khz = 1.6 ms * 4095 = 6552 ms ~ 6.5Sec,
you will observe the watchdog resest the system if unattended 
(No HAL_IWDG_Refresh) for 6.5 sec

Configure Peripherals TIMER2 (TIM2)
Clock Source: Internal Clock
PreScalar : 16000
Conter Mode: UP
Counter Period: 100
Trigger Event Selection : Update Event 

Configure Peripherals IWDG
Activated: Check
IWDG Counter Prescalar : 64

/* USER CODE BEGIN PV */
uint32_t counter=0;

/* USER CODE BEGIN 2 */
  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_14,SET); // For Showing System Reset //for F3 Replace with PE10
  HAL_Delay(500);
  HAL_TIM_Base_Start_IT(&htim2);
  
  
/* USER CODE BEGIN WHILE */
  while (1)
  {
      if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0))
          {
              HAL_IWDG_Refresh(&hiwdg);
              HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13); //WatchDog Refresh LED //for F3 Replace with PE9
          }
 }

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{   // Just for Counting , to show something is running
    HAL_GPIO_WritePin(GPIOD,GPIO_PIN_14,RESET);//for F3 Replace with PE10 
    HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);//for F3 Replace with PE8
    counter++;
}

*****************************************************************************************************************************************
WATCHDOG :

Watch Dog Freq: 32Khz
Prescalar : 64
Effective Clock for WDG : 32Khz/ Prescalar = 32/64 =0.5 Khz = 2Ms * 4095 = 8190 ms ~ 8Sec

for STM32F3
Watch Dog Freq: 40Khz
Prescalar : 64          
Effective Clock for WDG : 40Khz/ Prescalar =40/64=0.625 Khz = 1.6 ms * 4095 = 6552 ms ~ 6.5Sec
If we do not refresh IWDG within 6.5 Sec then it will reset the system

*************************************************************************************************************************************
Assignment 6 UART & DMA
******************************************************************************************************************

Q13
 
 Write a Program(UART_Tx_A13) to Learn Internal UART Transmit Only and 

Configure Peripherals UART (UART4)- Async
Default Configration
8 Data Bit
No Parity
1 Stop Bit
115200 Baud Rate

Also configure SWD Feature?
   ____________________                       _____________________
  |     STM32F4 Disc   |                     |       PC/Laptop     |
  |      ______________|                     |                     | 
  |     | UART4        |     _________       |      Terminal       |
  |     |              |    |TTL->USB |      | TeraTerm/Minicom    |
  |     |       RX(PA1)|____|Tx       | USB  |     _____________   |
  |     |              |    |         |CABLE |    |Hello World  |  |
  |     |              |    |         |______|    |Hello World  |  |
  |     |              |    |         |      |    |Hello World  |  |
  |     |       TX(PA0)|____|Rx       |      |    |...          |  | 
  |     |___________VCC|____|3v/5v    |      |    |...          |  |
  |                 GND|____|_________|      |    |_____________|  |
  |                    |                     |                     |
  |                    |                     |                     |
  |                    |                     |                     |
  |____________________|                     |_____________________|
                     

/*****************Connection from STM32Board to USB to Serial FTDI Connector FT232R***************/
STM32F4  STM32F3            FT232R          
PA0         PC10    Tx----------Rx
PA1         PC11    Rx----------Tx
Gnd         GND     GND---------GND
Optional          5V/3V----------5V/3V Based on Jumper Setting

Part 1 Transmit Only

/* USER CODE BEGIN Includes */
#include "string.h"

/* USER CODE BEGIN 2 */
char tx[30]= "Hello World\r\n";
/* USER CODE END 2 */

/* USER CODE BEGIN WHILE */
while (1)
{
      HAL_UART_Transmit(&huart4, (uint8_t *)tx, strlen(tx), 10);
      HAL_Delay(500);
    /* USER CODE END WHILE */
}

PART 2 Transmit and Receive Both

HAL_UART_Receive(&huart4, (uint8_t *)tx,1, 10);
HAL_Delay(50);
HAL_UART_Transmit(&huart4, (uint8_t *)tx,1, 10);
bzero(tx,1);
************************************************************************************************************************
Q 14.

Write a Interrupt Driven Program(UART_Echo_A14) to Learn UART RX TX Functionality and 
Configure Pins 
(LED)   PD12 to GPIO_Output // Interrupt Confirmation LED

Configure NVIC
NVIC GUI --> UART4 GLOBAL INTERRUPT Enable

Configure Peripherals UART (UART4)
Default Configration
8 Data Bit
No Parity
1 Stop Bit
115200 Baud Rate

Also configure SWD Feature?

Interrupt
/* USER CODE BEGIN PV */
char rx;

/* USER CODE BEGIN WHILE */
  while (1)
  {
     HAL_UART_Receive_IT(&huart4, (uint8_t *)&rx, 1);
  }
  
/* USER CODE BEGIN 4 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
     HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
     rx=rx+1;
     HAL_UART_Transmit(&huart4, (uint8_t *)&rx, 1, 10);
}
**************************************************************************************************
Part 2 Assignment

Transmit Entire String when user press Enter Key

Example

Input : Hello <Enter Key >

Output : Hello 

Output should only be displayed when user press enter key after typing some text

Hits:
Use Array, Increment Index
For Enter Key Press Event compare buf with '\r'
*******************************************************************************************************************
Q15

Write a Direct Memory Access (DMA) Driven Program(UART_DMA_A15) to Learn UART Functionality via DMA and 
Configure Pins 
(LED)   PD12 to GPIO_Output // Interrupt Confirmation LED

Configure Peripherals UART (UART4)
Mode : Async
Default Configration :No Change Req. for below parameters
8 Data Bit
No Parity
1 Stop Bit
115200 Baud Rate

DMA Settings:
Press Add Button and Select- UART4_RX
Direction : Peripheral to Memory
DMA Request Setting:
Mode : Normal

Also configure SWD Feature?


/* USER CODE BEGIN PV */
uint8_t UART1_rxBuffer;

 /* USER CODE BEGIN 2 */
HAL_UART_Receive_DMA (&huart4, (uint8_t *)&UART1_rxBuffer, 1);
      
/* USER CODE BEGIN 4 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
     HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_8);
     HAL_UART_Transmit(&huart4,(uint8_t*) &UART1_rxBuffer, 1,10);
     HAL_UART_Receive_DMA (&huart4, (uint8_t *)&UART1_rxBuffer, 1);
}

*******************************************************************************************************************

Q.16

SPI

8 Bit Register
RW
7 6 5 4 3 2 1 0
1 0 0 0 0 0 0 0  Read (0x80) | CMD
0 0 0 0 0 0 0 0  Write(0x00) | CMD

for Stm32F3
//PV
uint8_t ReadFlag=0x80;
uint8_t MultiByte=0x40;
uint8_t Return[2];
uint16_t Rx_x,Rx_y,Rx_z;

//Who am I Checking
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
TxBuf[0]=0x0f|ReadFlag;//Read Address of Register
HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
HAL_SPI_Receive(&hspi1, Return, 1, 50);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High
//Configure Control Register 1 with Address 0x20
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
TxBuf[0]=0x20;//Address of Register
TxBuf[1]=0x3F;//Data for Register
HAL_SPI_Transmit(&hspi1, TxBuf, 2, 50);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High
//Configure Control Register 4 with Address 0x23
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
TxBuf[0]=0x23;//Address of Register
TxBuf[1]=0x10;//Data for Register
HAL_SPI_Transmit(&hspi1, TxBuf, 2, 50);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High

while(1)
{
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
    TxBuf[0]=0x28|ReadFlag|MultiByte;//Read Multi Byte Address of Register for X
    HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
    HAL_SPI_Receive(&hspi1, Return, 2, 50);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High
    
    Rx_x= (Return[1]<<8)|Return[0]
    
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
    TxBuf[0]=0x2A|ReadFlag|MultiByte;//Read Multi Byte Address of Register for Y
    HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
    HAL_SPI_Receive(&hspi1, Return, 2, 50);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High
    
    Rx_y= (Return[1]<<8)|Return[0]
    
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
    TxBuf[0]=0x2C|ReadFlag|MultiByte;//Read Multi Byte Address of Register for Z
    HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
    HAL_SPI_Receive(&hspi1, Return, 2, 50);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High
    
    Rx_z= (Return[1]<<8)|Return[0]
    
}
    

************************************************************************************************************************************************

for Stm32F4
0x20 Control Register4
0x37 Value to be set in Control Register (for enabling XYZ Axis, Setting Feqn. 12.5Hz)

Reading Control Resgister
Read   Ctrl_Reg
0x80 | 0x20

0x23 Control Register3
0xC8 Value to be set in Control Register3 (1: data ready signal connected to INT1, 1: interrupt signals active HIGH, 1: INT1/DRDY signal enabled)

0x80 | 0x29 Read X Axis Data

0x80 | 0x2B Read Y Axis Data

0x80 | 0x2D Read Z Axis Data

Make 3 Global variables and observe value in STM Studio
Rx_X
Rx_Y
Rx_Z

/* USER CODE BEGIN PV */
 uint8_t ReadFlag=0x80;
 uint8_t MultiByte=0x40;
 uint8_t Return[2];
 uint8_t TxBuf[2];
 uint16_t Rx_x,Rx_y,Rx_z;
/* USER CODE END PV */


/* USER CODE BEGIN 2 */
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET); //CS Pin Low
TxBuf[0]=0x20;	//Address for Register
TxBuf[1]=0x17;	//Data for Register
HAL_SPI_Transmit(&hspi1, TxBuf, 2, 50);
HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET); //CS Pin High
  /* USER CODE END 2 */

/* USER CODE BEGIN WHILE */
  while (1)
  {
	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
	      TxBuf[0]=0x28|ReadFlag;//Read Multi Byte Address of Register for X
	      HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
	      HAL_SPI_Receive(&hspi1, Return, 2, 50);
	      HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High

	      Rx_x= (Return[1]<<8)|Return[0];

	      HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
	      TxBuf[0]=0x2A|ReadFlag;//Read Multi Byte Address of Register for Y
	      HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
	      HAL_SPI_Receive(&hspi1, Return, 2, 50);
	      HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High

	      Rx_y= (Return[1]<<8)|Return[0];

	      HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
	      TxBuf[0]=0x2C|ReadFlag;//Read Multi Byte Address of Register for Z
	      HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
	      HAL_SPI_Receive(&hspi1, Return, 2, 50);
	      HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High

	      Rx_z= (Return[1]<<8)|Return[0];
  }
/* USER CODE END WHILE */

*************************************************************************************************************************************
Assignment I2C
How to handle I2C data buffer transmission/reception between two boards, 
in polling mode.

   _________________________                        _________________________
  |           ______________|                      |______________           |
  |          | I2C1         |                      |          I2C1|          |
  |          |              |                      |              |          |
  |          |      SCL(PB6)|______________________|(PB6)SCL      |          |
  |          |              |                      |              |          |
  |          |              |                      |              |          |
  |          |              |                      |              |          |
  |          |      SDA(PB9)|______________________|(PB9)SDA      |          |
  |          |              |                      |              |          |
  |          |______________|                      |______________|          |
  |      __                 |                      |      __                 |
  |     |__|                |                      |     |__|                |
  |     USER                |                      |     USER                |
  |                      GND|______________________|GND                      |
  |_STM32F4 ________________|                      |_________________STM32F4_|
************************************************************************************************************************************
Q17. 
Write a I2C Program to Communicate between Two STM32F4 Boards and Send LED_ON Info?
Configure Pins 
(LED)   PD12 to GPIO_Output 
(LED)   PD13 to GPIO_Output 
(LED)   PD14 to GPIO_Output 
(LED)   PD15 to GPIO_Output 
(Button)PA0  to GPIO_Input
SDA(PB9)
SCL(PB6)
Configure Peripherals I2C (I2C1)
Mode : I2C
Master Feature 
I2C Speed Mode : Fast Mode
I2C Clock : 400000 (400Khz)
FastMode DutyCycle : Tlow/Thigh =16/9
Slave Feature
Primary Address Length: 10bit
Primary Slave Address: 0x1D

/* USER CODE BEGIN PD */
#define MASTER_BOARD
#define I2C_ADDRESS        0x1D

/* USER CODE BEGIN PV */
 uint8_t ubKeyNumber = 0x0;
 uint8_t aTxBuffer[2];
 uint8_t aRxBuffer[2];
 
 /* USER CODE BEGIN PFP */
void LED_Display(uint8_t LedStatus);

  /* USER CODE BEGIN WHILE */
  #ifdef MASTER_BOARD
      while (1)
      {

          if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)
              {
                    HAL_Delay(50);//Debouncing Delay
                    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)
                        {
                            if (ubKeyNumber == 0x4)
                                  ubKeyNumber = 0x00;
                            else
                                {
                                    LED_Display(++ubKeyNumber);

                                    /* Set the data to be transmitted */
                                    aTxBuffer[0] = ubKeyNumber;
                                    aTxBuffer[1] = 0xAA;

                                    /*##-1- Start the transmission process #####################################*/
                                    /* While the I2C in reception process, user can transmit data through
                                    "aTxBuffer" buffer */
                                    /* Timeout is set to 10S */
                                    while(HAL_I2C_Master_Transmit(&hi2c1, (uint16_t)I2C_ADDRESS, (uint8_t*)aTxBuffer, 2,10000)!= HAL_OK)
                                        {
                                            /* Error_Handler() function is called when Timeout error occurs.
                                           When Acknowledge failure occurs (Slave don't acknowledge it's address)
                                           Master restarts communication */
                                            if (HAL_I2C_GetError(&hi2c1) != HAL_I2C_ERROR_AF)
                                                    Error_Handler();

                                        }
                                    HAL_Delay(100);//Delay just for better Tuning
                                }
                            }
                 }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
      }

  #else
      while(1)
      {

          /*##-2- Put I2C peripheral in reception process ############################*/
            /* Timeout is set to 10S  */
            if(HAL_I2C_Slave_Receive(&hi2c1, (uint8_t *)aRxBuffer, 2, 10000) == HAL_OK)
                LED_Display(aRxBuffer[0]);
            else
                Error_Handler();    /* Transfer error in reception process */



            //while (HAL_I2C_GetState(&hi2c1) != HAL_I2C_STATE_READY);
      }
  #endif /* MASTER_BOARD */
  /* USER CODE END 3 */

/* USER CODE BEGIN 4 */
/**
  * @brief  Turns ON/OFF the dedicated LED.
  * @param  LedStatus: LED number from 0 to 3
  * @retval None
  */
void LED_Display(uint8_t LedStatus)
{
  /* Turn OFF all LEDs */
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

  switch(LedStatus)
  {
    case (1):
      /* Turn ON LED1 */
        HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
      break;

    case (2):
      /* Turn ON LED2 */
        HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
      break;

    case (3):
      /* Turn ON LED3 */
        HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
      break;

    case (4):
      /* Turn ON LED4 */
        HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
      break;
    default:
      break;
  }
}
/* USER CODE END 4 */

/* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, SET);//Turn On Red LED on Slave Error

********************************************************************************************************************************
Q17 B

When acting as an I2C master in blocking mode, there are four API functions available for communicating with a slave device:

HAL_I2C_Master_Transmit()
HAL_I2C_Master_Receive()
HAL_I2C_Mem_Write()
HAL_I2C_Mem_Read()

SEND Data from Master to Slave
To send data to a slave device in blocking mode, either the HAL_I2C_Master_Transmit() function or 
the HAL_I2C_Mem_Write() function may be used. The two are interchangeable. 
The only difference is that a memory address on the slave is explicitly specified as an argument to HAL_I2C_Mem_Write(). 
The user should decide which is most appropriate for their application. 

RECEIVE Data from Slave to Master
To receive data from a slave device, either the HAL_I2C_Master_Receive() function or 
the HAL_I2C_Mem_Read() function may be used. 
However, these two functions are not interchangeable. 
While HAL_I2C_Master_Receive() simply reads data from the slave device, 
HAL_I2C_Mem_Read() first sends a memory address to the slave and then issues a repeated start condition 
followed by a read operation to get the data located at that memory address. 
The choice of which function to use depends on the I2C sequence expected by the slave device.
*******************************************************************************************************************
* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define adxl_address 0x53<<1

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/

uint8_t data_rec[6];
uint8_t chipid=0;
int16_t x,y,z;
float xg, yg, zg;

/* USER CODE BEGIN 0 */
void adxl_write (uint8_t reg, uint8_t value)
{
    uint8_t data[2];
    data[0] = reg;
    data[1] = value;
    HAL_I2C_Master_Transmit (&hi2c1, adxl_address, data, 2, 100);
}

void adxl_read_values (uint8_t reg)
{
    HAL_I2C_Mem_Read (&hi2c1, adxl_address, reg, 1, (uint8_t *)data_rec, 6, 100);
}

void adxl_read_address (uint8_t reg)
{
    HAL_I2C_Mem_Read (&hi2c1, adxl_address, reg, 1, &chipid, 1, 100);
}

void adxl_init (void)
{
    adxl_read_address (0x00); // read the DEVID

    adxl_write (0x31, 0x01);  // data_format range= +- 4g
    adxl_write (0x2d, 0x00);  // reset all bits
    adxl_write (0x2d, 0x08);  // power_cntl measure and wake up 8hz

}

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_I2C1_Init();

  /* USER CODE BEGIN 2 */

  adxl_init();  // initialize adxl

  /* USER CODE BEGIN WHILE */
  while (1)
  {
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */
        adxl_read_values (0x32);
      x = ((data_rec[1]<<8)|data_rec[0]);
      y = ((data_rec[3]<<8)|data_rec[2]);
      z = ((data_rec[5]<<8)|data_rec[4]);

      xg = x * .0078;
      yg = y * .0078;
      zg = z * .0078;
      
      
      
How to put a breakpoint at Interrupt:
Add this in the interrupt code and put a breakpoint on it
asm("nop");   
      
      
149,96,76


Template Node JSON Data

{
    "variablelist": [
        {
            "address": "0x20000070",
            "type": 1,
            "value": "{{payload}}"
        }
    ],
    "accesspoint" : 0
}

https://wiki.st.com/stm32mcu/wiki/STM32CubeMonitor:How_to_write_a_variable_from_flow


***************************************************************************************************************************

Q . 18

****write a program for ARMSTM32 to make use of onboard accelllerometer and implement a tilt sensiong function toggle rapidly the respective LED based on where tilt is happening(X and y axis).
     -in case the device is not having any tilt,make sure that all LED are glowing.
     -furthermore ,send the acceleromter data and LED state to UART(any)at 9600 baud rate.
  
  ******************************************************************************************************************************  
  
  
  *****
SPI -> full duplex master
uart4 -> Asynchronous
make pin PE-3 GPIO_OUTPUT
save with ctrl+s



*******************************************************************************************************************************
 
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include<string.h>
#include<stdio.h>
#include<stdlib.h>



/* USER CODE BEGIN PV */
uint8_t ReadFlag=0x80;
 //uint8_t MultiByte=0x40;
 uint8_t Return[2];
 uint8_t TxBuf[2];
 uint16_t Rx_x,Rx_y,Rx_z;
 char XAXIS[50];
 char YAXIS[50];
 char ZAXIS[50];
 char space[2]="\r\n";
 char l1[30]="Led 1 Is On	";
 char l2[30]="Led 2 Is On	";
  char l3[30]="Led 3 Is On	";
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_SPI1_Init(void);
static void MX_UART4_Init(void);
/* USER CODE BEGIN PFP */


/* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();
  MX_UART4_Init();
  /* USER CODE BEGIN 2 */
//configure control register 4 w//unit8_t Multibyte=0x40;ith address 0x23
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);	//CS Pin low
  TxBuf[0]=0x20;//Address of Register
  TxBuf[1]=0x37;//Data of Register
  HAL_SPI_Transmit(&hspi1, TxBuf, 2, 50);
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS PIN HIGH
  /* USER CODE END 2 */


/* USER CODE BEGIN WHILE */
  while (1)
  {
	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
	  TxBuf[0]=0x28|ReadFlag;//Read Multi Byte Address of Register for X
	  HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
	  HAL_SPI_Receive(&hspi1, Return, 2, 50);
	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High

	  Rx_x= (Return[1]<<8)|Return[0];

	  itoa(Rx_x,XAXIS,10);//HERE 10 MEANS DECIMAL

	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
	  TxBuf[0]=0x2A|ReadFlag;//Read Multi Byte Address of Register for Y
	  HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
	  HAL_SPI_Receive(&hspi1, Return, 2, 50);
	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High

	  Rx_y= (Return[1]<<8)|Return[0];

	  itoa(Rx_y,YAXIS,10);//HERE 10 MEANS DECIMAL

	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);//CS Pin Low
	  TxBuf[0]=0x2C|ReadFlag;//Read Multi Byte Address of Register for Z
	  HAL_SPI_Transmit(&hspi1, TxBuf, 1, 50);
	  HAL_SPI_Receive(&hspi1, Return, 2, 50);
	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);//CS Pin High

	  Rx_z= (Return[1]<<8)|Return[0];

	 itoa(Rx_z,ZAXIS,10);//HERE 10 MEANS DECIMAL
	 HAL_UART_Transmit(&huart4, (uint8_t*)ZAXIS,strlen(ZAXIS),10);
	 HAL_UART_Transmit(&huart4, (uint8_t*)space,strlen(space),10);
	 HAL_Delay(1000);

	 if(Rx_x<250)
	 	 {
		 	 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, 1);
		 	HAL_UART_Transmit(&huart4, (uint8_t*)l1,strlen(l1),10);
	 	 }

	 if(Rx_y<65600)
	 	 	 {
	 		 	 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, 1);
	 		 	HAL_UART_Transmit(&huart4, (uint8_t*)l2,strlen(l2),10);
	 	 	 }

	 if(Rx_z<16700)
	 	 	 {
	 		 	 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, 1);
	 		 	HAL_UART_Transmit(&huart4, (uint8_t*)l3,strlen(l3),10);
	 		 	HAL_UART_Transmit(&huart4, (uint8_t*)space,strlen(space),10);
	 	 	 }

	 else{
		 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15 , 0);
	 }




    /* USER CODE END WHILE */


******************************************************************************************************************************************************

Q . 19


***Implement External interrupt via innterupt button wherein, once user presses the button the UART(any)should print following to the terminal 
"welcome to UART Terminal.YOU are conncted at 11500@8N1"

once done above read serial data from user from serial terminal and implement thge following functionalitry based on received data 
(implement UART reception via interrupt )

REceived Output
	A LED 1 HIGH
	a LED 1 LOW
	B LED 2 HIGH
	b LED 2 LOW

************************************************************************************************************************************************

/* USER CODE BEGIN Includes */
#include "string.h"
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/
 UART_HandleTypeDef huart4;
 
 /* USER CODE BEGIN PV */
char tx[100] = " Welcome to UART Terminal. You are connected at 115200@8N1\r\n";
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_UART4_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

 /* Configure the system clock */
  SystemClock_Config();
  
   /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_UART4_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  HAL_UART_Transmit(&huart4, (uint8_t *)tx, strlen(tx), 10);
	 	  HAL_Delay(500);
    /* USER CODE END WHILE */

   /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

 /**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief UART4 Initialization Function
  * @param None
  * @retval None
  */
static void MX_UART4_Init(void)
{

  /* USER CODE BEGIN UART4_Init 0 */


	


******************************************************************************************************************************************************

Q20 .

Write a c program to perform the following 

a) Using timer input to capture to chech if button is pressed within 3 second. Set the user LEDs is in clockwise direction .
(Ex. SET PD12-> Delay(500 ms) -> SET PD13 -> Delay ...so on ) and 
if the button is pressed after 3 seconds and within 6 seconds set the LEDS in counter clockwise direction.

b) If the button is not pressed , RESET the board after 8 seconds .
(Using internal watchdog)

*********************************************************************************************************************

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

 /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

/* Configure the system clock */
  SystemClock_Config();

 /* Initialize all configured peripherals */
  MX_GPIO_Init();
  
   /* USER CODE BEGIN WHILE */
  while (1)
  {
	  if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)==1)
	  {
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, SET);
		  	  	  HAL_Delay(500);
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, SET);
		  	  	  HAL_Delay(500);
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, SET);
		  	  	  HAL_Delay(500);
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, SET);
		  	  	  HAL_Delay(500);
	  }
	  else
	  {
		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, RESET);

		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, RESET);

		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, RESET);

		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, RESET);

	  }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}


void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}







*******************************************************************************************************************************************************

***ON TERMINAL
sudo minicom -s
SERIAL PORT -> /dev/ttyUSB0
SAVE AS-> save as dfl
in cofiguration -> exit

**************************************************************************************************************************************************
 


or
sudo minicom -D /dev/ttyUSB0
