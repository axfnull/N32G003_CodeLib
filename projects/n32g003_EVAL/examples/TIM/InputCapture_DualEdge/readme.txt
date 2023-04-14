1������˵��
    1��TIM3 CH2���� CH2������,CH1�½��ؼ���Ƶ��
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM3 CLK=48M
        2���жϣ�
                    TIM3 CH2������ CH1�½����жϴ򿪣����ȼ�1
        3���˿����ã�
                    PA2ѡ��ΪTIM3 CH2����
                    PA3ѡ��ΪIO ���
        4��TIM��
                    TIM3 CH2�����أ�CH1�½��ز����жϴ�
    ʹ�÷�����
        1�������򿪵���ģʽ������PA2��PA3��������TIM3Freq��gOnePulsEn��ӵ�watch����
        2��Ĭ��gOnePulsEn=0��ÿ���ֶ���gOnePulsEn=1����ʱ���Կ���TIM3Freq���������Ƶ��ֵ
4��ע������
       ������Ĭ��PA2��PA3��ñ�ӵ�NSLINK�����⴮�ڣ���������PA2��PA3�������ڣ�����������;����ε�������ñ��

1. Function description
    1. TIM3 CH2 pin, CH2 rising edge, CH1 falling edge to calculate the frequency
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for Use
    System configuration��
        1. Clock source:
            AHB=48M, APB=48M, TIM3 CLK=48M
        2. Interruption:
            TIM3 CH2 rising edge CH1 falling edge interrupt on, priority 1
        3. Port configuration:
            PA2 is selected TIM3 CH2 Input
            PA3 is selected IO Output
        4. TIM:
            TIM3 CH2 rising edge, CH1 falling edge capture interrupt is turned on
Usage method:
    1. Open debugging mode after compilation, connect PA3 to PA2, add variables TIM3Freq, gOnePulsEn to the watch window
    2. Default gOnePulsEn=0, each time you manually give gOnePulsEn=1, you can see the frequency value calculated by TIM3Freq
4. Matters needing attention
        By default, the PA2 and PA3 jumper caps of the development board are connected to the virtual serial port of NSLINK. If PA2 and PA3 are not used as serial ports in the project, and are used for other purposes, the serial port jumper caps must be unplugged.
