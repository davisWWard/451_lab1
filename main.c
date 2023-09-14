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
	
	int i = 0;
	
	while (1)
	{
		if (i == 1000000)
		{
			GPIOA->BSRR |= GPIO_BSRR_BR5;
		}
		if (i == 2000000)
		{
			GPIOA->BSRR |= GPIO_BSRR_BS5;
			i = 0;
		}
		i++;
	}
}
