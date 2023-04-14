1������˵��
    1. ��������ʾ��ȡ�˿ڵĸߵ͵�ƽ��������LED��D1��D2����˸
    2. ����IO�˿ڵ�ƽ��ת

2��ʹ�û���
     �������������KEIL MDK-ARM V5.34.0.0
     Ӳ������������N32G003F5S7-STB V1.0����

3��ʹ��˵��
      /* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
      1�� SystemClock��48MHz
      2�� GPIO��ѡ��PA11��Ϊ��ȡ��ƽ�˿ڣ�PA6��PA7����ָʾ�ƣ�D1��D2����˸

     /* ����Demo�Ĳ��Բ�������� */
     1����������س���λ���У�
     2�����PA11�˿ڵ�ƽ�����Ϊ�ߵ�ƽ��LED(D2)�������Ϊ�͵�ƽ��LED(D1)������PA8/PA9�������ӵ�LED(D3)�����LED3�˿�Ϊ�͵�ƽ��LED(D3)��

4��ע������
    1������⵽ PA11 �˿ڴ��ڸߵ�ƽʱ���ر� SWD���� PA11 �˿ڴ��ڵ͵�ƽʱ���� SWD
    2�����˿ڴ��ڸߵ�ƽʱ��LED1 �� LED2 ʼ�����𣬵����˿ڴ��ڸߵ�ƽʱ��LED3 ʼ��Ϩ��

1. Function description
    1. This routine shows the high and low levels of the read port and controls the LED (D1��D2) to flash
    2. Control IO port level flip

2. Use environment
    Software development environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: Developed based on the evaluation board N32G003F5S7-STB V1.0

3. Instructions for use
    /* Describe related module configuration methods; for example: clock, I/O, etc. */
    1. SystemClock��48MHz
    2. GPIO: PA11 is selected as the read level port, PA6, PA7 control LED (D1, D2) to flash

   /* Describe the test steps and phenomena of the Demo */
    1. After compiling, download the program to reset and run;
    2. Check the level of the PA11 port:
       If it is high level, LED (D2) is always on;
       If it is low level, the LED (D1) is always on, and the PA8/PA9 are connected to LED(D3) in turn, if LED3 port is low, LED(D3) will on

4. Matters needing attention
   1. When it is detected that the PA11 port is at a high level, close SWD, and when the PA11 port is at a low level, open the SWD
   2. LED1 and LED2 are always on when the port is at high level, but LED3 is always off when the port is at high level

