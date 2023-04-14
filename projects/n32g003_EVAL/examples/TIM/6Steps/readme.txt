1������˵��
    1��systick 100ms����TIM1���6�����ನ��
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ����:
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM1 CLK=48M
        2���жϣ�
                    TIM1 COM�¼��жϴ򿪣����ȼ�1
                    Systick 100ms�жϣ����ȼ�0
        3���˿����ã�
                    PA6��ΪTIM1 CH1���
                    PA7ѡ��ΪTIM1 CH2���
                    PA11ѡ��ΪTIM1 CH3���
                    PA13ѡ��ΪTIM1 CH1N���
                    PA12ѡ��ΪTIM1 CH2N���
                    PA2ѡ��ΪTIM1 CH3N���
                    PA5ѡ��ΪTIM1 Breakin����
        4��TIM��
                    TIM1 6·�����������ģʽ����ɲ������COM�ж�
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM1���������
        2��ÿ��100ms systick����COM�жϣ���TIM��COM�ж��������AB AC BC BA CA CB��6�����ನ��
4��ע������
       ������Ĭ��PA2��PA3��ñ�ӵ�NSLINK�����⴮�ڣ���������PA2��PA3�������ڣ�����������;����ε�������ñ��

1. Function description
    1. systick triggers TIM1 for 100ms to output 6-step commutation waveform
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for use
    System Configuration;
        1. Clock source:
                    AHB=48M,APB=48M,TIM1 CLK=48M
        2. Interrupt:
                    TIM1 COM event interrupt on, priority 1
                    Systick 100ms interrupt, priority 0
        3. Port configuration:
                    PA6 is selected as TIM1 CH1 output
                    PA7 is selected as TIM1 CH2 output
                    PA11 is selected as TIM1 CH3 output
                    PA13 is selected as TIM1 CH1N output
                    PA12 is selected as TIM1 CH2N output
                    PA2 is selected as TIM1 CH3N output
                    PA5 is selected as TIM1 Breakin input
        4. TIM:
                    TIM1 6-channel complementary freeze output mode, no brake, open COM interrupt
    Instructions:
        1. Open the debug mode after compiling, and observe the output waveform of TIM1 with an oscilloscope or logic analyzer
        2. The systick triggers the COM interrupt every 100ms, and outputs the 6-step commutation waveform of AB AC BC BA CA CB in the COM interrupt of the TIM
4. Matters needing attention
       By default, the PA2 and PA3 jumper caps of the development board are connected to the virtual serial port of NSLINK. If PA2 and PA3 are not used as serial ports in the project, and are used for other purposes, the serial port jumper caps must be unplugged.

