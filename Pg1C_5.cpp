/*/////////////////////////////////////////////////////////////////////////////////////
�ۑ�C5.�yif, else if �Łz�[�N������s���v���O�������쐬���Ȃ����B�������Aif, else if, else���g�����ƁB
	�������͂��[�N���ǂ����𔻒肵�A�[�N�Ȃ灛���A�����łȂ���΁~��\������B
	�[�N�F����ŁA4�Ŋ���؂��100�Ŋ��؂�Ȃ��A�܂���400�Ŋ��؂��N�i2����29���܂Łj
	��3�̏�����ʁX�� if, else if�� �ō쐬���邱��

�L�[���[�h�F�[�N�Aif���Aelse if�A��r���Z�q�A��]���Z�q
�ŏI�X�V���F2015.04.01
*/
#define _CRT_SECURE_NO_WARNINGS  // �]�v�Ȍx�����o�Ȃ��悤�ɂ���
#include	<stdio.h>

int	main( void )
{
	int	year;	// �����F���ׂ�N

	printf( "�������͂��Ă�������" );
	scanf( "%d", &year );
	if ( year <= 0 )	return 0;

	//// �ȉ��ɉ[�N�𔻒肷��v���O�������쐬����
	if(0 == year % 4){
		if(0 != year % 100){
		printf("��");
		return 0;
		}
	}
	else if(0 == year % 400){
		printf("��");
		return 0;
		}
	else{
		printf("�~");
		return 0;
	}
}