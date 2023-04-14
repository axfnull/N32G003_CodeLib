1������˵��
    1��PVD���õ�ѹ������Ӧ���жϡ�

2��ʹ�û���

    �������������KEIL MDK-ARM Professional Version 5.34

    Ӳ����������Сϵͳ��N32G003F5S7-STB_V1.0 

3��ʹ��˵��

    ϵͳ���ã�
        - ϵͳʱ�� = 48MHz

    ʹ�÷�����
        ��KEIL�±������¼�������壬ͨ���������������ģʽ����PVD_IRQHandler()�����öϵ㡣
        ȫ�����С�Ȼ���ٰѵ�ѹ����PVD���õ�ѹ��������ʱ�����ͣ�ڶϵ㴦��

4��ע������
    ��


1. Function description
    1. The PVD configuration voltage generates a corresponding interrupt.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.34

    Hardware environment: minimum system board N32G003F5S7-STB_V1.0


3. Instructions for use

    System Configuration;
        -System clock = 48MHz

    Instructions:
        After compiling under KEIL, burn it to the evaluation board, enter the debug mode through the emulator, and set a breakpoint in PVD_IRQHandler().
        Running at full speed. Then adjust the voltage to the vicinity of the PVD setting voltage, and the program will stop at the breakpoint at this time.


4. Matters needing attention
    none

