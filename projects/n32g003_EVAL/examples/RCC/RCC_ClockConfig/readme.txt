1������˵��

    /* ���������̹��� */
    ����������ò���ʾ���ò�ͬ��ϵͳʱ��


2��ʹ�û���

    /* ���������������ǰ����ʹ�õ�����������Ƽ��汾�� */
    IDE���ߣ�KEIL MDK-ARM 5.34.0.0
      
    /* Ӳ�����������̶�Ӧ�Ŀ���Ӳ��ƽ̨ */
    �����壺N32G003F5S7-STB V1.0     

        

3��ʹ��˵��

    /* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
    USART��TX - PA2��������115200
    GPIO��PA13 - ����ΪMC0ʱ�����

    /* ����Demo�Ĳ��Բ�������� */
    1.��������س���λ���У�
    2.�л�ϵͳʱ��ԴΪHSI48M��ϵͳʱ��Ϊ24M,ʹ�ô��ڴ�ӡ����ǰSYSCLK��HCLK��PCLK����Ϣ������ʹ��PA13�����������HSIʱ�ӣ���ʾ�����鿴��


4��ע������
     ��

1. Function description

     /* Briefly describe the engineering function */
     This example configures and demonstrates the setting of different system clocks


2. Use environment

     /* Software development environment: the name and version number of the software tool used in the current project */
     IDE tool: KEIL MDK-ARM 5.34.0.0
      
     /* Hardware environment: development hardware platform corresponding to the project */
     Development board: N32G003F5S7-STB V1.0

3. Instructions for use

     /* Describe the configuration method of related modules; for example: clock, I/O, etc. */
     USART: TX-PA2, baud rate 115200
     GPIO: PA13-multiplexed as MC0 clock output

     /* Describe the test steps and phenomena of Demo */
     1. After compiling, download the program to reset and run;
     2. Switch the system clock source to HSI48M, the system clock is 24M, use the serial port to print out the current SYSCLK, HCLK, 
       PCLK and other information, and use PA13 multiplexing pin output HSI clock, with an oscilloscope view;


4. Attention
    None