/*/////////////////////////////////////////////////////////////////////////////////////
�ۑ�C13. for�����g���āA�z��̒��̍ő�l�����߁A�v�f�ԍ��ƒl��\������v���O�������쐬���Ȃ����B
	�ȉ��̏����Ńe�X�g�����������삷��̂��m�F���邱��
	�@ �ő�l���ŏ��ɂ���ꍇ
	�A �ő�l���Ō�ɂ���ꍇ
	�B ���ׂĂ̒l���}�C�i�X�̒l�̏ꍇ

�L�[���[�h�F�����l�Afor, �z��A�v�f�ԍ�
�ŏI�X�V���F2015.04.01
*/
#define _CRT_SECURE_NO_WARNINGS  // �]�v�Ȍx�����o�Ȃ��悤�ɂ���
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

	//// �ȉ��ɍő�l�Ɨv�f�ԍ������߂�v���O�������쐬����
	maxi = 0;
	max = data[0];
	for(i=1;i<5;i++){
		if(max<data[i]){
			max = data[i];
			maxi = i;
		}
	}

	// ���߂��ő�l�Ɨv�f�ԍ���\������
	printf( "�ő�l��%d�Ԗڂ�%d�ł�\n", maxi, max );

	return 0;
}
