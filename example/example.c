#include <stdio.h>
#include <stdlib.h>
#include "uthread.h"

void thread_1(void* args)
{
	/* stuff */
	exit_uthread();
}


void thread_2(void* args)
{
	/* stuff */
	exit_uthread();
}


int main(int argc, char *argv[])
{
	uthread_t ut1, ut2;

	set_quantum(17);

	if (create_vcpu(42) == 0) {
		printf("Échec de la création des vcpu\n");
		exit(1);
	}
	
	ut1 = create_uthread(&thread_1, NULL);
	ut2 = create_uthread(&thread_2, NULL);

	start_uthreads();
	
    return 0;
}
