1������˵��
	IWDG��λ����

2��ʹ�û���

	�������������KEIL MDK-ARM V5.25
    Ӳ������������������N32G003F5S7-STB V1.0����

3��ʹ��˵��
	
	ϵͳ���ã�
		1��IWDGʱ��Դ��LSI/128
	    2����ʱʱ��ֵ��16s (4ms * 4080)
        3��ָʾ�ƣ�LED1(PA6) LED2(PA7)

	���Բ��輰����
	    1���� KEIL �±���󣬽����̵������塣�ϵ�󣬴��ڴ�ӡ��ι�����Σ�ָʾ��LED2������˸������ζ��IWDG����ι����������������
        2������ι������ι������Լ16s��IWDG��λ

4��ע������
	1�����ͨ����¼�����棬��Ҫ����DBG_Peripheral_ON(PWR_DBG_IWDG);


1. Function description
   IWDG reset function.

2. Use environment

	Software development environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: Developed based on the evaluation board N32G003F5S7-STB V1.0

3. Instructions for use
	
	System Configuration��
		1. IWDG clock source: LSI/128
        2. Timeout value: 16s (4ms * 4080)
        3. Indicator light: LED1(PA6) LED2(PA7)

	Instructions:
	1. After compiling under KEIL, program it to the evaluation board. After power-on, the serial port prints and 
	   feeds the dog three times, and the indicator LED2 keeps flashing. It means that IWDG feeds the dog normally and the code runs normally.
	2. If the dog is not fed after three feedings, about 16s the IWDG resets.

4. Matters needing attention
      If you want to suspend IWDG during debugging, you need to turn on DBG_Peripheral_ON(PWR_DBG_IWDG);