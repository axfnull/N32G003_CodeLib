1������˵��
    1��TIM1���3·�������κ�һ·CH4����
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ����:
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM1 CLK=48M
        2���˿����ã�
                    PA11ѡ��ΪTIM1 CH1���
                    PA7ѡ��ΪTIM1 CH2���
                    PA1ѡ��ΪTIM1 CH3���
                    PA5ѡ��ΪTIM1 CH1N���
                    PA6ѡ��ΪTIM1 CH2N���
                    PA2ѡ��ΪTIM1 CH3N���
                    PA3ѡ��ΪTIM1 CH4���
        3��TIM��
                    TIM1 3·�������,CH4���
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM1���������
        2���������TIM1 3·������һ·CH4
4��ע������
       ������Ĭ��PA2��PA3��ñ�ӵ�NSLINK�����⴮�ڣ���������PA2��PA3�������ڣ�����������;����ε�������ñ��

1. Function description
    1. TIM1 output 3 complementary waveforms and 1 CH4 waveform
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for Use
    System configuration;
        1. Clock source:
            AHB=48M, APB=48M, TIM1 CLK=48M
        2. Port configuration:
                    PA11 is selected as TIM1 CH1 output
                    PA7 is selected as TIM1 CH2 output
                    PA1 is selected as TIM1 CH3 output
                    PA5 is selected as TIM1 CH1N output
                    PA6 is selected as TIM1 CH2N output
                    PA2 is selected as TIM1 CH3N output
                    PA3 is selected as TIM1 CH4 output
        3. TIM:
            TIM1   3 complementary outputs, CH4 output
    Instructions:
        1. Open debugging mode after compilation and use an oscilloscope or logic analyzer to observe the output waveform of TIM1
        2. Output waveform TIM1 3-way complementary plus one CH4
4. Matters needing attention
       By default, the PA2 and PA3 jumper caps of the development board are connected to the virtual serial port of NSLINK. If PA2 and PA3 are not used as serial ports in the project, and are used for other purposes, the serial port jumper caps must be unplugged.
