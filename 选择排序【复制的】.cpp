public void selectionSort(int[] list) {

    // ��Ҫ���������Сֵ�Ĵ���

    // Ҫע��һ�㣬��Ҫ���� N �������Ѿ����� N-1 �α������Ѿ�����������

    for (int i = 0; i < list.length - 1; i++) {

        int temp = 0;

        int index = i; // ����������Сֵ������

 

        // Ѱ�ҵ�i��С����ֵ

        for (int j = i + 1; j < list.length; j++) {

            if (list[index] > list[j]) {

                index = j;

            }

        }

 

        // ���ҵ��ĵ�i��С����ֵ���ڵ�i��λ����

        temp = list[index];

        list[index] = list[i];

        list[i] = temp;

 

        System.out.format("�� %d ��:\t", i + 1);

        printAll(list);

    }

}