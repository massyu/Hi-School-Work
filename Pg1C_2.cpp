/*//////////////////////////////////////////////////////////////////////////////////
�ۑ�C2. 10�i����2�i���ɕϊ������ϊ��̃v���O�������쐬���Ȃ����B�������J��Ԃ������ifor���Awhile���Ȃǁj�͍s��Ȃ����ƁB
���s��̒ʂ�A2�i����11���ځi2^10�j����\�������邱�ƁB
	�����F�@���͂����10�i���͍ő��2047(2��11��-1)�܂łƂ���B

	���s��F�u2000�v����͂���Ɓu11111010000�v�ƕ\�������B
	10�i������͂��Ă������� > 2000
	11111010000

	�L�[���[�h�F��ϊ��A2�i���A10�i���A��������
	
�ŏI�X�V���F2015.04.01
*/
#include	<stdio.h>

int	main( void )
{
	int	dec;	// 2�i���֕ϊ������10�i��
	int bin;		//2�̗ݏ�@���q���g�F�����l��2^10
	int	no;     // 2�i���֊�ϊ����ꂽ���̐��l(0�܂���1)

	printf( "10�i������͂��Ă������� > " );
	scanf_s( "%d", &dec );
	//// �ȉ��Ɋ�ϊ��̃v���O�������쐬����B
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
