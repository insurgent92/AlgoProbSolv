/*�ڵ� 6.1 1���� n������ ���� ����ϴ� �ݺ� �Լ��� ��� �Լ�*/

//�ʼ� ���� : m >= 1
//��� : 1���� n������ �� ��ȯ

namespace algoSolv {
	int sum(int n) {
		int ret = 0;
		for (int i = 0; i <= n; i++)
			ret += i;
		return ret;
	}
}