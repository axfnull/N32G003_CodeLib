1������˵��
    1��COMP1�����ɲ��TIM1 �Ļ����źţ�COMP OUT��ͺ�ָ�TIM1 ����
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.30.0.0
    Ӳ��������      ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                   HSI=48M,AHB=48M,APB1=48M,COMP CLK=48M,TIM1 CLK=48M
        2���˿����ã�
                    PB0ѡ��Ϊģ�⹦��COMP INP
                    PB1ѡ��Ϊģ�⹦��COMP INM
                    PA8ѡ��Ϊģ�⹦��COMP OUT
                    PA12ѡ��ΪIO���
                    PA13ѡ��ΪIO���
                    PA6ѡ��ΪTIM1 CH1���
                    PA5ѡ��ΪTIM1 CH1N���
                 
        3��TIM��
                    TIM1����CH1 CH1N ���,COMP��Ϊɲ������
        4��COMP��
                    COMP1�������TIM1 ɲ���������ʱ�ָ�TIM1 ���
    ʹ�÷�����
        1�������򿪵���ģʽ����PA12���ӵ�PB0��PA13���ӵ�PB1������ʾ���������߼������ǹ۲�TIM1������Σ�����������ϵ縴λ��ʼ��5s֮��ſ�ʼ�����
        2����������PA12��ƽ����PA13ʱ��TIM������ʧ���෴ʱ�������������.
4��ע������
    1���Ƚ�������ܽ�ΪPA8���������ǵ��Կ�SWDIO�ĸ��ùܽţ����ڳ�ʼ����ʱ5s�󣬲ſ�ʼ��SWDIO���ó���ͨ��GPIOʹ�ã� 
    2���������ʱ5sע�͵�������һ�����У��´λ�����޷���¼�����⣬�����ע�⣻



1. Function description
    1. The output of COMP1 brakes the complementary signal of TIM1, and the waveform of TIM1 is restored after COMP OUT goes low.

2. Use environment
    Software development environment: KEIL MDK-ARM V5.30.0.0
    Hardware environment: Developed based on the evaluation board N32G003F5S7-STB V1.0

3. Instructions for use
    System Configuration;
        1. Clock source:
                    HSI=48M,AHB=48M,APB1=48M,COMP CLK=48M,TIM1 CLK=48M
        2. Port configuration:
                    PB0 is selected as the analog function, COMP INP
                    PB1 is selected as the analog function, COMP INM
                    PA8 is selected as the analog function, COMP OUT
                    PA12 is selected as IO output
                    PA13 is selected as IO output
                    PA6 is selected as TIM1 CH1 output
                    PA5 is selected as TIM1 CH1N output
                  
        3. TIM:
                    TIM1 turns on CH1 CH1N output, COMP is used as brake input
        4. COMP:
                    COMP1 output triggers TIM1 brake, and resumes TIM1 output when there is no output
    Instructions:
        1. Open the debug mode after compiling, connect PA12 to PB0 and PA13 to PB1, use an oscilloscope or logic analyzer 
            to observe the output waveform of TIM1(Waveform output starts from power on reset and starts after 5s)
        2. When the software output PA12 level is greater than PA13, the TIM waveform disappears, on the contrary, the waveform is output normally

4. Matters needing attention
        1. The output pin of the comparator is PA8, which is a multiplexed pin of the debugging port SWDIO. Therefore, SWDIO is not configured for normal GPIO until 5s after the initialization delay;
        2. If the 5s delay is commented out, once the code is run, it will cause the problem that it cannot be burned next time. Please be careful;