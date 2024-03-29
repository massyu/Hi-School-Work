/*/////////////////////////////////////////////////////////////////////////////////////
課題C5.【if, else if 版】閏年判定を行うプログラムを作成しなさい。ただし、if, else if, elseを使うこと。
	西暦を入力し閏年かどうかを判定し、閏年なら○を、そうでなければ×を表示する。
	閏年：西暦で、4で割り切れて100で割切れない、または400で割切れる年（2月は29日まで）
	★3つの条件を別々の if, else if文 で作成すること

キーワード：閏年、if文、else if、比較演算子、剰余演算子
最終更新日：2015.04.01
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main( void )
{
	int	year;	// 整数：調べる年

	printf( "西暦を入力してください" );
	scanf( "%d", &year );
	if ( year <= 0 )	return 0;

	//// 以下に閏年を判定するプログラムを作成する
	if(0 == year % 4){
		if(0 != year % 100){
		printf("○");
		return 0;
		}
	}
	else if(0 == year % 400){
		printf("○");
		return 0;
		}
	else{
		printf("×");
		return 0;
	}
}
