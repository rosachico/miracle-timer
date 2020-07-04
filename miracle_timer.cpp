#include <stdio.h>
#include <windows.h>

int main()
{
	int key = 0;
	int i;

	printf("miracle-timer ver.1.0\n");
	printf("タイマーをセットするには sを入力してEnterキー を押してください。\n");
	printf("タイマーをセットせずに終了する場合は eを入力してEnterキー を押してください。\n");

	do {
		if ((key = getchar()) == 's') {
			printf("タイマーをセットしました\n");
			Sleep(7200000);	// 2時間待つ
			printf("");
			printf("ポケモンが交換されたかもしれません！ミラクルボックスを確認してみましょう。\n");
			// 5回アラートを鳴らす
		for (i = 0; i <= 4; i++) {
			printf("\a");
			Sleep(1000);
			}
		break;
		}
		else;
	}
	while (key != 'e');	// eが入力されるまでループ
	return 0;
}