/*/////////////////////////////////////////////////////////////////////////////////////
�ۑ�C7. �z���5�̒l�̍ő�l�����߂�v���O�������쐬���Ȃ����B�i�ۑ�R�̎葱����z����g���ď��������j

�L�[���[�h�F�����l�A�z��, �v�f�ԍ�, if�Aelse if�Aelse
�ŏI�X�V���F2015.04.01
*/
#define _CRT_SECURE_NO_WARNINGS  // �]�v�Ȍx�����o�Ȃ��悤�ɂ���
#include	<stdio.h>

int	main( void )
{
	int	data[ 5 ];	// ���ׂ�l
	int	max;	// �ő�l������

	printf( "���l��5���͂��Ă������� > " );
	scanf( "%d %d %d %d %d", &data[ 0 ], &data[ 1 ], &data[ 2 ], &data[ 3 ], &data[ 4 ] );

	//// �ȉ��ɍő�l�����߂�v���O�������쐬����
	max = data[0];
	if(max<data[1])
		max = data[1];
	if(max<data[2])
		max = data[2];
	if(max<data[3])
		max = data[3];
	if(max<data[4])
		max = data[4];

	printf( "�ő�l�� %d �ł�\n", max );

	return 0;
}
