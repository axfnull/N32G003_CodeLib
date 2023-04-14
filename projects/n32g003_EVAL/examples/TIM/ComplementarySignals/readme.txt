1������˵��
    1��TIM1���3·��������
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ����:
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM1 CLK=48M
        2���˿����ã�
                    PA11 ѡ��ΪTIM1 CH1���
                    PA7 ѡ��ΪTIM1 CH2���
                    PA10 ѡ��ΪTIM1 CH3���
                    PA5 ѡ��ΪTIM1 CH1N���
                    PA6 ѡ��ΪTIM1 CH2N���
                    PA2 ѡ��ΪTIM1 CH3N���
                    PA1 ѡ��ΪTIM1 Breakin����
        3��TIM��
                    TIM1 6·��������������IOMɲ��
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM1�Ĳ���
        2���ɹ۲쵽3·�������Σ�PA1����Ϊ�߿ɹر����
4��ע������
       ������Ĭ��PA2,PA3��ñ�ӵ�NSLINK�����⴮�ڣ���������PA2��PA3�������ڣ�����������;����ε�������ñ��

1. Function description
    1. TIM1 output 3 complementary waveforms
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for use
    System configuration:
        1. Clock source:
            AHB=48M, APB=48M, TIM1 CLK=48M
        2. Port configuration:
                     PA11 is selected as TIM1 CH1 output
                     PA7 is selected as TIM1 CH2 output
                     PA10 is selected as TIM1 CH3 output
                     PA5 is selected as TIM1 CH1N output
                     PA6 is selected as TIM1 CH2N output
                     PA2 is selected as TIM1 CH3N output
                     PA1 is selected as TIM1 Breakin input
        3. TIM:
            TIM1 3 Complementary with dead-time, with IOM Brake
    Instructions:
        1. Open debugging mode after compilation and observe TIM1 waveform with oscilloscope or logic analyzer
        2. 3 complementary waveforms can be observed, and the output of PA1 pin can be turned off when the pin is high
4. Matters needing attention
    By default, the PA2 and PA3 jumper caps of the development board are connected to the virtual serial port of NSLINK. If PA2 and PA3 are not used as serial ports in the project, and are used for other purposes, the serial port jumper caps must be unplugged.
