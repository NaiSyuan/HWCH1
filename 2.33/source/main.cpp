#include <stdio.h>
#include <stdlib.h>

float main()
{
	float km1, gl, km2, pf, tolls, total, savemoney ,people, kmmoney;

	printf("�C�Ѧ�p������:");
	scanf_s("%f", &km1);
	printf("\n�C���ɨT�o����:");
	scanf_s("%f", &gl);
	printf("\n�C���ɨT�o��p������:");
	scanf_s("%f", &km2);
	printf("\n�C�Ѱ����O:");
	scanf_s("%f", &pf);
	printf("\n�C�ѹL���O:");
	scanf_s("%f", &tolls);

	printf("\n�@���H��:");
	scanf_s("%f", &people);
	printf("\n�@���C�����O��:");
	scanf_s("%f", &kmmoney);

	total = (gl / km2) * km1 + pf + tolls;
	savemoney = total - (km1 * kmmoney) / people;

	printf("\n�z�C�ѤW�Z�}����O��:%.2f��", total);
	printf("\n�z�@�����i�٤U:%.2f��", savemoney);
}