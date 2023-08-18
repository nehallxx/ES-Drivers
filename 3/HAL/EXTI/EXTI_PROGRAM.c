#include <avr/io.h>
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "EXTI_INT.h"
void (*Global_pvINT0NotificationFunction)(void)=NULL_ptr;
void (*Global_pvINT1NotificationFunction)(void)=NULL_ptr;
void EXTI_voidInit(void){
	//set interrupt 0->any logical change
	SET_BIT(MCUCR,0);
	CLR_BIT(MCUCR,1);
	//Enable INT0
	SET_BIT(GICR,6);
	//set interrupt 1->any logical change
	SET_BIT(MCUCR,2);
	CLR_BIT(MCUCR,3);
	//Enable INT1
	SET_BIT(GICR,7);
}
EXTI_voidINT0SetCallBack(void (*NotificationFuncion)(void)){
	Global_pvINT0NotificationFunction=NotificationFuncion;

}
EXTI_voidINT1SetCallBack(void (*NotificationFuncion)(void)){
	Global_pvINT1NotificationFunction=NotificationFuncion;

}
void __vector_1 (void) __attribute__((signal)); //for int0 isr
void __vector_1 (void){
	if(Global_pvINT0NotificationFunction != NULL_ptr)
	   Global_pvINT0NotificationFunction();
}
void __vector_2 (void) __attribute__((signal)); //for int1 isr
void __vector_2 (void){
	if(Global_pvINT1NotificationFunction!=NULL_ptr)
	   Global_pvINT1NotificationFunction();

}
