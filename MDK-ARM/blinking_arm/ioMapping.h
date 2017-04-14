// Criar arquivo ioMapping.h com os pinos e registradores que serão usados
//Pinos



#define BLINKING_LED                ((uint16_t)0x2000)  /* Pin 13 selected   */
#define PERIPHERAL_BASE				((uint32_t)0x40000000) 
#define APB2PERIPHERAL_BASE			((PERIPHERAL_BASE + 0x10000))
#define GPIOC_BASE					((APB2PERIPHERAL_BASE + 0x10000))
#define GPIOC 						((GPIO *) GPIOC_BASE)

typedef struct
{
  __IO uint32_t CRL;
  __IO uint32_t CRH;
  __IO uint32_t IDR;
  __IO uint32_t ODR;
  __IO uint32_t BSRR;
  __IO uint32_t BRR;
  __IO uint32_t LCKR;
} GPIO;
//Registradores



