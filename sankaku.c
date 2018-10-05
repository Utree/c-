#include <stdio.h>
#include <math.h>
// πを定義
#define PI 3.141592

int main(void) {
	// 角度を初期化
	double deg = 60;
	// ラジアンを求める
	double rad = deg * PI / 180.0;
	// SINを求める
	double y = cos(rad);
	// 表示
	printf("y = cos(60): %f\n", y);

	return 0;
}
