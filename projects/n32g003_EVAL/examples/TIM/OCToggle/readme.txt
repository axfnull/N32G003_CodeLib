1������˵��
    1��TIM3 CH1 CH2 �ﵽCCֵ�������ת�����ұȽ�ֵ�ۼ�
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM3 CLK=48M
        2���жϣ�
                    TIM3 �Ƚ��жϴ򿪣����ȼ�0
        3���˿����ã�
                    PA1ѡ��ΪTIM3��CH1���
                    PA2ѡ��ΪTIM3��CH2���
        4��TIM��
                    TIM3 ���ú�CH1 CH2 �ıȽ�ֵ�����ת�����򿪱Ƚ��ж�
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM3 ��CH1 CH2�Ĳ���
        2��ÿ���ﵽ�Ƚ�ֵʱ�������ת������������ͬ���ıȽ�ֵ������ռ�ձ�Ϊ50%
4��ע������
       ������Ĭ��PA2,PA3��ñ�ӵ�NSLINK�����⴮�ڣ���������PA2��PA3�������ڣ�����������;����ε�������ñ��

1. Function description
    1. After TIM3 CH1 CH2 reaches the CC value, the output is flipped, and the comparison value is accumulated
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for use
    System Configuration;
        1. Clock source:
	    AHB=48M,APB=48M,TIM3 CLK=48M
        2. Interrupt:
                    TIM3 compare interrupt on, priority 0
        3. Port configuration:
                    PA1 is selected as the CH1 output of TIM3
                    PA2 is selected as the CH2 output of TIM3
        4. TIM:
                    TIM3 configures the comparison value output of CH1 CH2 to flip, and open the comparison interrupt
    Instructions:
        1. Open the debug mode after compiling, and observe the waveforms of CH1 CH2 of TIM3 with an oscilloscope or logic analyzer
        2. Whenever the comparison value is reached, the output is flipped, and the same comparison value is increased again, and the waveform duty cycle is 50%
4. Matters needing attention
    By default, the PA2 and PA3 jumper caps of the development board are connected to the virtual serial port of NSLINK. If PA2 and PA3 are not used as serial ports in the project, and are used for other purposes, the serial port jumper caps must be unplugged.
