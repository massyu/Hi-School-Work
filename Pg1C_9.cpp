/*/////////////////////////////////////////////////////////////////////////////////////
�ۑ�C9. for�����g�����J�Ԃ��ŁA�z��̗v�f�̐��l�����ׂč��v���A���̐��l��\������v���O�������쐬���Ȃ����B
�L�[���[�h�Ffor���A�z��A�z��̗v�f���A�z��̗v�f�̐��l
�ŏI�X�V���F2015.04.01
*/
#define _CRT_SECURE_NO_WARNINGS  // �]�v�Ȍx�����o�Ȃ��悤�ɂ���
#include	<stdio.h>

int	main( void )
{
	int	data[ 4 ];	// ���v����l�̐����z��
	int	ans = 0;	// ���v�l������
	int	i;

	printf( "���v���鐔�l��4���͂��Ă������� > " );
	scanf( "%d %d %d %d", &data[ 0 ], &data[ 1 ], &data[ 2 ], &data[ 3 ]);

	//// �ȉ��ɍ��v�����߂�v���O�������쐬����
	for(i=0;i<4;i++){
		ans = ans + data[i];
	}
	printf( "���v�� %d �ł�\n", ans );

	return 0;
}