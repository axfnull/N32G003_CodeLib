1������˵��
    1��COMP�����PA8������INP PB0��INM PB1��Ӱ��
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.30.0.0
    Ӳ��������      ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSI=48M,AHB=48M,APB1=48M,COMP CLK=48M
        2���˿����ã�
                    PB0ѡ��Ϊģ�⹦��COMP INP
                    PB1ѡ��Ϊģ�⹦��COMP INM
                    PA8ѡ��Ϊģ�⹦��COMP OUT
                    PA12ѡ��ΪIO���
                    PA13ѡ��ΪIO���
        3��COMP��
                    COMP1����PB1��PB0�����PA8
    ʹ�÷�����
        1�������򿪵���ģʽ����PA12���ӵ�PB0��PA13���ӵ�PB1������ʾ���������߼������ǹ۲�PA8������Σ�����������ϵ縴λ��ʼ��5s֮��ſ�ʼ�����
        2����������PA12��ƽ����PA13ʱ��PA8����ߵ�ƽ���෴ʱ������͵�ƽ
4��ע������
    1���Ƚ�������ܽ�ΪPA8���������ǵ��Կ�SWDIO�ĸ��ùܽţ����ڳ�ʼ����ʱ5s�󣬲ſ�ʼ��SWDIO���ó���ͨ��GPIOʹ�ã� 
    2���������ʱ5sע�͵�������һ�����У��´λ�����޷���¼�����⣬�����ע�⣻


1. Function description
     1. The output PA8 of COMP is affected by the input INP PB0 and INM PB1

2. Use environment
     Software development environment: KEIL MDK-ARM V5.30.0.0
     Hardware environment: Developed based on the development board N32G003F5S7-STB V1.0

3. Instructions for use
     System Configuration;
         1. Clock source:
                     HSI=48M,AHB=48M,APB1=48M,COMP CLK=48M
         2. Port configuration:
                     PB0 is selected as the analog function, COMP INP
                     PB1 is selected as the analog function, COMP INM
                     PA8 is selected as the analog function, COMP OUT
                     PA12 is selected as IO output
                     PA13 is selected as IO output
         3. COMP:
                     COMP input PB0, PB1, output PA8
     Instructions:
         1. After compiling, turn on the debug mode, connect PA12 to PB0, and PA13 to PB1, use an oscilloscope or logic analyzer 
             to observe the output waveform of PA8.(Waveform output starts from power on reset and starts after 5s).
         2. When the software output PA12 level is greater than PA13, PA8 output high level, on the contrary, output low level

4. Matters needing attention
         1. The output pin of the comparator is PA8, which is a multiplexed pin of the debugging port SWDIO. Therefore, SWDIO is not configured for normal GPIO until 5s after the initialization delay;
         2. If the 5s delay is commented out, once the code is run, it will cause the problem that it cannot be burned next time. Please be careful;