/*//////////////////////////////////////////////////////////////////////////////////
課題C2. 10進数を2進数に変換する基数変換のプログラムを作成しなさい。ただし繰り返し処理（for文、while文など）は行わないこと。
実行例の通り、2進数の11桁目（2^10）から表示させること。
	条件：　入力される10進数は最大で2047(2の11乗-1)までとする。

	実行例：「2000」を入力すると「11111010000」と表示される。
	10進数を入力してください > 2000
	11111010000

	キーワード：基数変換、2進数、10進数、順次処理
	
最終更新日：2015.04.01
*/
#include	<stdio.h>

int	main( void )
{
	int	dec;	// 2進数へ変換される10進数
	int bin;		//2の累乗　※ヒント：初期値は2^10
	int	no;     // 2進数へ基数変換された桁の数値(0または1)

	printf( "10進数を入力してください > " );
	scanf_s( "%d", &dec );
	//// 以下に基数変換のプログラムを作成する。
	bin = 1024;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d",no);
	dec = dec % bin;
	bin = bin / 2;
	no = dec / bin;
	printf("%d\n",no);

	return 0;
}
