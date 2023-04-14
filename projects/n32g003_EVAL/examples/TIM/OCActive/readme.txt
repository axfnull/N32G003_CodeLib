1������˵��
    1��TIM3 CH1 CH2 �ﵽCCֵ�����ACTIVE��ƽ
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM3 CLK=48M
        2���˿����ã�
                    PA1ѡ��ΪTIM3 CH1���
                    PA2ѡ��ΪTIM3 CH2���
                    PA3ѡ��ΪIO ���
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM3 CH1 CH2�Ĳ���
        2����ʱ�����е�CC1 CC2֮�󣬶�Ӧͨ���������ΪActive
4��ע������
       ������Ĭ��PA2��PA3��ñ�ӵ�NSLINK�����⴮�ڣ���������PA2��PA3�������ڣ�����������;����ε�������ñ��

1. Function description
     1. After TIM3 CH1 CH2 reaches the CC value, it outputs ACTIVE level
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for use
     System Configuration;
         1. Clock source:
                     AHB=48M, APB=48M, TIM3 CLK=48M
         2. Port configuration:
                     PA1 is selected as TIM3 CH1 output
                     PA2 is selected as TIM3 CH2 output
                     PA3 is selected as IO output
     Instructions:
        1. Open the debug mode after compiling, and observe the waveforms of TIM2 CH1 CH2 with an oscilloscope or logic analyzer
        2. After the timer runs to CC1 CC2, the output of the corresponding channel becomes Active
4. Matters needing attention
         By default, the PA2 and PA3 jumper caps of the development board are connected to the virtual serial port of NSLINK. If PA2 and PA3 are not used as serial ports in the project, and are used for other purposes, the serial port jumper caps must be unplugged.
