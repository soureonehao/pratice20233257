#include<stdio.h>
void main()
{
	int arr1[10], arr2[10], i, j = 0, k = 0, l, box;	//定义数组，累加器，盒子变量
	printf("请输入5个数");
	for (i = 0; i < 5; i++) {
		scanf_s("%d",&arr1[i]);	//输入第一个数组
		j++;		//计算输入最后元素的序号
	}
	for (i = 0; i < 5; i++) {
		for (l = 0; l < 4; l++) {	//冒泡排序
			if (arr1[l] < arr1[l + 1]) {
				box = arr1[l];
				arr1[l] = arr1[l + 1];
				arr1[l + 1] = box;
			}
		}
	}
	printf("\n他们降序排序为：");
	for (i = 0; i < 5; i++) {	
		printf("%d", arr1[i]);
	}
	printf("\n请再输入5个数");
	for (i = 0; i < 5; i++) {
		scanf_s("%d",&arr2[i]);//输入第二个数组
	}
	for (i = 0; i < 5; i++) {
		for (l = 0; l < 5; l++) {
			if (arr2[l] < arr2[l + 1]) {	//冒泡排序
				box = arr2[l];
				arr2[l] = arr2[l + 1];
				arr2[l + 1] = box;
			}
		}
	}
	printf("\n他们降序排序为：");
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
	printf("\n合并后他们降序排序为：");
	for (i = 0; i < 10; i++) {
		printf("%d", arr1[i]);
	}

}