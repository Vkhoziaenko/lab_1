#include <stdio.h>
#include <stdlib.h>
#include <math.h>	// ïîäêëþ÷àåì ìàòåìàòè÷åñêèå ôóíêöèè	
#include <locale.h>	// ïîäêëþ÷àåì áèáëèîòåêó ëîêàëèçàöèè (äëÿ ðóññêîãî ÿçûêà â êîíñîëè)


int main() 
{
	setlocale(LC_ALL,"Russian");  // óñòàíàâëèâàåì ðóññêóþ ëîêàëü â ïðîãðàììå		
	
	float x, y, z, a, b, c, s;	  // äåêëàðèðóåì íåîáõîäèìûå ïåðåìåííûå		
	
	printf("Ââåäèòå ïåðåìåííóþ x<0:");
	scanf("%f",&x);
	
	printf("Ââåäèòå ïåðåìåííóþ y>0:");
	scanf("%f",&y);
	
	printf("Ââåäèòå ïåðåìåííóþ z>0:");
	scanf("%f",&z);
	
	a = exp(fabs(x-y))*pow(fabs(x-y),x+y);
	
	b = atan(x)+atan(z);
	
	c = pow(pow(x,6)+pow(log(y),2),1/3.); 
	
	s = a/b+c;		//ðàññ÷èòûâàåì ðåçóëüòàò
	
	printf("%f",s);	         //âûâîä ðåçóëüòàòà íà ýêðàí	
	
	return 0;
}
