1������˵��
    1��ADC����ת��PA2���ŵ�ģ���ѹ���������ģ�⿴�Ź��������ֵ��Χ���������жϳ���
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.30.0.0
    Ӳ��������      ����N32G003F5S7-STB V1.0����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M/12,ADC 1M CLK=HSI/48
        2��ADC��
                    ADC����ת�������������12λ�����Ҷ��룬ADCͨ��1
		3���˿����ã�
                    PA2ѡ��Ϊģ�⹦��ADCת��ͨ��0
		4���жϣ�
                    ADCģ�⿴�Ź��жϴ򿪣����ȼ�0
    ʹ�÷�����
        1�������򿪵���ģʽ��������gCntAwdg��ӵ�watch���ڹ۲�
        2���ı�PA2���ŵ�ѹֵ������ѹֵ����ģ�⿴�Ź������0x300����0.6V����0xB00����2.26V����Χ�⣬�����һ���жϣ��������ۼӲ���
4��ע������
    1.��ϵͳ����ʱ��HSIΪ48Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV48
    2.��ϵͳ����ʱ��HSIΪ40Mʱ��RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40)����Ƶ��Ҫ���ó�RCC_ADC1MCLK_DIV40



1. Function description
    1. ADC samples and converts the analog voltage of the PA2 pin. If it exceeds the threshold range defined by the analog watchdog, then jump into the interrupt program

2. Use environment
    Software development environment: KEIL MDK-ARM V5.30.0.0
    Hardware environment: Developed based on the evaluation board N32G003F5S7-STB V1.0

3. Instructions for use
    System Configuration;
        1. Clock source:
                    HSI=48M,AHB=48M,APB1=48M,ADC CLK=48M/12,ADC 1M CLK=HSI/48
        2. ADC:
                    ADC configuration: continuous conversion, software trigger, 12-bit data right-aligned, ADC channel 1.
        3. Port configuration:
                    PA2 is selected as analog function, ADC conversion channel 0
        4. Interrupt:
                    ADC analog watchdog interrupt is turned on, priority 0
    Instructions:
        1. Open the debug mode after compiling and add the variable gCntAwdg to the watch window for observation
        2. Change the voltage value of the PA2 pin. When the voltage value exceeds the range defined by the analog watchdog from 0x300 (ie 0.6V) to 0xB00 (ie 2.26V), an interrupt is entered, and the variable is accumulated

4. Matters needing attention
    1.When the system sampling clock HSI is 48M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV48), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV48
    2.When the system sampling clock HSI is 40M, RCC_ADC_1M_Clock_Config(RCC_ADC1MCLK_DIV40), frequency division needs to be configured as RCC_ ADC1MCLK_ DIV40