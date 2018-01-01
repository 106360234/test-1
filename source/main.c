#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#define FREQ_CNT 8
#define FREQ_CNT1 21
#define QUARTER_SPEED 200
#define QUARTER_SPEED1 100
void PalmHeart(void);

int main()
{
	PalmHeart();
}


void PalmHeart(void)
{
	int i;

	const DWORD Freq[FREQ_CNT1 + 1] = { 0, 262, 294, 330, 349, 392, 440, 494,
		524, 588, 660, 698, 784, 880, 998,
		1048, 1176, 1320, 1396, 1568, 1760, 1976 };

	const DWORD PalmHeart_Freq[] = {
		6, 6, 10, 9, 8, 7, 6, 8, 9, 7, 5, 0,
		3, 5, 6, 8, 9, 10, 9, 8, 9, 10, 10, 9, 0,
		6, 6, 10, 9, 8, 7, 6, 8, 9, 7, 5, 0,
		3, 5, 6, 8, 7, 8, 7, 6, 5, 6, 0,
		0, 6, 8, 10, 11, 9, 10, 11, 13, 12, 11, 10,
		0, 8, 9, 10, 12, 11, 10, 9, 9,
		0, 7, 8, 9, 11, 10, 9, 9, 10, 0,
		10, 12, 13, 10, 10, 12, 9, 9, 10, 12, 10, 9, 10, 6, 0,
		10, 12, 13, 10, 10, 15, 14, 12, 9, 8, 9, 8, 8, 9, 10, 0,
		10, 12, 13, 10, 10, 12, 9, 9, 10, 12, 14, 14, 15, 13, 0,
		13, 12, 11, 12, 13, 15, 15, 14, 13, 0
	};

	const DWORD PalmHeart_Tempo[] = {
		4, 2, 2, 4, 2, 2, 2, 2, 2, 2, 4, 1,
		2, 2, 4, 2, 2, 1, 1, 2, 2, 5, 2, 4, 2,
		4, 2, 2, 4, 2, 2, 2, 2, 2, 2, 4, 1,
		2, 2, 4, 2, 2, 1, 1, 2, 2, 4, 2,
		2, 2, 2, 2, 5, 1, 1, 2, 2, 2, 2, 4,
		2, 1, 1, 2, 2, 2, 1, 1, 2,
		2, 1, 1, 2, 2, 2, 1, 2, 6, 2,
		2, 2, 2, 1, 2, 2, 4, 2, 2, 2, 2, 1, 2, 4, 1,
		2, 2, 2, 1, 2, 3, 2, 2, 2, 2, 2, 1, 2, 1, 4, 1,
		2, 2, 2, 1, 2, 3, 4, 2, 2, 2, 1, 2, 2, 4, 1,
		2, 2, 2, 1, 2, 3, 4, 3, 4, 2
	};
	for (i = 0; i != sizeof(PalmHeart_Freq) / sizeof(PalmHeart_Freq[0]); ++i)
	{
		if (PalmHeart_Tempo[i] == Freq[0]) Sleep(PalmHeart_Tempo[i] * QUARTER_SPEED);
		else Beep(Freq[PalmHeart_Freq[i]], PalmHeart_Tempo[i] * QUARTER_SPEED);
	}
}