/*********************************************************************************************
*
*											Davis Ward 200426114
*											ENEL 451 - Lab 1
*
*********************************************************************************************/

#include <stm32f10x.h>

int main()
{
	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;		// Enable GPIOA clock
	
	GPIOA->CRL |= GPIO_CRL_MODE5;	// config port A5 to output
	GPIOA->CRL &= ~GPIO_CRL_CNF5;	// config port A5 to GPIO
	
	GPIOA->ODR |= GPIO_ODR_ODR5;
	
	while (1)
	{
		
	}
}
