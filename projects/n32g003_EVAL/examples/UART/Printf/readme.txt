1������˵��

    �ò�����ʾ��UARTx��PC��ͨ����ѯ����ʶʵ�ֵĻ���ͨ�š�
    �ض���printf������UARTx����ʹ��printf���������Ϣ����λ����
    UARTx������UART1��UART2��


2��ʹ�û���

    �������������KEIL MDK-ARM Professional Version 5.34

    Ӳ����������Сϵͳ��N32G003F5S7-STB_V1.0


3��ʹ��˵��
	
    ϵͳʱ���������£�
    - ϵͳʱ�� = 48MHz
    
    USART�������£�
    - ������ = 115200 baud
    - �ֳ� = 8����λ
    - 1ֹͣλ
    - У����ƽ���
    - �������ͷ�����ʹ��
    
    UART�����������£�
    - UART1_Tx.PA14
    ��
    - UART2_Tx.PA2
    
    ���Բ���������
    - Demo��KEIL�����±����������MCU
    - ��λ���У��鿴���ڴ�ӡ��Ϣ


4��ע������



1. Function description

    The test example demonstrates the basic communication between UARTx and PC through the query detection identifier.
    Redirect the printf function to UARTx and use the printf function to output the message to the top machine.
    UARTx can be UART1 or UART2.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.34

    Hardware environment: minimum system board N32G003F5S7-STB_V1.0


3. Instructions for use

    The system clock configuration is as follows:
    -System clock = 48MHz
    
    The USART configuration is as follows:
    -Baud rate = 115200 baud
    -Word length = 8 data bits
    -1 stop bit
    -Verification control disabled
    -Receiver and transmitter enable
    
    The UART pin connections are as follows:
    - UART1_Tx.PA14
    or
    - UART2_Tx.PA2

    
    Test steps and phenomena:
    - Demo is compiled in KEIL environment and downloaded to MCU
    - Reset and run. Check the serial port information


4. Matters needing attention