1������˵��
1��STOP����ͻ����˳�ʾ����


2��ʹ�û���

    �������������KEIL MDK-ARM Professional Version 5.34

    Ӳ����������Сϵͳ��N32G003F5S7-STB_V1.0  


3��ʹ��˵��

    ϵͳ���ã�
        - ϵͳʱ�� = 48MHz

    ʹ�÷�����
        ��KEIL�±������¼�������壬�ϵ������ӡ��This is a demo of entering and exiting STOP mode.��������һ�������ӡ��Entry STOP mode������������STOP�ˡ�
        ����WAKEUP�����󣬴����������Exit STOP mode��������MCU�������ˣ���ֹͣ��λ��ִ�С�


4��ע������
    ��


1. Function description
    1. Example of STOP entry and wake-up exit.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.34

    Hardware environment: minimum system board N32G003F5S7-STB_V1.0


3. Instructions for use

    System Configuration;
        -System clock = 48MHz

    Instructions:
        After compiling under KEIL and burning it to the evaluation board, the output prints "This is a demo of entering and exiting STOP mode." after power-on. After a while, the output prints "Entry STOP mode", indicating that it has entered STOP.
        After pressing the WAKEUP button, the serial port outputs "Exit STOP mode" again, indicating that the MCU is awakened��Execute from the stopped position.


4. Matters needing attention
    none
