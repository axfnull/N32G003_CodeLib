1������˵��
     ������չʾ IO ���� LED ��˸

2��ʹ�û���
     �������������KEIL MDK-ARM V5.34.0.0
     Ӳ������������N32G003F5S7-STB V1.0����

3��ʹ��˵��
      /* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
      1�� SystemClock��48MHz
      2�� GPIO��PA6�� PA7��PA10 ���� LED(D1��D2��D3) ��˸

     /* ����Demo�Ĳ��Բ�������� */
     1����������س���λ���У�
     2��LED(D1��D2��D3) ��˸��

4��ע������
    ���˿�Ϊ�ߵ�ƽʱ��LED1��LED2��������LED3��


1. Function description
    This example shows the IO control LED blinking

2. Use environment
    Software development environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: Developed based on the evaluation board N32G003F5S7-STB V1.0

3. Instructions for use
    /* Describe related module configuration methods; for example: clock, I/O, etc. */
    1. SystemClock��48MHz
    2. GPIO: PA6, PA7, PA10 control LED (D1, D2, D3) to blink

   /* Describe the test steps and phenomena of the Demo */
   1. After compiling, download the program to reset and run;��
   2. LED (D1, D2, D3) flashes;

4. Matters needing attention
   LED1 and LED2 are always on when the port is at high level, but LED3 is always off when the port is at high level

