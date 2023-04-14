1������˵��
     1��SPI ��ģʽ�����жϷ�������
2��ʹ�û���
     �������������KEIL MDK-ARM 5.30.0.0
     Ӳ��������    ����N32G003F5S7-STB V1.0����  
3��ʹ��˵��
     ϵͳ���ã�
         1��SystemClock��48MHz
         2��GPIO������ģʽ DEMO �壩SPI: NSS--PA8��SCK--PA14��MOSI--PB1
         3����־��ӡ����ģʽ DEMO �� PA2(TX)�������ʣ�115200
     ʹ�÷�����
         1����������س���λ���У�
         2����ģʽ DEMO ��Ӻô��ڴ�ӡ���ߣ��ϵ�
         3�����ɿ���DEMO�帴λ�������ɿ���DEMO�帴λ�����鿴��ӡ���Գɹ�
4��ע������
     ��Ҫ���� demo ����ϣ�һ�������¼��ģʽ����һ�������¼��ģʽ�������������һ���ϵ磬����������ӵ� VCC �� GND
    �����ߡ������������豸��ΪMOSI���ţ��ڴ��豸��ΪMISO����

1. Function description
    1. SPI master mode single-wire interrupt send data
2. Use environment
    Software development environment: KEIL MDK-ARM 5.30.0.0
    Hardware Environment: Developed based on N32G003F5S7-STB V1.0
3. Instructions for use
    System Configuration;
        1. SystemClock��48MHz
        2. GPIO��(Master mode DEMO board) SPI: NSS--PA8, SCK--PA14, MOSI--PB1
        3. Log print: slave mode DEMO board PA2(TX), baud rate: 115200
    Instructions:
        1. After compiling, download the program to reset and run;
         2. The slave mode DEMO board connects the serial port printing tool, power on.
        3. Release the reset key of the Slave DEMO board and then release the reset key of the Master DEMO board, check that the printing test is successful.
4. Matters needing attention
    Two demo boards are required, one board to program the master mode program, one board to program the slave mode program, 
    the two boards need to be powered on together, and connect the VCC and GND of the two boards;
    The "single wire" data lines are MOSI pins on the master side and MISO pins on the slave side.