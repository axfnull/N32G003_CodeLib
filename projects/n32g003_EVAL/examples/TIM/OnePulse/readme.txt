1������˵��
    1��TIM3 CH2�����ش���CH1���һ��������
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM3 CLK=48M
        2���˿����ã�
                    PA1ѡ��ΪTIM3��CH1���
                    PA2ѡ��ΪTIM3��CH2����
                    PA3ѡ��ΪIO���
        3��TIM��
                    TIM3 ����CH2�����ش���CH1���һ��������
    ʹ�÷�����
        1�������򿪵���ģʽ��PA3����PA2����ʾ���������߼������ǹ۲�TIM3 ��CH1 �Ĳ���
        2��������gSendTrigEn��ӵ�watch���ڣ�Ĭ��gSendTrigEn=0��ÿ���ֶ��޸�gSendTrigEn=1,���ῴ����TIM3 CH1�˿����һ��������
4��ע������
       ������Ĭ��PA2,PA3��ñ�ӵ�NSLINK�����⴮�ڣ���������PA2��PA3�������ڣ�����������;����ε�������ñ��

1. Function description
     1. The rising edge of TIM3 CH2 triggers CH1 to output a single pulse
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for use
     System Configuration;
         1. Clock source:
                     AHB=48M,APB=48M,TIM3 CLK=48M
         2. Port configuration:
                     PA1 is selected as the CH1 output of TIM3
                     PA2 is selected as the CH2 input of TIM3
                     PA3 is selected as IO output
         3. TIM:
                     TIM3 configures CH2 rising edge to trigger CH1 to output a single pulse
     Instructions:
         1. Open the debug mode after compiling, connect PA3 to PA2, and observe the waveform of CH1 of TIM3 with an oscilloscope or logic analyzer
         2. Add the variable gSendTrigEn to the watch window, the default gSendTrigEn=0, every time you manually modify gSendTrigEn=1, you will see a single pulse output on the TIM3 CH1 port
4. Matters needing attention
    By default, the PA2 and PA3 jumper caps of the development board are connected to the virtual serial port of NSLINK. If PA2 and PA3 are not used as serial ports in the project, and are used for other purposes, the serial port jumper caps must be unplugged.
