#include<stdio.h>
void main()
{
	int arr1[10], arr2[10], i, j = 0, k = 0, l, box;	//�������飬�ۼ��������ӱ���
	printf("������5����");
	for (i = 0; i < 5; i++) {
		scanf_s("%d",&arr1[i]);	//�����һ������
		j++;		//�����������Ԫ�ص����
	}
	for (i = 0; i < 5; i++) {
		for (l = 0; l < 4; l++) {	//ð������
			if (arr1[l] < arr1[l + 1]) {
				box = arr1[l];
				arr1[l] = arr1[l + 1];
				arr1[l + 1] = box;
			}
		}
	}
	printf("\n���ǽ�������Ϊ��");
	for (i = 0; i < 5; i++) {	
		printf("%d", arr1[i]);
	}
	printf("\n��������5����");
	for (i = 0; i < 5; i++) {
		scanf_s("%d",&arr2[i]);//����ڶ�������
	}
	for (i = 0; i < 5; i++) {
		for (l = 0; l < 5; l++) {
			if (arr2[l] < arr2[l + 1]) {	//ð������
				box = arr2[l];
				arr2[l] = arr2[l + 1];
				arr2[l + 1] = box;
			}
		}
	}
	printf("\n���ǽ�������Ϊ��");
	for (i = 0; i < 5; i++) {
		printf("%d", arr2[i]);
	}
	for (i = j; i < 10; i++) {
		arr1[i] = arr2[k];
		k++;
	}
	for (i = 0; i < 10; i++) {
		for (l = 0; l < 9; l++) {
			if (arr1[l] < arr1[l + 1]) {
				box = arr1[l];
				arr1[l] = arr1[l + 1];
				arr1[l + 1] = box;
			}
		}
	}
	printf("\n�ϲ������ǽ�������Ϊ��");
	for (i = 0; i < 10; i++) {
		printf("%d", arr1[i]);
	}

}