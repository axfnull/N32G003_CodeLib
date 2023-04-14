1������˵��

    �ò�����ʾ�����ʹ��UART�ദ����ģʽ��UARTy��UARTz������UART1��UART2��
    ���ȣ��ֱ�����UARTy��UARTz�ĵ�ַΪ0x1��0x2��UARTy������UARTz�����ַ�0x33��UARTz�յ�0x33���㷭תLED1��LED2��LED3�����š�
    һ��KEY1_INT_EXTI_LINE�߼�⵽�����أ������EXTI�жϣ���EXTI4_17_IRQHandler�жϴ�������(the ControlFlag = 0)��UARTz���뾲Ĭģʽ���ھ�Ĭģʽ�У�LED����ֹͣ��ת��ֱ��KEY1_INT_EXTI_LINE�߼�⵽������(the ControlFlag = 1)����EXTI4_17_IRQHandler�жϴ������У�UARTy���͵�ַ0x102����UARTz��LED��������������ת��


2��ʹ�û���

    �������������KEIL MDK-ARM Professional Version 5.34

    Ӳ����������Сϵͳ��N32G003F5S7-STB_V1.0


3��ʹ��˵��
	
    ϵͳʱ���������£�
    - ϵͳʱ�� = 48MHz
    
    UARTy�������£�
    - ������ = 115200 baud
    - �ֳ� = 9����λ
    - 1ֹͣλ
    - У����ƽ���
    - �������ͷ�����ʹ��  
    
    
    UART�����������£�    
    - UART1_Tx.PA14     <------->   UART2_Rx.PA1
    - UART1_Rx.PA12     <------->   UART2_Tx.PA2    
    
    KEY1_INT_EXTI_LINE.PA11    <------->   KEY1
    
    LED1    <------->   PA6
    LED2    <------->   PA7
    LED3    <------->   PA10

    
    ���Բ���������
    - Demo��KEIL�����±����������MCU
    - ��λ���У��۲�LED1~3�Ƿ�����˸״̬
    - ������KEY���۲�LED1~3�Ƿ�ֹͣ��˸
    - �ٴΰ�����KEY���۲�LED1~3�Ƿ�ָ���˸


4��ע������


1. Function description

    This test example demonstrates how to use the UART multiprocessor mode. UARTy and UARTz can be UART1 and UART2.
    First, set the addresses of UARTy and UARTz to 0x1 and 0x2 respectively. UARTy continuously sends the character 0x33 to UARTz. UARTz receives 0x33 and flips the pins of LED1, LED2, and LED3.
    Once the KEY1_INT_EXTI_LINE line detects the rising edge, the EXTI0 interrupt is generated. In the EXTI0_IRQHandler interrupt processing function (the ControlFlag = 0), the UARTz enters the silent mode. In the silent mode, the LED pin stops toggling until the KEY1_INT_EXTI_LINE line detects the rising edge ( the ControlFlag = 1). In the EXTI0_IRQHandler interrupt processing function, UARTy sends address 0x102 to wake up UARTz. The LED pin restarts toggling.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.34

    Hardware environment: minimum system board N32G003F5S7-STB_V1.0


3. Instructions for use

    The system clock configuration is as follows:
    -System clock = 48MHz
    
    The UARTy configuration is as follows:
    -Baud rate = 115200 baud
    -Word length = 9 data bits
    -1 stop bit
    -Verification control disabled
    -Receiver and transmitter enable
    
    
    The UART pin connections are as follows:
    - UART1_Tx.PA14    <------->    UART2_Rx.PA1
    - UART1_Rx.PA12   <------->   UART2_Tx.PA2
    
    KEY1_INT_EXTI_LINE.PA11    <------->   KEY1
    
    LED1    <------->   PA6
    LED2    <------->   PA7
    LED3    <------->   PA10

    
    Test steps and phenomena:
    -After the Demo is compiled in the KEIL environment, download it to the MCU
    -Reset operation, observe whether LED1~3 are blinking
    -Press the KEY button and observe if LED1~3 stop flashing
    -Press the KEY button again and observe whether LED1~3 resume flashing


4. Matters needing attention