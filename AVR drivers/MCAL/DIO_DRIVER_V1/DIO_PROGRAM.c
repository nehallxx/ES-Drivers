#include <avr/io.h>
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "DIO_INT.h"

void DIO_voidSetPinDirection (u8 Copy_u8PortName,u8 Copy_u8PinNUmber, u8 Copy_PinState)
{
	switch(Copy_u8PortName)
	{
	case DIO_PORTA:
		switch(Copy_PinState)
		{
		case OUTPUT:
			SET_BIT(DDRA,Copy_u8PinNUmber);
		break;
		case INPUT:
			CLR_BIT(DDRA,Copy_u8PinNUmber);
		break;
		}
	break;
	case DIO_PORTB:
		switch(Copy_PinState)
		{
		case OUTPUT:
			SET_BIT(DDRB,Copy_u8PinNUmber);
		break;
		case INPUT:
			CLR_BIT(DDRB,Copy_u8PinNUmber);
		break;
		}
	break;
	case DIO_PORTC:
		switch(Copy_PinState)
		{
		case OUTPUT:
			SET_BIT(DDRC,Copy_u8PinNUmber);
		break;
		case INPUT:
			CLR_BIT(DDRC,Copy_u8PinNUmber);
		break;
		}
	break;
	case DIO_PORTD:
		switch(Copy_PinState)
		{
		case OUTPUT:
			SET_BIT(DDRD,Copy_u8PinNUmber);
		break;
		case INPUT:
			CLR_BIT(DDRD,Copy_u8PinNUmber);
		break;
		}
	break;
	}
}

void DIO_voidSetPinValue (u8 Copy_u8PortName,u8 Copy_u8PinNUmber, u8 Copy_Pinvalue)
	{
		switch(Copy_u8PortName)
			{
			case DIO_PORTA:
				switch(Copy_Pinvalue)
				{
				case HIGH:
					SET_BIT(PORTA,Copy_u8PinNUmber);
				break;
				case LOW:
					CLR_BIT(PORTA,Copy_u8PinNUmber);
				break;
				}
			break;
			case DIO_PORTB:
				switch(Copy_Pinvalue)
				{
				case HIGH:
					SET_BIT(PORTB,Copy_u8PinNUmber);
				break;
				case LOW:
					CLR_BIT(PORTB,Copy_u8PinNUmber);
				break;
				}
			break;
			case DIO_PORTC:
				switch(Copy_Pinvalue)
				{
				case HIGH:
					SET_BIT(PORTC,Copy_u8PinNUmber);
				break;
				case LOW:
					CLR_BIT(PORTC,Copy_u8PinNUmber);
				break;
				}
			break;
			case DIO_PORTD:
				switch(Copy_Pinvalue)
				{
				case HIGH:
					SET_BIT(PORTD,Copy_u8PinNUmber);
				break;
				case LOW:
					CLR_BIT(PORTD,Copy_u8PinNUmber);
				break;
				}
			break;
			}
}



u8 DIO_u8GetPinValue (u8 Copy_u8PortName,u8 Copy_u8PinNUmber)
{
	u8 Local_u8PinValue;

	switch(Copy_u8PortName)
	{
	case DIO_PORTA:
		Local_u8PinValue=GET_BIT(PINA,Copy_u8PinNUmber);
	break;
	case DIO_PORTB:
		Local_u8PinValue=GET_BIT(PINB,Copy_u8PinNUmber);
	break;
	case DIO_PORTC:
		Local_u8PinValue=GET_BIT(PINC,Copy_u8PinNUmber);
	break;
	case DIO_PORTD:
		Local_u8PinValue=GET_BIT(PIND,Copy_u8PinNUmber);
	break;
	}
	return Local_u8PinValue;
}

void DIO_voidSetSpecificPortDirection(u8 Copy_u8PortName,u8 Copy_PortValue){
	switch(Copy_u8PortName){
	case DIO_PORTA:
		DDRA=Copy_PortValue;
		break;
	case DIO_PORTB:
		DDRB=Copy_PortValue;
		break;
	case DIO_PORTC:
		DDRC=Copy_PortValue;
		break;
	case DIO_PORTD:
		DDRD=Copy_PortValue;
		break;
	}
}

void DIO_voidSetSpecificPortValue(u8 Copy_u8PortName,u8 Copy_PortState)
{
	switch(Copy_u8PortName)
		{
		case DIO_PORTA:
			PORTA = Copy_PortState;
			break;
		case DIO_PORTB:
			PORTB = Copy_PortState;
			break;
		case DIO_PORTC:
			PORTC = Copy_PortState;
			break;
		case DIO_PORTD:
			PORTD = Copy_PortState;
			break;
		}
}

