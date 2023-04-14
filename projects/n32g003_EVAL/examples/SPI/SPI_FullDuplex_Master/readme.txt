1������˵��
    1��SPI ȫ˫����� NSS ģʽ���ͽ�������
2��ʹ�û���
     �������������KEIL MDK-ARM 5.30.0.0
     Ӳ��������    ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
     ϵͳ���ã�
         1��SystemClock��48MHz
         2��GPIO��SPI: NSS--PA3 SCK--PA15 MISO--PA7 MOSI--PA6
     ʹ�÷�����
        1����������س���λ���У�
        2�����ɿ��ӻ���λ�������ɿ�������λ�������������ݴӻ����գ�֮��ӻ��������������գ������TransferStatusΪPASSED��
4��ע������
     ��

1. Function description
    1. SPI full duplex software NSS mode to send and receive data
2. Use environment
    Software development environment: KEIL MDK-ARM 5.30.0.0
    Hardware Environment: Developed based on N32G003F5S7-STB V1.0
3. Instructions for use
    System Configuration;
        1. SystemClock��48MHz
        2. GPIO��SPI: NSS--PA3, SCK--PA15, MISO--PA7, MOSI--PA6
    Instructions:
        1. After compiling, download the program to reset and run;
        2. First release the slave reset button, then release the host reset button, the master sends data to the slave to receive, 
		   then the slave sends data to the host receives, and finally check that TransferStatus is PASSED;
4. Matters needing attention
    No