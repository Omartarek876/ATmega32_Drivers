/*
 * Adc.h
 *
 *  Created on: Sep 29, 2023
 *      Author: omar tarek
 */

#ifndef INC_ADC_H_
#define INC_ADC_H_

#include "StdTypes.h"

typedef enum
{
    ADC_CHANNEL_ADC0,
    ADC_CHANNEL_ADC1,
    ADC_CHANNEL_ADC2,
    ADC_CHANNEL_ADC3,
    ADC_CHANNEL_ADC4,
    ADC_CHANNEL_ADC5,
    ADC_CHANNEL_ADC6,
    ADC_CHANNEL_ADC7,
    ADC_CHANNEL_ADC0_ADC0_10X,
    ADC_CHANNEL_ADC1_ADC0_10X,
    ADC_CHANNEL_ADC0_ADC0_200X,
    ADC_CHANNEL_ADC1_ADC0_200X,
    ADC_CHANNEL_ADC2_ADC2_10X,
    ADC_CHANNEL_ADC3_ADC2_10X,
    ADC_CHANNEL_ADC2_ADC2_200X,
    ADC_CHANNEL_ADC3_ADC2_200X,
    ADC_CHANNEL_ADC0_ADC1_1X,
    ADC_CHANNEL_ADC1_ADC1_1X,
    ADC_CHANNEL_ADC2_ADC1_1X,
    ADC_CHANNEL_ADC3_ADC1_1X,
    ADC_CHANNEL_ADC4_ADC1_1X,
    ADC_CHANNEL_ADC5_ADC1_1X,
    ADC_CHANNEL_ADC6_ADC1_1X,
    ADC_CHANNEL_ADC7_ADC1_1X,
    ADC_CHANNEL_ADC0_ADC2_1X,
    ADC_CHANNEL_ADC1_ADC2_1X,
    ADC_CHANNEL_ADC2_ADC2_1X,
    ADC_CHANNEL_ADC3_ADC2_1X,
    ADC_CHANNEL_ADC4_ADC2_1X,
    ADC_CHANNEL_ADC5_ADC2_1X,
    ADC_CHANNEL_1_22_V,
    ADC_CHANNEL_GND
} Adc_ChannelType;

typedef enum 
{
    ADC_REF_AREF,
    ADC_REF_AVCC,
    ADC_REF_INTERNAL
} Adc_ReferenceType;

typedef enum
{
    ADC_AUTO_TRIGGER_OFF,
    ADC_AUTO_TRIGGER_FREE_RUNNING,
    ADC_AUTO_TRIGGER_ANAL_COMP,
    ADC_AUTO_TRIGGER_EXTI0,
    ADC_AUTO_TRIGGER_TIM0_COMP,
    ADC_AUTO_TRIGGER_TIM0_OVF,
    ADC_AUTO_TRIGGER_TIMB_COMP,
    ADC_AUTO_TRIGGER_TIM1_OVF,
    ADC_AUTO_TRIGGER_TIM1_CAP
} Adc_TriggerSourceType;

typedef enum
{
    ADC_PRESCALER_2,
    ADC_PRESCALER_4,
    ADC_PRESCALER_8,
    ADC_PRESCALER_16,
    ADC_PRESCALER_32,
    ADC_PRESCALER_64,
    ADC_PRESCALER_128
} Adc_PrescalerType;

typedef struct 
{
    Adc_ReferenceType reference;
    Adc_TriggerSourceType autoTrigger;
    Adc_PrescalerType prescaler;
} Adc_ConfigurationType;

extern Adc_ConfigurationType Adc_Configuration;

StdReturnType Adc_Init (Adc_ConfigurationType* config);
StdReturnType Adc_StartConversion (Adc_ChannelType channel);
u16 Adc_GetResult (void);
void Adc_EnableInterrupt(void);
void Adc_DisableInterrupt(void);
void Adc_SetCallback(void (*callbackPtr) (Adc_ChannelType channel, u16 result));

#endif /* INC_ADC_H_ */
