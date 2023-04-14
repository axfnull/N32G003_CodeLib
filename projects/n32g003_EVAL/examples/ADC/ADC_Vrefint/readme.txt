1������˵��
    1��ADC�����ڲ�ͨ��Vrefint
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.30.0.0
    Ӳ��������      ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M/12,ADC 1M CLK=HSI/48
        2��ADC��
                    ADC����ת�������������12λ�����Ҷ��룬ADCͨ��9���ڲ��ο���ѹ����
    ʹ�÷�����
        1�������򿪵���ģʽ��������ADCConvertedValue,��ӵ�watch���ڹ۲죬���ֵ����Vrefint�Ĳ���ֵ
4��ע������
    1.��ϵͳ����ʱ��HSIΪ48Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV48
    2.��ϵͳ����ʱ��HSIΪ40Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV40



1. Function description
    1. ADC samples the internal channel Vrefint

2. Use environment
    Software development environment: KEIL MDK-ARM V5.30.0.0
    Hardware environment: Developed based on the evaluation board N32G003F5S7-STB V1.0

3. Instructions for use
    System Configuration;
        1. Clock source:
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M/12,ADC 1M CLK=HSI/48
        2. ADC:
                    ADC configuration: continuous conversion, software trigger, 12-bit data right-aligned, ADC channel 9 is the analog voltage data of the internal reference voltage.
    Instructions:
        1. Open the debug mode after compiling, add the variables ADCConvertedValue to the watch window for observation��This value is the Vrefint sample value
4. Matters needing attention
    1.When the system sampling clock HSI is 48M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV48
    2.When the system sampling clock HSI is 40M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV40