1������˵��
    ������չʾ������ģ����÷���
    
2��ʹ�û���

    �������������KEIL MDK-ARM 5.34.0.0
    Ӳ��������    N32G003F5S7-STB V1.0

3��ʹ��˵��
    1��ϵͳʱ�ӣ�48MHz
    2��Beeperʱ��Դ��LSI 32kHz
    3������˿ڣ�
	BEEPER_GPIO      PA14   AF_PP  
	BEEPER_N_GPIO  PB0     AF_PP

    4�����Բ���������
       a���������ش��븴λ����
       b����ʾ�����鿴���Σ�һ��ʼBEEPER_GPIO��BEEPER_N_GPIO����������Σ�
            һ��ʱ���BEEPER_N_GPIO����رգ������·������ر�  
	
4��ע������
     ��

1. Function description
    This example shows the usage of the buzzer module.
    
2. Use environment
    Software  environment: KEIL MDK-ARM 5.34.0.0
    Hardware environment: N32G003F5S7-STB V1.0

3. Instructions for use
     1. System clock: 48MHz
     2. Beeper clock source: LSI 32kHz
     3. Output port��
	BEEPER_GPIO      PA14   AF_PP  
	BEEPER_N_GPIO  PB0     AF_PP

     4. Test steps and phenomenon
        a. Compile and download the code to reset and run.
        b. View the waveform with an oscilloscope, BEEPER_GPIO and BEEPER_N_GPIO output complementary waveforms at first, 
	BEEPER_N_GPIO output off after a while, and finally both outputs off .

4. Matters needing attention
    None