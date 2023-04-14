1������˵��
    TIM6 ���ø����жϣ�����STOPģʽ����������ʱ��תIO
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������      N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM6 CLK=LSI=32kHz
        2���жϣ�
                    TIM6 �����жϴ򿪣����ȼ�1
        3���˿����ã�
                    PA6ѡ��ΪIO���
        4��TIM��
                    TIM6ʹ�������ж�
        5��UART��
                   TX��PA2
                   �����ʣ�115200
    ʹ�÷�����
        1��������������У�����STOP��ͨ�������жϻ��ѣ�ͨ����ӡ�鿴״̬
        2��TIM6�������ж��з�תPA6����ͨ��ʾ�������߼������ǲ鿴����
4��ע������
    ��

1. Function description
     1. TIM6 uses the update interrupt to wakeup STOP mode and generate timing rollover IO
2. Use environment
     Software development environment: KEIL MDK-ARM V5.34.0.0
     Hardware environment:  N32G003F5S7-STB V1.0
3. Instructions for use
     System Configuration;
         1. Clock source:
                     AHB=48M,APB=48M,TIM6 CLK=LSI=32kHz
         2. Interruption:
                     TIM6 update interrupt is turned on, priority level 1
         3. Port configuration:
                     PA6 is selected as IO output
         4. TIM:
                     TIM6 enables periodic interrupts
         5. UART:
                      TX��PA2
                      Baud rate: 115200
	       
     Instructions:
         1. Download and run after compilation, wake up by interrupting the update after entering STOP, and check the status through printing
         2. Flip PA6 in the cycle interrupt of TIM6, and the waveform can be viewed through an oscilloscope or logic analyzer
4. Matters needing attention
     None