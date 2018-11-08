#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 10
int main() { 
	char str1[20], str2[20], *p1, *p2;
	int cnt = 0;
	printf("请输入两个自符串:\n");
	scanf("%s%s", str1, str2);
	p1 = str1;
	p2 = str2;
	while (*p1 != '\0') {
		if (*p1 == *p2) {
			while (*p1 == *p2 && *p2 != '\0') {
				p1++;
				p2++;
			}
		}
		else {
			p1++;
		}
		if (*p2 == '\0') {
			cnt++;
			p2 = str2;
		}
	}
	printf("字符串%s在字符串%s中出现的次数为:%d\n", str2, str1, cnt);


	char str1[30], str2[30], *p1, *p2;
	p1 = str1;
	p2 = str2;
	gets(str1);
	gets(str2);
	printf("原有的两个字符串为:\n");
	puts(str1);
	puts(str2);
	while (*p1 != '\0') {
		++p1;
	}
	while (*p2 != '\0') {
		*p1++ = *p2++;
	}
	*p1 = '\0';
	printf("连接后的新字符串为:\n");
	puts(str1);


	char str1[30], str2[30], temp[30];
	int n, l, i, j;
	gets(str1);
	gets(str2);
	printf("输入插入的位置:");
	scanf("%d", &n);
	strcpy(temp, &str1[n - 1]);
	for (i = n - 1, j = 0; j <= strlen(str2) - 1; i++, j++) {
		str1[i] = str2[j];
	}
	for (i, j = 0; j <= strlen(temp); i++, j++) {
		str1[i] = temp[j];
	}
	puts(str1);


	int i, j = 0;
	char str1[N], str2[N];
	gets(str1);
	for (i = 1; i <= strlen(str1) - 1; i += 2) {
		if (str1[i] % 2 == 1) {
			str2[j++] = str1[i];
		}
		str2[j] = '\0';
	}
	puts(str1);
	puts(str2);


	char str[20];
	long int n = 0;
	int i;
	gets(str);
	puts(str);
	for (i = 0; i <= strlen(str) - 1; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			n = (str[i] - '0') + n * 10;
		}
	}
	printf("%ld\n", n);

	int i, j;
	char s[20], ch;
	printf("输入一串字符:\n");
	gets(s);
	printf("输入删除的一个字符:\n");
	ch = getchar();
	for (i = 0; i <= strlen(s) - 1; i++) {
		if (s[i] == ch) {
			for (j = i; j <= 9; j++) {
				s[j] = s[j + 1];
			}
		}
		s[j] = '\0';
	}
	printf("删除后字符为:\n");
	puts(s);
	system("pause");
	return 0;
}