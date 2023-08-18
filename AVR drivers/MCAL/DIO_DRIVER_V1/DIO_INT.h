#ifndef MCAL_DIO_DRIVER_V1_DIO_INT_H_
#define MCAL_DIO_DRIVER_V1_DIO_INT_H_

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

#define OUTPUT 1
#define INPUT 0

#define HIGH 1
#define LOW 0

void DIO_voidSetPinDirection(u8 Copy_u8PortName, u8 Copy_u8PinNumber,u8 Copy_PinState);
void DIO_voidSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber,u8 Copy_PinValue);
u8 DIO_u8GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber);
void DIO_voidSetSpecificPortDirection(u8 Copy_u8PortName,u8 Copy_PortValue);
void DIO_voidSetSpecificPortValue(u8 Copy_u8PortName,u8 Copy_PortValue);


#endif /* MCAL_DIO_DRIVER_V1_DIO_INT_H_ */
