#include "stdio.h"
#include "stdlib.h"

char*A,B[11l];*C;
D(){--*C;}
E(){++*C;}
F(){++C[*C];}
G(){--C[*C];}
H(){C[*C] = getchar();}
I(){printf(B+9, C[*C]);}
J(){C[*C]||(L(C[3]=1));}
K(){C[*C]&&(M(C[3]=1));}
L(){C[3]&&(C[2]++,A[C[2]]-B[6]||C[3]++,A[C[2]]-B[7]||C[3]--,L());}
M(){C[3]&&(C[2]--,A[C[2]]-B[7]||C[3]++,A[C[2]]-B[6]||C[3]--,M());}

// (*instr)()
(*N[])()= {D, E, F, G, H, I, J, K};

O(){B[C[4]]&&(A[C[2]]-B[C[4]]||N[C[4]](),O(C[4]++));}

P(){A[C[2]]&&(O(C[4] = 0),*C-C[1]||(C=realloc(C,sizeof(int)*C[1]<<1),memset(C+C[1],B[8],C[1]*sizeof(int)),C[1]<<=1),P(++(C[2])));}
Q(){(C[0]-12)&&(B[*C] = B[C[0] - 1] + 2.0 + (-21.0 + (21.0 + (-11.0 + (4.0 + (-23.0/30.0 + (-0.1 + (139.0/1260.0 + (-1277.0/40320.0 + (31.0/8640.0 + (251.0*(-10.0 + (double)*C))/453600.0)*(-9.0 + (double)*C))*(-8.0 + (double)*C))* (-7.0 + (double)*C))*(-6.0 + (double)*C))*(-5.0 + (double)*C))*(-4.0 + (double)*C))*(-3.0 + (double)*C))*(-2.0 + (double)*C))* (-1.0 + (double)*C) + 0.001,Q((*C)++));}
main(int argc, char**argv) {C=calloc(8,sizeof(int)),A=argv[1],Q(B[0] = ';' + (C[0] = 1)),C[0]=5,C[1]=8,P();}

// delme!
printMem(){
	printf("mp=%d C=%d pp=%d ins=%c (%d)\n", *C, C[*C], C[2], A[C[2]], A[C[2]]);
	int i;
	for(i = 1; i < 4; i++) {
		printf("%d: %d (%c)\n", i, C[i], C[i]);
	}
}
