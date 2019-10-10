#include <stdio.h>
#include <stdlib.h>
#include <math.h>	      // ïîäêëþ÷àåì ìàòåìàòè÷åñêèå ôóíêöèè	
#include <locale.h>		  // ïîäêëþ÷àåì áèáëèîòåêó ëîêàëèçàöèè (äëÿ ðóññêîãî ÿçûêà â êîíñîëè)
 

int main (int argc, char const *argv[])


{
	setlocale(LC_ALL,"Russian");   // óñòàíàâëèâàåì ðóññêóþ ëîêàëü â ïðîãðàììå
    int x, res;                    
    scanf("%d",&x);
    res=128*x*x;                   //ðàññ÷èòûâàåì ðåçóëüòàò
    printf ("res = %d\n",res);    //âûâîä ðåçóëüòàòà íà ýêðàí
    return 0;
}
