1������˵��
    TIM3 ���ø����жϣ���������ʱ��תIO
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.34.0.0
    Ӳ��������      N32G003F5S7-STB V1.0
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    AHB=48M,APB=48M,TIM3 CLK=APB
        2���жϣ�
                    TIM3 �����жϴ򿪣����ȼ�1
        3���˿����ã�
                    PA6ѡ��ΪIO���
        4��TIM��
                    TIM3ʹ�������ж�
    ʹ�÷�����
        1���������������
        2��TIM3�������ж��з�תPA6����ͨ��ʾ�������߼������ǲ鿴����
4��ע������
    ��

1. Function description
     1. TIM3 uses the update interrupt to generate timing rollover IO
2. Use environment
     Software development environment: KEIL MDK-ARM V5.34.0.0
     Hardware environment:  N32G003F5S7-STB V1.0
3. Instructions for use
     System Configuration;
         1. Clock source:
                     AHB=48M,APB=48M,TIM3 CLK=APB
         2. Interruption:
                     TIM3 update interrupt is turned on, priority level 1
         3. Port configuration:
                     PA6 is selected as IO output
         4. TIM:
                     TIM3 enables periodic interrupts
	       
     Instructions:
         1. Download and run after compilation
         2. Flip PA6 in the cycle interrupt of TIM3, and the waveform can be viewed through an oscilloscope or logic analyzer
4. Matters needing attention
     None