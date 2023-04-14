1������˵��
    1��TIM1 CH2�ſ�CH1��TIM3
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������        N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM1 CLK=48M,TIM3 CLK=48M
        2���˿����ã�
                    PA11ѡ��ΪTIM1 CH1���
                    PA7ѡ��ΪTIM1 CH2����
                    PA1ѡ��ΪTIM3 CH1���
        3��TIM��
                    TIM1 CH2 �ſ�CH1���ſ�TIM3
    ʹ�÷�����
        1�������򿪵���ģʽ��PA7���ߵ�ƽ����ʾ���������߼������ǹ۲�TIM1 CH1,TIM3 CH1�Ĳ���
        2��TIM1 CH2�ߵ�ƽ��ʱ����ʼ�������͵�ƽֹͣ
4��ע������
    ��

1. Function description
     1. TIM1 CH2 gated CH1 and TIM3
2. Use environment
    Software development environment: 	KEIL MDK-ARM V5.34.0.0
    Hardware environment:    	             	N32G003F5S7-STB V1.0
3. Instructions for Use
    System configuration��
        1. Clock source:
                     AHB=48M, APB=48M,  TIM1 CLK=48M, TIM3 CLK=48M
        2. Port configuration:
                     PA11 is selected as TIM1 CH1 output
                     PA7 is selected as TIM1 CH2 input
                     PA1 is selected as TIM3 CH1 output
        3. TIM:
            TIM1 CH2 Gated CH1, Gated TIM3
     Instructions:
    1. Open debugging mode after compilation, PA7 supply high level and observe TIM1 CH1, TIM3 CH1 waveforms with an oscilloscope or logic analyzer
         2. TIM1 CH2 high level timer starts counting, low level stops
4. Matters needing attention
    None