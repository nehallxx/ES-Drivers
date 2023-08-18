/*
 * LED_INT.h
 *
 *  Created on: Aug 13, 2023
 *      Author: Dell
 */
#ifndef LCD_INT_H
#define LCD_INT_H

#define LCD_RS_PORT DIO_PORTB
#define LCD_RS_PIN DIO_PIN0

#define LCD_RW_PORT DIO_PORTB
#define LCD_RW_PIN DIO_PIN1

#define LCD_EN_PORT DIO_PORTB
#define LCD_EN_PIN DIO_PIN2
#define LCD_DATA_PORT DIO_PORTA

void LCD_voidSendData(u8 Copy_u8Data);
void LCD_voidSendCommand(u8 Copy_u8DCommand);
void LCD_voidInit(void);
void LCD_voidClearDisplay(void);
void LCD_GoToXY(u8 Copy_u8X,u8 Copy_u8Y);




#endif

