#include "stdio.h"
#include "stdlib.h"

char*lI,Il[11l];*I1;
// "global"s
// I1[0]: I1pointer
// I1[1]: I1size
// I1[2]: lIpointer
// "local"s
// I1[3]: indent
// I1[4]: instruction index

left(){--*I1;}
right(){++*I1;}
plus(){++I1[*I1];}
min(){--I1[*I1];}
dot(){printf(Il+9, I1[*I1]);}
comma(){I1[*I1] = getchar();}

bra(){I1[*I1]||(moveToKet(I1[3]=1));}
moveToKet(){I1[3]&&(I1[2]++,lI[I1[2]]-Il[6]||I1[3]++,lI[I1[2]]-Il[7]||I1[3]--,moveToKet());}

ket(){I1[*I1]&&(moveToBra(I1[3]=1));}
moveToBra(){I1[3]&&(I1[2]--,lI[I1[2]]-Il[7]||I1[3]++,lI[I1[2]]-Il[6]||I1[3]--,moveToBra());}

// (*instr)()
(*instrs[])()= {left, right, plus, min, comma, dot, bra, ket};

IlReadLoop(){Il[I1[4]]&&(lI[I1[2]]-Il[I1[4]]||instrs[I1[4]](),IlReadLoop(I1[4]++));}

// delme!
printI1(){
	printf("mp=%d I1=%d pp=%d ins=%c (%d)\n", *I1, I1[*I1], I1[2], lI[I1[2]], lI[I1[2]]);
	int i;
	for(i = 1; i < 4; i++) {
		printf("%d: %d (%c)\n", i, I1[i], I1[i]);
	}
}

allocAndInit(){realloc(I1,sizeof(int)*I1[1]<<1);memset(I1+I1[1],Il[8],I1[1]*sizeof(int));I1[1]<<=1;}

doLoop(){/*printI1();*/lI[I1[2]]&&(IlReadLoop(I1[4] = 0),*I1-I1[1]||allocAndInit(),doLoop(++(I1[2])));}

// <>+-.,[]\0%c
CharLoop(){
	(I1[0]-12)&&
}

CalculateCharTable(){
	CharLoop(Il[0] = ';' + (I1[0] = 1));
	int i;
	for(i = 1; i < 12; i += 1) {
		Il[i] = Il[i - 1] + 2.0 + (-21.0 + (21.0 + (-11.0 + (4.0 + (-23.0/30.0 + (-0.1 + (139.0/1260.0 + (-1277.0/40320.0 + (31.0/8640.0 + (251.0*(-10.0 + (double)i))/453600.0)*(-9.0 + (double)i))*(-8.0 + (double)i))* (-7.0 + (double)i))*(-6.0 + (double)i))*(-5.0 + (double)i))*(-4.0 + (double)i))*(-3.0 + (double)i))*(-2.0 + (double)i))* (-1.0 + (double)i) + 0.001;
		printf("%d, %c\n", Il[i]);
	}
	
	// 00111100
	// 00111110
	// 00100000
	// 00101101
	// 00101110
	// 00101100
	// 01011011
	// 01011101 
	// 00000000
	// 00100101
	// 01100011
}

main(int argc, char**argv) {lI=argv[1],CalculateCharTable(),I1=calloc(8,sizeof(int)),I1[0]=5,I1[1]=8,doLoop();}
