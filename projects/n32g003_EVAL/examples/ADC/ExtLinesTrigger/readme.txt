1������˵��
    1��ADC����ͨ������PA2��PA5���ŵ�ģ���ѹ
    2����ת������ж��ж�ȡת�����
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.30.0.0
    Ӳ��������      ������N32G003F5S7-STB V1.0����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M,ADC 1M CLK=HSI/48,TIM1 CLK= 48M
        2���жϣ�
                    ADC����ת�������ɽ����жϣ��ж����ȼ�0
                    �жϴ������ת�������ADCConvertedValue[5]���飬����תPA6��ƽ
        3���˿����ã�
                    PA2ѡ��Ϊģ�⹦��ADCת��ͨ��
                    PA5ѡ��Ϊģ�⹦��ADCת��ͨ��
                    PA7ѡ��Ϊ�ⲿEXTI�¼������ش���
                    PA6ѡ��Ϊͨ��IO���
        4��ADC��
                    ADC����ͨ��ɨ��ģʽ��EXTI7������12λ�����Ҷ��룬ת��ͨ��PA2��PA5��ģ���ѹ����
    ʹ�÷�����
        1�������򿪵���ģʽ��������ADCConvertedValue[5]��ӵ�watch���ڹ۲�
        2��ͨ��PA7�������ؿ��Դ�������ͨ�����ݲ�����
4��ע������
    1.��ϵͳ����ʱ��HSIΪ48Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV48
    2.��ϵͳ����ʱ��HSIΪ40Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV40


1. Function description
    1. The ADC regular channel samples the analog voltage of the PA2 and PA5 pins.
    2. Read the conversion result in the conversion completion interrupt.

2. Use environment
    Software development environment: KEIL MDK-ARM V5.30.0.0
    Hardware environment: Developed based on the development board N32G003F5S7-STB V1.0

3. Instructions for use
    System Configuration;
        1. Clock source:
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M,ADC 1M CLK=HSI/48,TIM1 CLK= 48M
        2. Interrupt:
                    ADC regular conversion result completion will enter interrupt function, interrupt priority level set to 0.
                    In the interrupt function,the regular result is read into the ADCConvertedValue[5] array, and flips PA6 level.
        3. Port configuration:
                    PA2 is selected as the analog function, ADC conversion channel
                    PA5 is selected as the analog function, ADC conversion channel
                    PA6 is selected as general IO output
					PA7 is selected as external EXTI event rising edge trigger
        4. ADC:
                    ADC regular channel scan mode, EXTI7 trigger, 12-bit data right-aligned, conversion of analog voltage data of channels PA2 and PA5
    Instructions:
        1. Open the debug mode after compiling, add the variables ADCConvertedValue[5] to the watch window for observation
        2. The regular channel data sampling can be triggered by the rising edge of PA7.

4. Matters needing attention
    1.When the system sampling clock HSI is 48M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV48
    2.When the system sampling clock HSI is 40M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV40