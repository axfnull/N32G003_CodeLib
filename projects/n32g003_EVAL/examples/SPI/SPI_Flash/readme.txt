1������˵��
    1��SPI ����д������ W25Q128
2��ʹ�û���
     �������������KEIL MDK-ARM 5.30.0.0
     Ӳ��������    ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
     ϵͳ���ã�
         1��SystemClock��48MHz
         2��GPIO��SPI: SCK--PA15 NSS--PA3 MISO--PA7 MOSI--PA6
		          UART: TX--PA2��RX--PA3
     ʹ�÷�����
        1����������س���λ����
        2��ͨ�����ڹ��߲鿴���
4��ע������
   ��N32G003F5S7-STB��������N32WB45xL_EVB V1.1�ϵ�SPI Flash���ӣ�ע������VDD��GND

1. Function description
    1. SPI read, write, erase W25Q128
2. Use environment
    Software development environment: KEIL MDK-ARM 5.30.0.0
    Hardware Environment: Developed based on N32G003F5S7-STB V1.0
3. Instructions for use
    System Configuration;
        1. SystemClock��48MHz
        2. GPIO��SPI: SCK--PA15 NSS--PA3 MISO--PA7 MOSI--PA6
		         UART: TX--PA2, RX--PA3
    Instructions:
        1. After compiling, download the program to reset and run
        2. View the results through the serial port tool
4. Matters needing attention
   Connect the N32G003F5S7-STB development board with SPI Flash on N32WB45xL_EVB V1.1, taking care to connect VDD and GND