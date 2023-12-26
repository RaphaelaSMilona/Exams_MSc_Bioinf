#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
        //the average prokaryote gene length is typically around 500-3000bp 
	char seq[3000];	
	while( scanf("%s",seq) ==1 )
	{
		int lengthseq;
		lengthseq=strlen(seq);
        	int i;
		for(i=0; i<=lengthseq; i++)
		{
			if( seq[i] == 'A')
			{
				i++;
				if( seq[i] == 'T')
                        	{
                                	i++;
                        		if( seq[i] == 'G')
                        		{
						char gene[3000];
						while( scanf("%s",gene) ==1)
					}
                        	}
			}
		}
	}



}
