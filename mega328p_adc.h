/*
 * mega328p_adc.h
 *
 * Created: 28.11.2021 14:39:12
 *  Author: GokhanDokmetas
 */ 


#ifndef MEGA328P_ADC_H_
#define MEGA328P_ADC_H_
#include <stdint.h>


// ADMUX
typedef struct{
	uint8_t mux:4; // 0
	uint8_t rsvd:1; // 1
	uint8_t adlar:1; // 2
	uint8_t refs:2; // 3

}adc_admux_bits;

typedef union adcadmuxbits{
	adc_admux_bits bits;
	uint8_t all;
} adc_admux;

// ADCSRB

typedef struct{
	uint8_t adts:3; 
	uint8_t rsvd:3; 
	uint8_t acme:1; 
	uint8_t rsvd2:1; 

}adc_adcsrb_bits;

typedef union adcadcsrbbits{
	adc_adcsrb_bits bits;
	uint8_t all;
} adc_adcsrb;


// ADCSRA
typedef struct{
	uint8_t adps:3; 
	uint8_t adie:1; 
	uint8_t adif:1; 
	uint8_t adate:1; 
	uint8_t adsc:1;
	uint8_t aden:1;

}adc_adcsra_bits;

typedef union adcadcsrabits{
	adc_adcsra_bits bits;
	uint8_t all;
} adc_adcsra;

typedef struct{
	adc_admux* admux;
	adc_adcsrb* adcsrb;
	adc_adcsra* adcsra;
}adc_regs;

extern adc_regs adc;



#endif /* MEGA328P_ADC_H_ */