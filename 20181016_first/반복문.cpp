#include <stdio.h>
int main() {
	///ctrl-k, cntl-f: format. �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�.
	////cntl-]: matching ��ȣ(paranthesis)
	////ctrl-k, ctrl-c: ������ ������ comment out
	////ctrl=k, ctrl-u : undo comment out


	//int count =1;
	//while (count<=10) {
	//	printf("count=%d\n", count);
	//	count = count +1;
	//}

	/*int count =1;
	while (count<=10) {
	printf("count=%d\n", count++);
	}*/

	//1�������� 100���� 3�� ����� ȭ�鿡 ���
	/*int count =1;
	while(count<=100) {
	if(count%3==0){
	printf("count=%d\n", count);
	}
	count++;
	}*/

	//1�������� 100���� 3�� ����� ������ ������ ȭ�鿡 ���
	/*int count =1;
	while(count<=100) {
		if(count%3==1 || count%3==2){
			printf("count=%d\n", count);
		}
		count++;
	}*/

	//Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	//���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�
	//1000�̻��̸� ����
	//int input;
	//while(1){///1�� ���̹Ƿ� ��� ����
	//	printf("������ �Է��ϼ���:");
	//	scanf("%d", &input);
	//	if(input==100)
	//		break;////����
	//	if(input>1000)
	//		printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է��ϼ���.\n");
	//	continue;///���⼭ �ٽ� while ���ǽ����� ���ư�
	//	if (input%3==0)
	//		printf("�Է��� ���� %d�� 3�� ����Դϴ�.\n", input);
	//	else 
	//		printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�.\n", input);
	//}

	//1���� 100���� ������ ���� ���Ͻÿ�
	int sum=0; int i=1;
	while(i<=100){
		/*sum=sum+1;
		i++;
		sum=sum+ i++;*/
		sum += i++;
	}
	printf("the sum is %d\n",sum);




	printf("���α׷� ����\n");


	////�� �Ʒ��� ��а� ����
	return 0;
}