1������˵��

    ������չʾͨ���ⲿ�����жϣ����� LED ��˸

2��ʹ�û���

    /* ���������������ǰ����ʹ�õ�����������Ƽ��汾�� */
    IDE���ߣ�KEIL MDK-ARM 5.34.0.0
      
    /* Ӳ�����������̶�Ӧ�Ŀ���Ӳ��ƽ̨ */
    �����壺N32G003F5S7-STB V1.0     

3��ʹ��˵��

    /* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
    SystemClock��48MHz
    GPIO��PA11 ѡ����Ϊ�ⲿ�ж���ڣ�PA6/PA7 ���� LED

    /* ����Demo�Ĳ��Բ�������� */
    1.��������س���λ���У�
    2.D1���������������ɿ� KEY1 ������D2 ��˸��


4��ע������
    ��

1. Function description

    This example shows how to control LED blinking by externally triggering an interrupt.
    
2. Use environment

     /* Software development environment: the name and version number of the software tool used in the current project. */
        IDE tool: KEIL MDK-ARM 5.34.0.0
    
     /* Hardware environment: The development hardware platform corresponding to the project. */
        Development Board: N32G003F5S7-STB V1.0

3. Instructions for use

     /*Describe related module configuration methods; for example, clock, I/O, etc. */
     1. SystemClock: 48MHz
     2. GPIO��PA11 is selected as the external interrupt input, PA6\PA7 controls the LED .

     /*Describe the test steps and phenomena of the Demo */
     1. Compile and download the code to reset and run.
     2. D1 keep on; Press and release the KEY2 button continuously, then the D2 will blink.

4. Matters needing attention
     None