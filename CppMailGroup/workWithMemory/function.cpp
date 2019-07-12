#include "function.h"

int strcmp(const char * str1, const char * str2)
{
	while (*str1 == *str2 && *str1) {
		str1++, str2++;
	}
	return *str1 - *str2;
}

char * strcpy(char * str1, const char * str2)
{
	char *d = str1;
	while (*d++ = *str2++);
	return str1;
}

char * strcat(char * str1, const char * str2)
{
	char *cp = str1;
	while (*cp) str1++;
	while (*cp++ = *str2++);
	return str1;
}

int strlen_(const char * str)
{
	const char * eos= str;
	while (*eos++);
	return (int)(eos-str-1);
}

char * substr(char * str, char * sub)
{
	int i, j;
	for (i = j = 0; str[i] != '\0'; i++) {
		while ((str[i + j] != '\0') && (sub[j] == str[i + j])) j++;
		if (sub[j] == '\0') return &str[i];
		j = 0;
	}
	return nullptr;
}

char * strchr_(const char * str, int ch)
{
	while (*str && *str != (char)ch) str++;
	if (*str == (char)ch) return (char*)str;
	return nullptr;
}

int findmax(int * arr, int count)
{
	int idx = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] > idx) idx = i;
	}
	return idx;
}

int getmax2(const int * arr, int count)
{
	int prev_max = arr[0]; int curr_max = arr[1];
	if (prev_max > curr_max) { prev_max = arr[1]; curr_max = arr[0]; }
	for (int i = 2; i < count; ++i) {
		if (arr[i] > curr_max) {
			prev_max = curr_max; curr_max = arr[i];
		}
	}
	return prev_max;
}

