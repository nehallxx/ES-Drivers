/*
 * LED_prog.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Dell
 */
#include <util/delay.h>
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_DRIVER_V1/DIO_INT.h"
#include "LCD_INT.h"
#include<math.h>
void LCD_voidSendData(u8 Copy_u8Data)
{
  DIO_voidSetPinValue( LCD_RS_PORT,LCD_RS_PIN ,HIGH);
  DIO_voidSetPinValue( LCD_RW_PORT,LCD_RW_PIN ,LOW);
  for(u8 i=0;i<8;i++)
  {
	  DIO_voidSetPinValue(LCD_DATA_PORT,i,GET_BIT(Copy_u8Data,i));
  }
  DIO_voidSetPinValue(LCD_EN_PORT,LCD_EN_PIN,HIGH);
	 _delay_ms(2);
	 DIO_voidSetPinValue(LCD_EN_PORT,LCD_EN_PIN,LOW);
}

void LCD_voidSendCommand(u8 Copy_u8Data){
	DIO_voidSetPinValue(LCD_RS_PORT,LCD_RS_PIN,LOW);
	DIO_voidSetPinValue(LCD_RW_PORT,LCD_RW_PIN,LOW);
	for(u8 i=0;i<8;i++){
		DIO_voidSetPinValue(LCD_DATA_PORT,i,GET_BIT(Copy_u8Data,i));
	}
	DIO_voidSetPinValue(LCD_EN_PORT,LCD_EN_PIN,HIGH);
	_delay_ms(2);
	DIO_voidSetPinValue(LCD_EN_PORT,LCD_EN_PIN,LOW);

}
void LCD_voidInit(void){
	for(u8 i=0;i<8;i++){
		DIO_voidSetPinDirection(LCD_DATA_PORT,i,OUTPUT);

	}
	DIO_voidSetPinDirection(LCD_RS_PORT,LCD_RS_PIN,OUTPUT);
	DIO_voidSetPinDirection(LCD_RW_PORT,LCD_RW_PIN,OUTPUT);
	DIO_voidSetPinDirection(LCD_EN_PORT,LCD_EN_PIN,OUTPUT);
	_delay_ms(40);
	LCD_voidSendCommand(0b00111000);
	LCD_voidSendCommand(0b00001100);
	LCD_voidSendCommand(0b00000001);

}
void LCD_voidClearDisplay(void){
	LCD_voidSendCommand(0b00000001);
}
void LCD_GoToXY(u8 Copy_u8X,u8 Copy_u8Y){
	u8 Local_u8Address=0;
	if(Copy_u8X==0){
		Local_u8Address=Copy_u8X;
	}
	else{
		Local_u8Address=Copy_u8X+0x40;
	}
	SET_BIT(Local_u8Address,7);
	LCD_voidSendCommand(Local_u8Address);
}


