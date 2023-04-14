1������˵��
    1��ADC1����ת��PA2 PA12���ŵ�ģ���ѹ
    2�������������һ�Σ��ɼ�һ�εķ�ʽ
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.30.0.0
    Ӳ��������      ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M/12,ADC 1M CLK=HSI/48
        2���˿����ã�
                    PA2ѡ��Ϊģ�⹦��ADCת��ͨ��0
                    PA12ѡ��Ϊģ�⹦��ADCת��ͨ��1
        3��ADC��
                    ADC�������ת����12λ�����Ҷ��룬ת��PA2 PA12��ģ���ѹ����
    ʹ�÷�����
        1�������򿪵���ģʽ��������ADCConvertedValue��ӵ�watch���ڹ۲�
        2��ͨ���ı�PA2 PA12���ŵĵ�ѹ�����Կ���ת���������ͬ���ı�
4��ע������
    1.��ϵͳ����ʱ��HSIΪ48Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV48
    2.��ϵͳ����ʱ��HSIΪ40Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV40


1. Function description
    1. ADC1 samples and converts the analog voltage of PA2 PA12 pin
    2. Use software to trigger once and collect once

2. Use environment
    Software development environment: KEIL MDK-ARM V5.30.0.0
    Hardware environment: Developed based on the development board N32G003F5S7-STB V1.0 

3. Instructions for use
    System Configuration;
        1. Clock source:
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M/12,ADC 1M CLK=HSI/48
        2. Port configuration:
                    PA2 is selected as analog function, ADC conversion channel 0
                    PA12 is selected as analog function, ADC conversion channel 1
        3. ADC:
                    ADC configuration: software trigger, 12-bit data is right-aligned, and converts the analog voltage data of PA2 PA12
    Instructions:
        1. Open the debug mode after compiling and add the variable ADCConvertedValue to the watch window for observation
        2. By changing the voltage of the PA2 PA12 pin, you can see that the conversion result variable changes synchronously

4. Matters needing attention
    1.When the system sampling clock HSI is 48M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV48
    2.When the system sampling clock HSI is 40M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV40