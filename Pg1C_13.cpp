/*/////////////////////////////////////////////////////////////////////////////////////
課題C13. for文を使って、配列の中の最大値を求め、要素番号と値を表示するプログラムを作成しなさい。
	以下の条件でテストし正しく動作するのを確認すること
	�@ 最大値が最初にある場合
	�A 最大値が最後にある場合
	�B すべての値がマイナスの値の場合

キーワード：初期値、for, 配列、要素番号
最終更新日：2015.04.01
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>
#include	<stdlib.h>

int	main( void )
{
	int	data[ 5 ];
	int	max, maxi;
	int	i;

	for ( i = 0; i < 5; i ++ )
	{
		printf( "data[%d]=", i );
		scanf( "%d", &data[ i ] );
	}

	//// 以下に最大値と要素番号を求めるプログラムを作成する
	maxi = 0;
	max = data[0];
	for(i=1;i<5;i++){
		if(max<data[i]){
			max = data[i];
			maxi = i;
		}
	}

	// 求めた最大値と要素番号を表示する
	printf( "最大値は%d番目の%dです\n", maxi, max );

	return 0;
}
