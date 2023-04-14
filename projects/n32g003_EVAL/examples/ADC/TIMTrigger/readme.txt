1������˵��
    1��ADC�������PA2,PA5���ŵ�ģ���ѹ����TIM1 CC2�¼��´�������;
    2����ת������ж��ж�ȡת�����
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.30.0.0
    Ӳ��������      ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M,ADC 1M CLK=HSI/48,TIM1 CLK= 48M
        2���жϣ�
                    ADC����ͨ��ת�������ɻ�����жϣ��ж����ȼ�����Ϊ0��
                    �жϺ����н�����ͨ���Ľ����ȡ��ADCConvertedValue[5]���飬����תPA6��ƽ
        3���˿����ã�
                    PA2ѡ��Ϊģ�⹦��ADCת��ͨ��
                    PA5ѡ��Ϊģ�⹦��ADCת��ͨ��
                    PA6ѡ��Ϊͨ��IO���
                    PA7ѡ��ΪTIM1 CH2 PWM���

        4��ADC��
                    ADC TIM1 CC2������12λ�����Ҷ��룬����ת��ͨ��PA2��PA5��ģ���ѹ����
        6��TIM��
                    TIM1����CH2�����CH2��������ADCת��        
    ʹ�÷�����
        1�������򿪵���ģʽ��������ADCConvertedValue[5]��ӵ�watch���ڹ۲�
        2��ͨ���ı�PA2 PA5���ŵĵ�ѹ����ÿ��CC2�¼�����ʱת��һ�ι���ͨ�������������ڶ�Ӧ�����С�ͬʱ��PA7 ���Կ���TIM1 CH2�� PWM ����
4��ע������
    1.��ϵͳ����ʱ��HSIΪ48Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV48
    2.��ϵͳ����ʱ��HSIΪ40Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV40
	3.J17������ñ��Ҫ�ε�


1. Function description
    1. The ADC regularly samples the analog voltage of the PA2,PA5 pin, and triggers sampling under the TIM1 CC2 event;
    2. Read the conversion result in the conversion completion interrupt.

2. Use environment
    Software development environment: KEIL MDK-ARM V5.30.0.0
    Hardware environment: Developed based on the development board N32G003F5S7-STB V1.0 V1.0

3. Instructions for use
    System Configuration;
        1. Clock source:
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M,ADC 1M CLK=HSI/48,TIM1 CLK= 48M
        2. Interrupt:
                    ADC regular conversion result complete will enter interrupt function, interrupt priority level set to 0.
                    In the interrupt function, the regular result is read into the ADCConvertedValue[5] array, and the PA6 level is flipped
        3. Port configuration:
                    PA2 is selected as the analog function, ADC conversion channel
                    PA5 is selected as the analog function, ADC conversion channel
                    PA6 is selected as general IO output
                    PA7 is selected as TIM1 CH2 PWM output
		5. ADC:
                    ADC configuration: TIM1 CC2 trigger, 12-bit data right-aligned, analog voltage data of regular conversion channel PA2,PA5 Pin
        6. TIM:
                    TIM1 turns on CH2 output, and CH2 is used to trigger ADC conversion
    Instructions:
        1. Open the debug mode after compiling and add the variables ADCConvertedValue[5] to the watch window for observation
        2. By changing the voltage of the PA2 PA5 pin,regular channel are converted once every CC2 event occurs, 
		   and the variables are stored in the corresponding array.At the same time, you can see the PWM waveform of TIM1 CH2 on PA7

4. Matters needing attention
    1.When the system sampling clock HSI is 48M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV48
    2.When the system sampling clock HSI is 40M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV40
	3.J17 jumper cap needs to be removed