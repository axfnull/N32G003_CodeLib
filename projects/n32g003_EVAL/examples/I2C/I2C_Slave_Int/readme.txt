1������˵��

    ������չʾ����Ϊ�ӻ�ʹ��I2C�ж��շ����ݡ�   

2��ʹ�û���

   �������������
        IDE���ߣ�KEIL MDK-ARM 5.34.0.0
    
    Ӳ��������
        �����壺N32G003F5S7-STB V1.0


3��ʹ��˵��
	
    1����ʱ�ӣ�48MHz
    2��I2C ���ã�
            SCL   -->  PA4          
            SDA   -->  PA5         
            CLOCK:100KHz
            
    3��UART1���ã�
            TX  -->  PA2   
            RX  -->  PA3           
            �����ʣ�115200
        

    4�����Բ���������
        a��������������I2C
        b���������ش��븴λ����
        c���Ӵ��ڿ���ӡ��Ϣ����֤���

4��ע������
    SCL��SDA���������

1. Function description

     This example demonstrates the use of I2C interrupts to send and receive data as a slave.

2. Use environment

    Software development environment:
         IDE tool: KEIL MDK-ARM 5.34.0.0
    
     Hardware environment:
         Development board: N32G003F5S7-STB V1.0


3. Instructions for use

     1. Main clock: 48MHz
     2. I2C configuration:
             SCL --> PA4          
             SDA --> PA5          
             CLOCK: 100KHz
            
     3. UART1 configuration:
             TX --> PA2
             RX --> PA3
             Baud rate: 115200
        

     4. Test steps and phenomena
         a, the jumper wire connects the master I2C
         b, compile and download the code, reset and run
         c, view the print information from the serial port and verify the result

4. Matters needing attention
     SCL and SDA must be pulled up