/*코드 6.1 1부터 n까지의 합을 계산하는 반복 함수와 재귀 함수*/

//필수 조건 : m >= 1
//결과 : 1부터 n까지의 합 반환

namespace algoSolv {
	int sum(int n) {
		int ret = 0;
		for (int i = 0; i <= n; i++)
			ret += i;
		return ret;
	}
}