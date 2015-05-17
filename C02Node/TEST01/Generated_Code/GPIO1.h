/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : GPIO1.h
**     Project     : TEST01
**     Processor   : MKL15Z32VLK4
**     Component   : GPIO_LDD
**     Version     : Component 01.128, Driver 01.08, CPU db: 3.00.000
**     Compiler    : Keil ARM C/C++ Compiler
**     Date/Time   : 2015-04-16, 11:01, # CodeGen: 1
**     Abstract    :
**         The HAL GPIO component will provide a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL GPIO API will be simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : GPIO1
**          Port                                           : PTC
**          Port width                                     : 32 bits
**          Mask of allocated pins                         : 100BF
**          Interrupt service/event                        : Disabled
**          Bit fields                                     : 8
**            Bit field                                    : 
**              Field name                                 : AQ_CTR
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : ADC0_SE11/TSI0_CH15/PTC2/I2C1_SDA/TPM0_CH1
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : LAMP_CTR
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : ADC0_SE14/TSI0_CH13/PTC0/EXTRG_IN/CMP0_OUT
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : PM25_CTR
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : SDIO
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTC3/LLWU_P7/UART1_RX/TPM0_CH2/CLKOUTa
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : SCLK
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/TPM0_CH3
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : CSB
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/CMP0_OUT
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : CLK
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTC16
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : DAT
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : CMP0_IN1/PTC7/SPI0_MISO/SPI0_MOSI
**                  Pin signal                             : 
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**          Initialization                                 : 
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnPortEvent                                : Disabled
**     Contents    :
**         Init                    - LDD_TDeviceData* GPIO1_Init(LDD_TUserData *UserDataPtr);
**         SetFieldValue           - void GPIO1_SetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField...
**         GetFieldValue           - GPIO1_TFieldValue GPIO1_GetFieldValue(LDD_TDeviceData *DeviceDataPtr,...
**         ClearFieldBits          - void GPIO1_ClearFieldBits(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField...
**         SetFieldBits            - void GPIO1_SetFieldBits(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField...
**         ToggleFieldBits         - void GPIO1_ToggleFieldBits(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField...
**         SetFieldInputDirection  - void GPIO1_SetFieldInputDirection(LDD_TDeviceData *DeviceDataPtr,...
**         SetFieldOutputDirection - void GPIO1_SetFieldOutputDirection(LDD_TDeviceData *DeviceDataPtr,...
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file GPIO1.h
** @version 01.08
** @brief
**         The HAL GPIO component will provide a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL GPIO API will be simpler and more
**         portable to various microprocessors.
*/         
/*!
**  @addtogroup GPIO1_module GPIO1 module documentation
**  @{
*/         

#ifndef __GPIO1_H
#define __GPIO1_H

/* MODULE GPIO1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "IO_Map.h"
#include "GPIO_PDD.h"
#include "PORT_PDD.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 


/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define GPIO1_PRPH_BASE_ADDRESS  0x400FF080U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define GPIO1_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_GPIO1_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define GPIO1_Init_METHOD_ENABLED      /*!< Init method of the component GPIO1 is enabled (generated) */
#define GPIO1_SetFieldValue_METHOD_ENABLED /*!< SetFieldValue method of the component GPIO1 is enabled (generated) */
#define GPIO1_GetFieldValue_METHOD_ENABLED /*!< GetFieldValue method of the component GPIO1 is enabled (generated) */
#define GPIO1_ClearFieldBits_METHOD_ENABLED /*!< ClearFieldBits method of the component GPIO1 is enabled (generated) */
#define GPIO1_SetFieldBits_METHOD_ENABLED /*!< SetFieldBits method of the component GPIO1 is enabled (generated) */
#define GPIO1_ToggleFieldBits_METHOD_ENABLED /*!< ToggleFieldBits method of the component GPIO1 is enabled (generated) */
#define GPIO1_SetFieldInputDirection_METHOD_ENABLED /*!< SetFieldInputDirection method of the component GPIO1 is enabled (generated) */
#define GPIO1_SetFieldOutputDirection_METHOD_ENABLED /*!< SetFieldOutputDirection method of the component GPIO1 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */

/* Definition of bit field constants */
#define LAMP_CTR ((LDD_GPIO_TBitField)0)
#define PM25_CTR ((LDD_GPIO_TBitField)1)
#define AQ_CTR ((LDD_GPIO_TBitField)2)

#define SDIO ((LDD_GPIO_TBitField)3)
#define SCLK ((LDD_GPIO_TBitField)4)
#define CSB ((LDD_GPIO_TBitField)5)
#define CLK ((LDD_GPIO_TBitField)6)
#define DAT ((LDD_GPIO_TBitField)7)

/* Definition of implementation constants */
#define GPIO1_ALLOCATED_PINS_MASK 0x000100BFU /*!< Mask of all allocated pins from the port */
#define GPIO1_MODULE_BASE_ADDRESS FPTC_BASE_PTR /*!< Name of macro used as the base address */
#define GPIO1_PORTCONTROL_BASE_ADDRESS PORTC_BASE_PTR /*!< Name of macro used as the base address */
#define GPIO1_AVAILABLE_EVENTS_MASK 0x00U /*!< Mask of all available events */
#define GPIO1_FIELD_0_PIN_0 LDD_GPIO_PIN_0 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_0 LDD_GPIO_PIN_1 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_2_PIN_0 LDD_GPIO_PIN_2 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_3_PIN_0 LDD_GPIO_PIN_3 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_4_PIN_0 LDD_GPIO_PIN_4 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_5_PIN_0 LDD_GPIO_PIN_5 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_6_PIN_0 LDD_GPIO_PIN_16 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_7_PIN_0 LDD_GPIO_PIN_7 /*!< Constant for the pin in the field used in the method ConnectPin */

#define GPIO1_LAMP_CTR_START_BIT 0u    /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_LAMP_CTR_MASK 0x01u      /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_PM25_CTR_START_BIT 1u    /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_PM25_CTR_MASK 0x02u      /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_AQ_CTR_START_BIT 2u      /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_AQ_CTR_MASK 0x04u        /*!< Mask of the bits allocated by the bit field (within the port) */

#define GPIO1_SDIO_START_BIT 3u        /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_SDIO_MASK 0x08u          /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_SCLK_START_BIT 4u        /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_SCLK_MASK 0x10u          /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_CSB_START_BIT 5u         /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_CSB_MASK 0x20u           /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_CLK_START_BIT 16u        /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_CLK_MASK 0x00010000u     /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_DAT_START_BIT 7u         /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_DAT_MASK 0x80u           /*!< Mask of the bits allocated by the bit field (within the port) */
/* Representation of unaligned data value of the port.
   Unsigned integer of proper width depending on the size of the GPIO port allocated.
   Typically the value of n-th bit represents the data for the n-th pin within the port.
   Such value is not abstracted from the physical position of the bits within the port. */
typedef uint32_t GPIO1_TPortValue;

/* Representation of right-aligned data value of the bit field.
   Typically the value of n-th bit represents the data of the n-th bit within the bit field (not within the port).
   There are used only so many lowest bits, as it is denoted by the width of the bit field.
   Such value is abstracted from the physical position of the bit field pins within the port.
   Equals to the type <compId>_TPortValue. */
typedef GPIO1_TPortValue GPIO1_TFieldValue;



/*
** ===================================================================
**     Method      :  GPIO1_Init (component GPIO_LDD)
*/
/*!
**     @brief
**         This method initializes the associated peripheral(s) and the
**         component internal variables. The method is called
**         automatically as a part of the application initialization
**         code.
**     @param
**         UserDataPtr     - Pointer to the RTOS device
**                           structure. This pointer will be passed to
**                           all events as parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* GPIO1_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  GPIO1_SetFieldValue (component GPIO_LDD)
*/
/*!
**     @brief
**         This method sets the output data value of the specified bit
**         field.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to write. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
**     @param
**         Value           - Aligned data value to writting to the
**                           specified bit field. The bit 0 corresponds
**                           with the pin which has index 0 within the
**                           given bit field, the bit 1 corresponds with
**                           the pin which has index 1 within the given
**                           bit field, etc.
*/
/* ===================================================================*/
void GPIO1_SetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO1_TFieldValue Value);

/*
** ===================================================================
**     Method      :  GPIO1_GetFieldValue (component GPIO_LDD)
*/
/*!
**     @brief
**         This method returns the current input data of the specified
**         field.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to reading. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
**     @return
**                         - Aligned current port input value masked for
**                           allocated pins of the field. The bit 0
**                           corresponds with the pin which has index 0
**                           within the given bit field, the bit 1
**                           corresponds with the pin which has index 1
**                           within the given bit field, etc.
*/
/* ===================================================================*/
GPIO1_TFieldValue GPIO1_GetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field);

/*
** ===================================================================
**     Method      :  GPIO1_ClearFieldBits (component GPIO_LDD)
*/
/*!
**     @brief
**         This method drives the specified bits of the specified bit
**         field to the inactive level.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to write. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
**     @param
**         Mask            - Aligned mask of bits to setting the
**                           inactive level. Each field pin has
**                           corresponding bit in the mask. Bit value 0
**                           means not selected bit, bit value 1 means
**                           selected bit. The bit 0 corresponds with
**                           the pin which has index 0 within the given
**                           bit field, the bit 1 corresponds with the
**                           pin which has index 1 within the given bit
**                           field, etc.
*/
/* ===================================================================*/
void GPIO1_ClearFieldBits(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO1_TFieldValue Mask);

/*
** ===================================================================
**     Method      :  GPIO1_SetFieldBits (component GPIO_LDD)
*/
/*!
**     @brief
**         This method drives the specified bits of the specified bit
**         field to the active level.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to write. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
**     @param
**         Mask            - Aligned mask of bits to setting the
**                           active level. Each field pin has
**                           corresponding bit in the mask. Bit value 0
**                           means not selected bit, bit value 1 means
**                           selected bit. The bit 0 corresponds with
**                           the pin which has index 0 within the given
**                           bit field, the bit 1 corresponds with the
**                           pin which has index 1 within the given bit
**                           field, etc.
*/
/* ===================================================================*/
void GPIO1_SetFieldBits(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO1_TFieldValue Mask);

/*
** ===================================================================
**     Method      :  GPIO1_ToggleFieldBits (component GPIO_LDD)
*/
/*!
**     @brief
**         This method inverts the specified bits of the specified bit
**         field to other level.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to write. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
**     @param
**         Mask            - Aligned mask of bits to inverting the
**                           current level. Each field pin has
**                           corresponding bit in the mask. Bit value 0
**                           means not selected bit, bit value 1 means
**                           selected bit. The bit 0 corresponds with
**                           the pin which has index 0 within the given
**                           bit field, the bit 1 corresponds with the
**                           pin which has index 1 within the given bit
**                           field, etc.
*/
/* ===================================================================*/
void GPIO1_ToggleFieldBits(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO1_TFieldValue Mask);

/*
** ===================================================================
**     Method      :  GPIO1_SetFieldInputDirection (component GPIO_LDD)
*/
/*!
**     @brief
**         This method sets all pins of the field to the input
**         direction.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to write. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
*/
/* ===================================================================*/
void GPIO1_SetFieldInputDirection(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field);

/*
** ===================================================================
**     Method      :  GPIO1_SetFieldOutputDirection (component GPIO_LDD)
*/
/*!
**     @brief
**         This method sets all pins of the field to the output
**         direction.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to set to the output
**                           direction. Bit fields are defined during
**                           design time and for each bit field there is
**                           a generated constant.
**     @param
**         Value           - Aligned data value to appear on the
**                           bit field pins after they have been
**                           switched to the output direction.
*/
/* ===================================================================*/
void GPIO1_SetFieldOutputDirection(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO1_TFieldValue Value);

/* END GPIO1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __GPIO1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
