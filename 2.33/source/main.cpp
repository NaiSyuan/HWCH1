#include <stdio.h>
#include <stdlib.h>

float main()
{
	float km1, gl, km2, pf, tolls, total, savemoney ,people, kmmoney;

	printf("–ぱ︽緋そń计:");
	scanf_s("%f", &km1);
	printf("\n–そど═猳基:");
	scanf_s("%f", &gl);
	printf("\n–そど═猳︽緋そń计:");
	scanf_s("%f", &km2);
	printf("\n–ぱ氨ó禣:");
	scanf_s("%f", &pf);
	printf("\n–ぱ筁隔禣:");
	scanf_s("%f", &tolls);

	printf("\n计:");
	scanf_s("%f", &people);
	printf("\n–そń禣ノ:");
	scanf_s("%f", &kmmoney);

	total = (gl / km2) * km1 + pf + tolls;
	savemoney = total - (km1 * kmmoney) / people;

	printf("\n眤–ぱ痁秨ó禣:%.2fじ", total);
	printf("\n眤:%.2fじ", savemoney);
}