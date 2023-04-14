1������˵��

    �ò�����ʾ��UARTy��UARTz��ͨ���ж�ʵ�ֵĻ���ͨ�š�
    UARTy����TxBuffer1������UARTz��UARTz�������ݴ���RxBuffer2��ͬʱ��UARTz����TxBuffer2������UARTy��UARTy�������ݴ���RxBuffer1��
    ��󣬷ֱ�Ƚ�������������뷢�����ݣ��ȽϽ������TransferStatus1������TransferStatus2������
    UARTy��UARTz������UART1��UART2��


2��ʹ�û���

    �������������KEIL MDK-ARM Professional Version 5.34

    Ӳ����������Сϵͳ��N32G003F5S7-STB_V1.0


3��ʹ��˵��
	
    ϵͳʱ���������£�
    - ϵͳʱ�� = 48MHz
    
    UART�������£�
    - ������ = 115200 baud
    - �ֳ� = 8����λ
    - 1ֹͣλ
    - У����ƽ���
    - �������ͷ�����ʹ��
    
    UART�����������£�    
    - UART1_Tx.PA14    <------->    UART2_Rx.PA1
    - UART1_Rx.PA12   <------->   UART2_Tx.PA2

    
    ���Բ���������
    - Demo��KEIL�����±����������MCU
    - ��λ���У����β鿴����TransferStatus1��TransferStatus2�����У�
      PASSEDΪ����ͨ����FAILEDΪ�����쳣


4��ע������

    ���Ƚ�������NS-LINK��MCU_TX��MCU_RX����ñ�Ͽ�

1. Function description

    This test case demonstrates the basic communication between UARTy and UARTz through interrupts.
    UARTy sends TxBuffer1 data to UARTz, and UARTz receives data to RxBuffer2. At the same time, UARTz sends TxBuffer2 data to UARTy, and UARTy receives data to RxBuffer1.
    Subsequently, the two groups of received data and sent data are compared respectively, and the comparison results are stored in the TransferStatus1 variable and the TransferStatus2 variable.
    UARTy and UARTz can be UART1 and UART2.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.34

    Hardware environment: minimum system board N32G003F5S7-STB_V1.0


3. Instructions for use

    The system clock configuration is as follows:
    -System clock = 48MHz
    
    The UART configuration is as follows:
    -Baud rate = 115200 baud
    -Word length = 8 data bits
    -1 stop bit
    -Verification control disabled
    -Receiver and transmitter enable
    
    The UART pin connections are as follows:
    - UART1_Tx.PA14    <------->    UART2_Rx.PA1
    - UART1_Rx.PA12   <------->   UART2_Tx.PA2

    
    Test steps and phenomena:
    -After the Demo is compiled in the KEIL environment, download it to the MCU
    -Reset operation, check the variables TransferStatus1 and TransferStatus2 in turn, among them,
      PASSED means the test passed, FAILED means the test is abnormal


4. Matters needing attention

    the MCU_TX and MCU_RX jumper cap of the development board NS-LINK needs to be disconnected first