#ifndef USART_H
#define USART_H


void init_USART1();
void USART_puts(USART_TypeDef* USARTx,__IO char *s);
char* conv_f2c(float f);
#endif