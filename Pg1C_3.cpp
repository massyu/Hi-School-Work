/*//////////////////////////////////////////////////////////////////////////////////
�ۑ�C3 5�̒l�̍ő�l�����ߕ\������v���O�������쐬���Ȃ����B

�L�[���[�h�Fif���A��r���Z�q�A������Z�q

�ŏI�X�V���F2015.04.01
*/
#define _CRT_SECURE_NO_WARNINGS  // �]�v�Ȍx�����o�Ȃ��悤�ɂ���
#include	<stdio.h>

int	main( void )
{
	int	a, b, c, d, e;	// ���ׂ�l
	int	max;	// �ő�l������

	printf( "���l��5���͂��Ă������� > " );
	scanf( "%d %d %d %d %d", &a, &b, &c, &d, &e );

	//// �ő�l�����߂�v���O�������쐬����
	max = a;
	if(max<b)
		max = b;
	if(max<c)
		max = c;
	if(max<d)
		max = d;
	if(max<e)
		max = e;


	// ���ʂ�\������
	printf( "�ő�l�� %d �ł�\n", max );

	return 0;
}
