/*
 * KPD_INT.h
 *
 *  Created on: Aug 16, 2023
 *      Author: Dell
 */

#ifndef HAL_KPD_KPD_INT_H_
#define HAL_KPD_KPD_INT_H_

#define KPD_COL_PORT DIO_PORTA
#define KPD_COL0_PIN DIO_PIN0
#define KPD_COL1_PIN DIO_PIN1
#define KPD_COL2_PIN DIO_PIN2

#define KPD_ROW_PORT DIO_PORTA
#define KPD_ROW0_PIN DIO_PIN4
#define KPD_ROW1_PIN DIO_PIN5
#define KPD_ROW2_PIN DIO_PIN6
#define KPD_ROW3_PIN DIO_PIN7

void KPD_voidInit(void);
u8 KPD_u8GetPressedKey(void);

#endif /* HAL_KPD_KPD_INT_H_ */
