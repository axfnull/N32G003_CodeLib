1������˵��
    1��PDģʽ�Ľ���ͻ����˳���


2��ʹ�û���

    �������������KEIL MDK-ARM Professional Version 5.34

    Ӳ����������Сϵͳ��N32G003F5S7-STB_V1.0


3��ʹ��˵��

    ϵͳ���ã�
        - ϵͳʱ�� = 48MHz

    ʹ�÷�����
        ��KEIL�±������¼�������壬���ӵ������ϵ���һ�ᣬ�������Ա�С������WAKEUP�����������ص���mA���𡣹���һ���ֽ���uA��
        ���������ӡ��������Կ������������This is a demo of entering and exiting PD mode.����Enter PD mode�������Ѻ������This is a demo of entering and exiting PD mode.����˵��PD���Ѻ��0��ַ��ʼִ�С�
            


4��ע������
    ��


1. Function description
    1. Entry and wake-up exit of PD mode.


2. Use environment


    Software development environment: KEIL MDK-ARM Professional Version 5.34

    Hardware environment: minimum system board N32G003F5S7-STB_V1.0


3. Instructions for use

    System Configuration��
        -System clock = 48MHz

    Instructions:
        After compiling under KEIL, it is burned to the evaluation board, and the ammeter is connected in series. After a while, the current becomes significantly smaller. Press the WAKEUP button and the current returns to mA level. After a while it drops to uA again.
        If you turn on the print output, you can see that the serial port outputs ��This is a demo of entering and exiting PD mode.����Enter PD mode��, and after waking up, it outputs "This is a demo of entering and exiting PD mode.", indicating that the PD starts to execute from address 0 after waking up.
            

4. Matters needing attention
    none


