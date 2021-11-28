/*
 * mega328p_adc.c
 *
 * Created: 28.11.2021 14:39:32
 *  Author: GokhanDokmetas
 */ 
#include "mega328p_adc.h"
adc_regs adc = {(adc_admux*)0x7C, (adc_adcsrb*)0x7B, (adc_adcsra*)0x7A};