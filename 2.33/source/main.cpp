#include <stdio.h>
#include <stdlib.h>

float main()
{
	float km1, gl, km2, pf, tolls, total, savemoney ,people, kmmoney;

	printf("每天行駛公里數:");
	scanf_s("%f", &km1);
	printf("\n每公升汽油價格:");
	scanf_s("%f", &gl);
	printf("\n每公升汽油行駛公里數:");
	scanf_s("%f", &km2);
	printf("\n每天停車費:");
	scanf_s("%f", &pf);
	printf("\n每天過路費:");
	scanf_s("%f", &tolls);

	printf("\n共乘人數:");
	scanf_s("%f", &people);
	printf("\n共乘每公里費用:");
	scanf_s("%f", &kmmoney);

	total = (gl / km2) * km1 + pf + tolls;
	savemoney = total - (km1 * kmmoney) / people;

	printf("\n您每天上班開車花費約:%.2f元", total);
	printf("\n您共乘約可省下:%.2f元", savemoney);
}